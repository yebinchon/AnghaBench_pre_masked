
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xdp_frame {int data; int headroom; int len; int metasize; int mem; } ;
struct xdp_buff {int data; int data_end; int data_meta; TYPE_1__* rxq; void* data_hard_start; } ;
struct veth_xdp_tx_bq {int dummy; } ;
struct TYPE_2__ {int mem; } ;
struct veth_rq {int dev; TYPE_1__ xdp_rxq; int xdp_prog; } ;
struct sk_buff {int protocol; } ;
struct bpf_prog {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;





 int FUNC_0 (struct bpf_prog*,struct xdp_buff*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct bpf_prog*) ;
 struct bpf_prog* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int ,struct bpf_prog*,int) ;
 int FUNC_8 (int) ;
 struct sk_buff* FUNC_9 (void*,unsigned int,int,int ) ;
 int FUNC_10 (int ,struct xdp_buff*,struct veth_xdp_tx_bq*) ;
 int FUNC_11 (int ,struct xdp_buff*,struct bpf_prog*) ;
 int FUNC_12 (struct xdp_frame*) ;
 int FUNC_13 (struct xdp_frame*) ;
 int FUNC_14 (struct xdp_frame*) ;

__attribute__((used)) static struct sk_buff *FUNC_15(struct veth_rq *VAR_2,
     struct xdp_frame *VAR_3,
     unsigned int *VAR_4,
     struct veth_xdp_tx_bq *VAR_5)
{
 void *VAR_6 = VAR_3->data - VAR_3->headroom;
 void *VAR_7 = VAR_6 - sizeof(struct xdp_frame);
 int VAR_8 = VAR_3->len, VAR_9 = 0;
 struct xdp_frame VAR_10;
 struct bpf_prog *VAR_11;
 unsigned int VAR_12;
 struct sk_buff *VAR_13;

 FUNC_5();
 VAR_11 = FUNC_4(VAR_2->xdp_prog);
 if (FUNC_3(VAR_11)) {
  struct xdp_buff VAR_14;
  u32 VAR_15;

  VAR_14.data_hard_start = VAR_6;
  VAR_14.data = VAR_3->data;
  VAR_14.data_end = VAR_3->data + VAR_3->len;
  VAR_14.data_meta = VAR_3->data - VAR_3->metasize;
  VAR_14.rxq = &VAR_2->xdp_rxq;

  VAR_15 = FUNC_0(VAR_11, &VAR_14);

  switch (VAR_15) {
  case 130:
   VAR_9 = VAR_3->data - VAR_14.data;
   VAR_8 = VAR_14.data_end - VAR_14.data;
   break;
  case 128:
   VAR_10 = *VAR_3;
   VAR_14.data_hard_start = VAR_7;
   VAR_14.rxq->mem = VAR_3->mem;
   if (FUNC_8(FUNC_10(VAR_2->dev, &VAR_14, VAR_5) < 0)) {
    FUNC_7(VAR_2->dev, VAR_11, VAR_15);
    VAR_3 = &VAR_10;
    goto err_xdp;
   }
   *VAR_4 |= VAR_1;
   FUNC_6();
   goto xdp_xmit;
  case 129:
   VAR_10 = *VAR_3;
   VAR_14.data_hard_start = VAR_7;
   VAR_14.rxq->mem = VAR_3->mem;
   if (FUNC_11(VAR_2->dev, &VAR_14, VAR_11)) {
    VAR_3 = &VAR_10;
    goto err_xdp;
   }
   *VAR_4 |= VAR_0;
   FUNC_6();
   goto xdp_xmit;
  default:
   FUNC_1(VAR_15);

  case 132:
   FUNC_7(VAR_2->dev, VAR_11, VAR_15);

  case 131:
   goto err_xdp;
  }
 }
 FUNC_6();

 VAR_12 = sizeof(struct xdp_frame) + VAR_3->headroom - VAR_9;
 VAR_13 = FUNC_9(VAR_7, VAR_12, VAR_8, 0);
 if (!VAR_13) {
  FUNC_13(VAR_3);
  goto err;
 }

 FUNC_12(VAR_3);
 FUNC_14(VAR_3);
 VAR_13->protocol = FUNC_2(VAR_13, VAR_2->dev);
err:
 return VAR_13;
err_xdp:
 FUNC_6();
 FUNC_13(VAR_3);
xdp_xmit:
 return ((void*)0);
}
