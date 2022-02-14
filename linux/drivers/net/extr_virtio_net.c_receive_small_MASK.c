
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct xdp_frame {int dummy; } ;
struct xdp_buff {void* data_hard_start; void* data; void* data_end; int * rxq; } ;
struct virtnet_rq_stats {unsigned int bytes; int drops; int xdp_drops; int xdp_redirects; int xdp_tx; int xdp_packets; } ;
struct virtnet_info {unsigned int hdr_len; int dev; } ;
struct TYPE_2__ {int gso_type; } ;
struct virtio_net_hdr_mrg_rxbuf {TYPE_1__ hdr; } ;
struct skb_shared_info {int dummy; } ;
struct sk_buff {int dummy; } ;
struct receive_queue {int xdp_rxq; int xdp_prog; } ;
struct page {int dummy; } ;
struct net_device {int dummy; } ;
struct bpf_prog {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;





 int FUNC_1 (struct bpf_prog*,struct xdp_buff*) ;
 int FUNC_2 (int) ;
 struct sk_buff* FUNC_3 (void*,unsigned int) ;
 struct xdp_frame* FUNC_4 (struct xdp_buff*) ;
 int FUNC_5 (int ,void*,unsigned int) ;
 void* FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 struct bpf_prog* FUNC_8 (int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct sk_buff*,unsigned int) ;
 int FUNC_12 (struct sk_buff*,unsigned int) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (int ,struct bpf_prog*,int) ;
 scalar_t__ FUNC_15 (int) ;
 struct page* FUNC_16 (void*) ;
 unsigned int FUNC_17 (struct virtnet_info*) ;
 int FUNC_18 (struct net_device*,int,struct xdp_frame**,int ) ;
 int FUNC_19 (struct net_device*,struct xdp_buff*,struct bpf_prog*) ;
 struct page* FUNC_20 (struct receive_queue*,int*,struct page*,int,unsigned int,unsigned int*) ;
 int FUNC_21 (struct xdp_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_22(struct net_device *VAR_4,
         struct virtnet_info *VAR_5,
         struct receive_queue *VAR_6,
         void *VAR_7, void *VAR_8,
         unsigned int VAR_9,
         unsigned int *VAR_10,
         struct virtnet_rq_stats *VAR_11)
{
 struct sk_buff *VAR_12;
 struct bpf_prog *VAR_13;
 unsigned int VAR_14 = (unsigned long)VAR_8;
 unsigned int VAR_15 = VAR_3 + VAR_14;
 unsigned int VAR_16 = VAR_5->hdr_len + VAR_15;
 unsigned int VAR_17 = FUNC_0(VAR_0 + VAR_16) +
         FUNC_0(sizeof(struct skb_shared_info));
 struct page *VAR_18 = FUNC_16(VAR_7);
 unsigned int VAR_19 = 0;
 struct page *VAR_20;
 int VAR_21;

 VAR_9 -= VAR_5->hdr_len;
 VAR_11->bytes += VAR_9;

 FUNC_9();
 VAR_13 = FUNC_8(VAR_6->xdp_prog);
 if (VAR_13) {
  struct virtio_net_hdr_mrg_rxbuf *VAR_22 = VAR_7 + VAR_15;
  struct xdp_frame *VAR_23;
  struct xdp_buff VAR_24;
  void *VAR_25;
  u32 VAR_26;

  if (FUNC_15(VAR_22->hdr.gso_type))
   goto err_xdp;

  if (FUNC_15(VAR_14 < FUNC_17(VAR_5))) {
   int VAR_27 = VAR_7 - FUNC_6(VAR_18) + VAR_15;
   unsigned int VAR_28 = VAR_9 + VAR_5->hdr_len;
   u16 VAR_29 = 1;

   VAR_14 = FUNC_17(VAR_5);
   VAR_15 = VAR_3 + VAR_14;
   VAR_16 = VAR_5->hdr_len + VAR_15;
   VAR_17 = FUNC_0(VAR_0 + VAR_16) +
     FUNC_0(sizeof(struct skb_shared_info));
   VAR_20 = FUNC_20(VAR_6, &VAR_29, VAR_18,
            VAR_27, VAR_15,
            &VAR_28);
   if (!VAR_20)
    goto err_xdp;

   VAR_7 = FUNC_6(VAR_20);
   FUNC_7(VAR_18);
   VAR_18 = VAR_20;
  }

  VAR_24.data_hard_start = VAR_7 + VAR_3 + VAR_5->hdr_len;
  VAR_24.data = VAR_24.data_hard_start + VAR_14;
  FUNC_21(&VAR_24);
  VAR_24.data_end = VAR_24.data + VAR_9;
  VAR_24.rxq = &VAR_6->xdp_rxq;
  VAR_25 = VAR_24.data;
  VAR_26 = FUNC_1(VAR_13, &VAR_24);
  VAR_11->xdp_packets++;

  switch (VAR_26) {
  case 130:

   VAR_19 = VAR_25 - VAR_24.data;
   VAR_9 = VAR_24.data_end - VAR_24.data;
   break;
  case 128:
   VAR_11->xdp_tx++;
   VAR_23 = FUNC_4(&VAR_24);
   if (FUNC_15(!VAR_23))
    goto err_xdp;
   VAR_21 = FUNC_18(VAR_4, 1, &VAR_23, 0);
   if (FUNC_15(VAR_21 < 0)) {
    FUNC_14(VAR_5->dev, VAR_13, VAR_26);
    goto err_xdp;
   }
   *VAR_10 |= VAR_2;
   FUNC_10();
   goto xdp_xmit;
  case 129:
   VAR_11->xdp_redirects++;
   VAR_21 = FUNC_19(VAR_4, &VAR_24, VAR_13);
   if (VAR_21)
    goto err_xdp;
   *VAR_10 |= VAR_1;
   FUNC_10();
   goto xdp_xmit;
  default:
   FUNC_2(VAR_26);

  case 132:
   FUNC_14(VAR_5->dev, VAR_13, VAR_26);
  case 131:
   goto err_xdp;
  }
 }
 FUNC_10();

 VAR_12 = FUNC_3(VAR_7, VAR_17);
 if (!VAR_12) {
  FUNC_7(VAR_18);
  goto err;
 }
 FUNC_12(VAR_12, VAR_16 - VAR_19);
 FUNC_11(VAR_12, VAR_9);
 if (!VAR_19) {
  VAR_7 += VAR_15;
  FUNC_5(FUNC_13(VAR_12), VAR_7, VAR_5->hdr_len);
 }

err:
 return VAR_12;

err_xdp:
 FUNC_10();
 VAR_11->xdp_drops++;
 VAR_11->drops++;
 FUNC_7(VAR_18);
xdp_xmit:
 return ((void*)0);
}
