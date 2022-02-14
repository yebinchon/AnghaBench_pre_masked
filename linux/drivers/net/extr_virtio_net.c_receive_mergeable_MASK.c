
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct xdp_frame {int dummy; } ;
struct xdp_buff {void* data; void* data_end; int * rxq; void* data_hard_start; } ;
struct virtnet_rq_stats {unsigned int bytes; int drops; int xdp_drops; int xdp_redirects; int xdp_tx; int xdp_packets; } ;
struct virtnet_info {unsigned int hdr_len; int vdev; int dev; } ;
struct TYPE_4__ {int gso_type; } ;
struct virtio_net_hdr_mrg_rxbuf {int num_buffers; TYPE_1__ hdr; } ;
struct sk_buff {unsigned int truesize; unsigned int data_len; unsigned int len; struct sk_buff* next; } ;
struct receive_queue {int vq; int mrg_avg_pkt_len; int xdp_rxq; int xdp_prog; } ;
struct page {int dummy; } ;
struct TYPE_5__ {int rx_length_errors; } ;
struct net_device {TYPE_2__ stats; int name; } ;
struct bpf_prog {int dummy; } ;
struct TYPE_6__ {int nr_frags; struct sk_buff* frag_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;





 int FUNC_0 (struct page*,int ) ;
 struct sk_buff* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct bpf_prog*,struct xdp_buff*) ;
 int FUNC_3 (int) ;
 struct xdp_frame* FUNC_4 (struct xdp_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *,unsigned int) ;
 unsigned int FUNC_7 (void*) ;
 unsigned int FUNC_8 (void*) ;
 void* FUNC_9 (struct page*) ;
 struct sk_buff* FUNC_10 (struct virtnet_info*,struct receive_queue*,struct page*,int,unsigned int,unsigned int,int) ;
 int FUNC_11 (char*,int ,int,...) ;
 int FUNC_12 (struct page*) ;
 struct bpf_prog* FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (struct sk_buff*,int,struct page*,int,unsigned int,unsigned int) ;
 scalar_t__ FUNC_17 (struct sk_buff*,int,struct page*,int) ;
 int FUNC_18 (struct sk_buff*,int,unsigned int,unsigned int) ;
 TYPE_3__* FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (int ,struct bpf_prog*,int) ;
 scalar_t__ FUNC_21 (int) ;
 struct page* FUNC_22 (void*) ;
 int FUNC_23 (int ,int ) ;
 unsigned int FUNC_24 (struct virtnet_info*) ;
 int FUNC_25 (struct net_device*,int,struct xdp_frame**,int ) ;
 void* FUNC_26 (int ,unsigned int*) ;
 void* FUNC_27 (int ,unsigned int*,void**) ;
 int FUNC_28 (struct net_device*,struct xdp_buff*,struct bpf_prog*) ;
 struct page* FUNC_29 (struct receive_queue*,int*,struct page*,int,int,unsigned int*) ;
 int FUNC_30 (struct xdp_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_31(struct net_device *VAR_6,
      struct virtnet_info *VAR_7,
      struct receive_queue *VAR_8,
      void *VAR_9,
      void *VAR_10,
      unsigned int VAR_11,
      unsigned int *VAR_12,
      struct virtnet_rq_stats *VAR_13)
{
 struct virtio_net_hdr_mrg_rxbuf *VAR_14 = VAR_9;
 u16 VAR_15 = FUNC_23(VAR_7->vdev, VAR_14->num_buffers);
 struct page *VAR_16 = FUNC_22(VAR_9);
 int VAR_17 = VAR_9 - FUNC_9(VAR_16);
 struct sk_buff *VAR_18, *VAR_19;
 struct bpf_prog *VAR_20;
 unsigned int VAR_21;
 unsigned int VAR_22 = FUNC_7(VAR_10);
 int VAR_23;

 VAR_18 = ((void*)0);
 VAR_13->bytes += VAR_11 - VAR_7->hdr_len;

 FUNC_14();
 VAR_20 = FUNC_13(VAR_8->xdp_prog);
 if (VAR_20) {
  struct xdp_frame *VAR_24;
  struct page *VAR_25;
  struct xdp_buff VAR_26;
  void *VAR_27;
  u32 VAR_28;





  if (FUNC_21(VAR_14->hdr.gso_type))
   goto err_xdp;







  if (FUNC_21(VAR_15 > 1 ||
        VAR_22 < FUNC_24(VAR_7))) {

   VAR_25 = FUNC_29(VAR_8, &VAR_15,
            VAR_16, VAR_17,
            VAR_3,
            &VAR_11);
   if (!VAR_25)
    goto err_xdp;
   VAR_17 = VAR_3;
  } else {
   VAR_25 = VAR_16;
  }




  VAR_27 = FUNC_9(VAR_25) + VAR_17;
  VAR_26.data_hard_start = VAR_27 - VAR_3 + VAR_7->hdr_len;
  VAR_26.data = VAR_27 + VAR_7->hdr_len;
  FUNC_30(&VAR_26);
  VAR_26.data_end = VAR_26.data + (VAR_11 - VAR_7->hdr_len);
  VAR_26.rxq = &VAR_8->xdp_rxq;

  VAR_28 = FUNC_2(VAR_20, &VAR_26);
  VAR_13->xdp_packets++;

  switch (VAR_28) {
  case 130:




   VAR_17 = VAR_26.data -
     FUNC_9(VAR_25) - VAR_7->hdr_len;




   VAR_11 = VAR_26.data_end - VAR_26.data + VAR_7->hdr_len;

   if (FUNC_21(VAR_25 != VAR_16)) {
    FUNC_15();
    FUNC_12(VAR_16);
    VAR_18 = FUNC_10(VAR_7, VAR_8, VAR_25,
             VAR_17, VAR_11,
             VAR_2, 0);
    return VAR_18;
   }
   break;
  case 128:
   VAR_13->xdp_tx++;
   VAR_24 = FUNC_4(&VAR_26);
   if (FUNC_21(!VAR_24))
    goto err_xdp;
   VAR_23 = FUNC_25(VAR_6, 1, &VAR_24, 0);
   if (FUNC_21(VAR_23 < 0)) {
    FUNC_20(VAR_7->dev, VAR_20, VAR_28);
    if (FUNC_21(VAR_25 != VAR_16))
     FUNC_12(VAR_25);
    goto err_xdp;
   }
   *VAR_12 |= VAR_5;
   if (FUNC_21(VAR_25 != VAR_16))
    FUNC_12(VAR_16);
   FUNC_15();
   goto xdp_xmit;
  case 129:
   VAR_13->xdp_redirects++;
   VAR_23 = FUNC_28(VAR_6, &VAR_26, VAR_20);
   if (VAR_23) {
    if (FUNC_21(VAR_25 != VAR_16))
     FUNC_12(VAR_25);
    goto err_xdp;
   }
   *VAR_12 |= VAR_4;
   if (FUNC_21(VAR_25 != VAR_16))
    FUNC_12(VAR_16);
   FUNC_15();
   goto xdp_xmit;
  default:
   FUNC_3(VAR_28);

  case 132:
   FUNC_20(VAR_7->dev, VAR_20, VAR_28);

  case 131:
   if (FUNC_21(VAR_25 != VAR_16))
    FUNC_0(VAR_25, 0);
   goto err_xdp;
  }
 }
 FUNC_15();

 VAR_21 = FUNC_8(VAR_10);
 if (FUNC_21(VAR_11 > VAR_21)) {
  FUNC_11("%s: rx error: len %u exceeds truesize %lu\n",
    VAR_6->name, VAR_11, (unsigned long)VAR_10);
  VAR_6->stats.rx_length_errors++;
  goto err_skb;
 }

 VAR_18 = FUNC_10(VAR_7, VAR_8, VAR_16, VAR_17, VAR_11, VAR_21, !VAR_20);
 VAR_19 = VAR_18;

 if (FUNC_21(!VAR_19))
  goto err_skb;
 while (--VAR_15) {
  int VAR_29;

  VAR_9 = FUNC_27(VAR_8->vq, &VAR_11, &VAR_10);
  if (FUNC_21(!VAR_9)) {
   FUNC_11("%s: rx error: %d buffers out of %d missing\n",
     VAR_6->name, VAR_15,
     FUNC_23(VAR_7->vdev,
       VAR_14->num_buffers));
   VAR_6->stats.rx_length_errors++;
   goto err_buf;
  }

  VAR_13->bytes += VAR_11;
  VAR_16 = FUNC_22(VAR_9);

  VAR_21 = FUNC_8(VAR_10);
  if (FUNC_21(VAR_11 > VAR_21)) {
   FUNC_11("%s: rx error: len %u exceeds truesize %lu\n",
     VAR_6->name, VAR_11, (unsigned long)VAR_10);
   VAR_6->stats.rx_length_errors++;
   goto err_skb;
  }

  VAR_29 = FUNC_19(VAR_19)->nr_frags;
  if (FUNC_21(VAR_29 == VAR_1)) {
   struct sk_buff *VAR_30 = FUNC_1(0, VAR_0);

   if (FUNC_21(!VAR_30))
    goto err_skb;
   if (VAR_19 == VAR_18)
    FUNC_19(VAR_19)->frag_list = VAR_30;
   else
    VAR_19->next = VAR_30;
   VAR_19 = VAR_30;
   VAR_18->truesize += VAR_30->truesize;
   VAR_29 = 0;
  }
  if (VAR_19 != VAR_18) {
   VAR_18->data_len += VAR_11;
   VAR_18->len += VAR_11;
   VAR_18->truesize += VAR_21;
  }
  VAR_17 = VAR_9 - FUNC_9(VAR_16);
  if (FUNC_17(VAR_19, VAR_29, VAR_16, VAR_17)) {
   FUNC_12(VAR_16);
   FUNC_18(VAR_19, VAR_29 - 1,
          VAR_11, VAR_21);
  } else {
   FUNC_16(VAR_19, VAR_29, VAR_16,
     VAR_17, VAR_11, VAR_21);
  }
 }

 FUNC_6(&VAR_8->mrg_avg_pkt_len, VAR_18->len);
 return VAR_18;

err_xdp:
 FUNC_15();
 VAR_13->xdp_drops++;
err_skb:
 FUNC_12(VAR_16);
 while (VAR_15-- > 1) {
  VAR_9 = FUNC_26(VAR_8->vq, &VAR_11);
  if (FUNC_21(!VAR_9)) {
   FUNC_11("%s: rx error: %d buffers missing\n",
     VAR_6->name, VAR_15);
   VAR_6->stats.rx_length_errors++;
   break;
  }
  VAR_13->bytes += VAR_11;
  VAR_16 = FUNC_22(VAR_9);
  FUNC_12(VAR_16);
 }
err_buf:
 VAR_13->drops++;
 FUNC_5(VAR_18);
xdp_xmit:
 return ((void*)0);
}
