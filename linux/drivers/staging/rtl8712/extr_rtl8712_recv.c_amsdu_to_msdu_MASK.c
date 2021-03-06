
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct rx_pkt_attrib {scalar_t__ hdrlen; scalar_t__ iv_len; int tcpchk_valid; int tcp_chkrpt; int * dst; int * src; } ;
struct TYPE_11__ {int len; unsigned char* rx_data; struct rx_pkt_attrib attrib; } ;
struct TYPE_12__ {TYPE_1__ hdr; } ;
union recv_frame {TYPE_2__ u; } ;
typedef int u8 ;
typedef int u16 ;
struct __queue {int dummy; } ;
struct recv_priv {struct __queue free_recv_queue; } ;
struct _adapter {int pnetdev; struct recv_priv recvpriv; } ;
struct TYPE_13__ {int* data; int len; int ip_summed; int dev; int protocol; } ;
typedef TYPE_3__ _pkt ;
typedef int __be16 ;


 int CHECKSUM_NONE ;
 int CHECKSUM_UNNECESSARY ;
 int ETHERNET_HEADER_SIZE ;
 int ETH_ALEN ;
 int ETH_HLEN ;
 int ETH_P_AARP ;
 int ETH_P_IPX ;
 int MAX_SUBFRAME_COUNT ;
 int SNAP_SIZE ;
 int bridge_tunnel_header ;
 TYPE_3__* dev_alloc_skb (int) ;
 int eth_type_trans (TYPE_3__*,int ) ;
 int htons (int) ;
 int memcmp (int*,int ,int ) ;
 int memcpy (int ,int *,int) ;
 int netdev_warn (int ,char*,...) ;
 int netif_rx (TYPE_3__*) ;
 int r8712_free_recvframe (union recv_frame*,struct __queue*) ;
 int recvframe_pull (union recv_frame*,scalar_t__) ;
 int rfc1042_header ;
 int skb_pull (TYPE_3__*,int ) ;
 int skb_push (TYPE_3__*,int) ;
 int skb_put_data (TYPE_3__*,unsigned char*,int) ;
 int skb_reserve (TYPE_3__*,int) ;

__attribute__((used)) static void amsdu_to_msdu(struct _adapter *padapter, union recv_frame *prframe)
{
 int a_len, padding_len;
 u16 eth_type, nSubframe_Length;
 u8 nr_subframes, i;
 unsigned char *pdata;
 struct rx_pkt_attrib *pattrib;
 _pkt *sub_skb, *subframes[MAX_SUBFRAME_COUNT];
 struct recv_priv *precvpriv = &padapter->recvpriv;
 struct __queue *pfree_recv_queue = &(precvpriv->free_recv_queue);

 nr_subframes = 0;
 pattrib = &prframe->u.hdr.attrib;
 recvframe_pull(prframe, prframe->u.hdr.attrib.hdrlen);
 if (prframe->u.hdr.attrib.iv_len > 0)
  recvframe_pull(prframe, prframe->u.hdr.attrib.iv_len);
 a_len = prframe->u.hdr.len;
 pdata = prframe->u.hdr.rx_data;
 while (a_len > ETH_HLEN) {

  nSubframe_Length = *((u16 *)(pdata + 12));

  nSubframe_Length = (nSubframe_Length >> 8) +
       (nSubframe_Length << 8);
  if (a_len < (ETHERNET_HEADER_SIZE + nSubframe_Length)) {
   netdev_warn(padapter->pnetdev, "r8712u: nRemain_Length is %d and nSubframe_Length is: %d\n",
        a_len, nSubframe_Length);
   goto exit;
  }

  pdata += ETH_HLEN;
  a_len -= ETH_HLEN;

  sub_skb = dev_alloc_skb(nSubframe_Length + 12);
  if (!sub_skb)
   break;
  skb_reserve(sub_skb, 12);
  skb_put_data(sub_skb, pdata, nSubframe_Length);
  subframes[nr_subframes++] = sub_skb;
  if (nr_subframes >= MAX_SUBFRAME_COUNT) {
   netdev_warn(padapter->pnetdev, "r8712u: ParseSubframe(): Too many Subframes! Packets dropped!\n");
   break;
  }
  pdata += nSubframe_Length;
  a_len -= nSubframe_Length;
  if (a_len != 0) {
   padding_len = 4 - ((nSubframe_Length + ETH_HLEN) & 3);
   if (padding_len == 4)
    padding_len = 0;
   if (a_len < padding_len)
    goto exit;
   pdata += padding_len;
   a_len -= padding_len;
  }
 }
 for (i = 0; i < nr_subframes; i++) {
  sub_skb = subframes[i];

  eth_type = (sub_skb->data[6] << 8) | sub_skb->data[7];
  if (sub_skb->len >= 8 &&
     ((!memcmp(sub_skb->data, rfc1042_header, SNAP_SIZE) &&
     eth_type != ETH_P_AARP && eth_type != ETH_P_IPX) ||
     !memcmp(sub_skb->data, bridge_tunnel_header, SNAP_SIZE))) {



   skb_pull(sub_skb, SNAP_SIZE);
   memcpy(skb_push(sub_skb, ETH_ALEN), pattrib->src,
    ETH_ALEN);
   memcpy(skb_push(sub_skb, ETH_ALEN), pattrib->dst,
    ETH_ALEN);
  } else {
   __be16 len;

   len = htons(sub_skb->len);
   memcpy(skb_push(sub_skb, 2), &len, 2);
   memcpy(skb_push(sub_skb, ETH_ALEN), pattrib->src,
    ETH_ALEN);
   memcpy(skb_push(sub_skb, ETH_ALEN), pattrib->dst,
    ETH_ALEN);
  }

  if (sub_skb) {
   sub_skb->protocol =
     eth_type_trans(sub_skb, padapter->pnetdev);
   sub_skb->dev = padapter->pnetdev;
   if ((pattrib->tcpchk_valid == 1) &&
       (pattrib->tcp_chkrpt == 1)) {
    sub_skb->ip_summed = CHECKSUM_UNNECESSARY;
   } else {
    sub_skb->ip_summed = CHECKSUM_NONE;
   }
   netif_rx(sub_skb);
  }
 }
exit:
 prframe->u.hdr.len = 0;
 r8712_free_recvframe(prframe, pfree_recv_queue);
}
