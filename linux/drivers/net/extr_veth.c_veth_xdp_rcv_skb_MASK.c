
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct xdp_buff {void* data; void* data_end; void* data_meta; TYPE_1__* rxq; int data_hard_start; } ;
struct veth_xdp_tx_bq {int dummy; } ;
struct TYPE_2__ {int mem; } ;
struct veth_rq {int dev; int xdp_mem; TYPE_1__ xdp_rxq; int xdp_prog; } ;
struct skb_shared_info {int dummy; } ;
struct sk_buff {void* data; scalar_t__ len; int mac_header; int protocol; int head; } ;
struct page {int dummy; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;


 scalar_t__ VAR_5 ;



 int VAR_6 ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 struct page* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct bpf_prog*,struct xdp_buff*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct sk_buff*) ;
 void* FUNC_11 (struct page*) ;
 int FUNC_12 (void*) ;
 struct bpf_prog* FUNC_13 (int ) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 scalar_t__ FUNC_16 (struct sk_buff*,int,void*,scalar_t__) ;
 int FUNC_17 (struct sk_buff*,struct sk_buff*) ;
 scalar_t__ FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*,int) ;
 scalar_t__ FUNC_20 (struct sk_buff*) ;
 scalar_t__ FUNC_21 (struct sk_buff*) ;
 void* FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (struct sk_buff*,scalar_t__) ;
 int FUNC_24 (struct sk_buff*) ;
 scalar_t__ FUNC_25 (struct sk_buff*) ;
 int FUNC_26 (int ,struct bpf_prog*,scalar_t__) ;
 scalar_t__ FUNC_27 (int) ;
 struct sk_buff* FUNC_28 (void*,int,scalar_t__,int) ;
 int FUNC_29 (int ,struct xdp_buff*,struct veth_xdp_tx_bq*) ;
 int FUNC_30 (void*) ;
 int FUNC_31 (int ,struct xdp_buff*,struct bpf_prog*) ;

__attribute__((used)) static struct sk_buff *FUNC_32(struct veth_rq *VAR_7, struct sk_buff *VAR_8,
     unsigned int *VAR_9,
     struct veth_xdp_tx_bq *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13, VAR_14;
 void *VAR_15, *VAR_16;
 struct bpf_prog *VAR_17;
 int VAR_18, VAR_19, VAR_20;
 struct xdp_buff VAR_21;

 FUNC_24(VAR_8);

 FUNC_14();
 VAR_17 = FUNC_13(VAR_7->xdp_prog);
 if (FUNC_27(!VAR_17)) {
  FUNC_15();
  goto out;
 }

 VAR_18 = VAR_8->data - FUNC_22(VAR_8);
 VAR_11 = VAR_8->len + VAR_18;
 VAR_12 = FUNC_20(VAR_8) - VAR_18;

 if (FUNC_25(VAR_8) || FUNC_18(VAR_8) ||
     FUNC_21(VAR_8) || VAR_12 < VAR_5) {
  struct sk_buff *VAR_22;
  int VAR_23, VAR_24;
  void *VAR_25, *VAR_26;
  struct page *VAR_27;

  VAR_23 = FUNC_0(VAR_2 + VAR_11) +
         FUNC_0(sizeof(struct skb_shared_info));
  if (VAR_23 > VAR_1)
   goto drop;

  VAR_27 = FUNC_4(VAR_0 | VAR_6);
  if (!VAR_27)
   goto drop;

  VAR_25 = FUNC_11(VAR_27);
  VAR_26 = VAR_25 + VAR_2;
  if (FUNC_16(VAR_8, -VAR_18, VAR_26, VAR_11)) {
   FUNC_12(VAR_25);
   goto drop;
  }

  VAR_22 = FUNC_28(VAR_25,
          VAR_2 + VAR_18, VAR_8->len,
          VAR_1);
  if (!VAR_22) {
   FUNC_12(VAR_25);
   goto drop;
  }

  FUNC_17(VAR_22, VAR_8);
  VAR_24 = FUNC_20(VAR_22) - FUNC_20(VAR_8);
  FUNC_19(VAR_22, VAR_24);
  FUNC_7(VAR_8);
  VAR_8 = VAR_22;
 }

 VAR_21.data_hard_start = VAR_8->head;
 VAR_21.data = FUNC_22(VAR_8);
 VAR_21.data_end = VAR_21.data + VAR_11;
 VAR_21.data_meta = VAR_21.data;
 VAR_21.rxq = &VAR_7->xdp_rxq;
 VAR_15 = VAR_21.data;
 VAR_16 = VAR_21.data_end;

 VAR_13 = FUNC_5(VAR_17, &VAR_21);

 switch (VAR_13) {
 case 130:
  break;
 case 128:
  FUNC_9(FUNC_30(VAR_21.data));
  FUNC_7(VAR_8);
  VAR_21.rxq->mem = VAR_7->xdp_mem;
  if (FUNC_27(FUNC_29(VAR_7->dev, &VAR_21, VAR_10) < 0)) {
   FUNC_26(VAR_7->dev, VAR_17, VAR_13);
   goto err_xdp;
  }
  *VAR_9 |= VAR_4;
  FUNC_15();
  goto xdp_xmit;
 case 129:
  FUNC_9(FUNC_30(VAR_21.data));
  FUNC_7(VAR_8);
  VAR_21.rxq->mem = VAR_7->xdp_mem;
  if (FUNC_31(VAR_7->dev, &VAR_21, VAR_17))
   goto err_xdp;
  *VAR_9 |= VAR_3;
  FUNC_15();
  goto xdp_xmit;
 default:
  FUNC_6(VAR_13);

 case 132:
  FUNC_26(VAR_7->dev, VAR_17, VAR_13);

 case 131:
  goto drop;
 }
 FUNC_15();

 VAR_19 = VAR_15 - VAR_21.data;
 VAR_20 = VAR_18 + VAR_19;
 if (VAR_20 > 0)
  FUNC_2(VAR_8, VAR_20);
 else if (VAR_20 < 0)
  FUNC_1(VAR_8, -VAR_20);
 VAR_8->mac_header -= VAR_19;
 VAR_20 = VAR_21.data_end - VAR_16;
 if (VAR_20 != 0)
  FUNC_3(VAR_8, VAR_20);
 VAR_8->protocol = FUNC_8(VAR_8, VAR_7->dev);

 VAR_14 = VAR_21.data - VAR_21.data_meta;
 if (VAR_14)
  FUNC_23(VAR_8, VAR_14);
out:
 return VAR_8;
drop:
 FUNC_15();
 FUNC_10(VAR_8);
 return ((void*)0);
err_xdp:
 FUNC_15();
 FUNC_12(VAR_21.data);
xdp_xmit:
 return ((void*)0);
}
