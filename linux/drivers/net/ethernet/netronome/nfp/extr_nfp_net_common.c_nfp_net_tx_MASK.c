
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u16 ;
struct sk_buff {unsigned int len; int data; } ;
struct nfp_net_tx_ring {int wr_p; size_t idx; int wr_ptr_add; struct nfp_net_tx_buf* txbufs; scalar_t__ cnt; struct nfp_net_tx_desc* txds; int rd_p; struct nfp_net_r_vector* r_vec; } ;
struct nfp_net_tx_desc {int offset_eop; int * vals8; void* dma_len; void* vlan; int flags; scalar_t__ lso_hdrlen; scalar_t__ mss; void* data_len; } ;
struct nfp_net_tx_buf {int fidx; int pkt_cnt; unsigned int real_len; void* dma_addr; struct sk_buff* skb; } ;
struct nfp_net_r_vector {int tx_sync; int tx_errors; int tx_gather; int tx_busy; } ;
struct nfp_net_dp {int ctrl; int dev; int netdev; struct nfp_net_tx_ring* tx_rings; } ;
struct nfp_net {struct nfp_net_dp dp; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
typedef int skb_frag_t ;
typedef void* dma_addr_t ;
typedef int __le64 ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_net_tx_ring*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct netdev_queue*,unsigned int,int ) ;
 void* FUNC_2 (unsigned int) ;
 int FUNC_3 (struct sk_buff*) ;
 void* FUNC_4 (int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_5 (int ,void*) ;
 int FUNC_6 (int ,void*,unsigned int,int ) ;
 int FUNC_7 (int ,void*,unsigned int,int ) ;
 struct netdev_queue* FUNC_8 (int ,size_t) ;
 struct nfp_net* FUNC_9 (struct net_device*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct netdev_queue*) ;
 int FUNC_12 (struct nfp_net_tx_desc*,void*) ;
 int FUNC_13 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_14 (struct nfp_net_dp*,struct nfp_net_r_vector*,struct sk_buff*,int *,int*) ;
 int FUNC_15 (struct sk_buff*,int ) ;
 int FUNC_16 (struct nfp_net_dp*,struct nfp_net_r_vector*,struct nfp_net_tx_buf*,struct nfp_net_tx_desc*,struct sk_buff*) ;
 int FUNC_17 (struct nfp_net_tx_ring*,int) ;
 scalar_t__ FUNC_18 (struct nfp_net_tx_ring*) ;
 int FUNC_19 (struct netdev_queue*,struct nfp_net_tx_ring*) ;
 int FUNC_20 (struct nfp_net_r_vector*,struct nfp_net_tx_buf*,struct nfp_net_tx_desc*,struct sk_buff*,int) ;
 int FUNC_21 (struct nfp_net_tx_ring*) ;
 int FUNC_22 (struct nfp_net_dp*,char*,...) ;
 void* FUNC_23 (int ,int const*,int ,unsigned int,int ) ;
 unsigned int FUNC_24 (int const*) ;
 size_t FUNC_25 (struct sk_buff*) ;
 unsigned int FUNC_26 (struct sk_buff*) ;
 TYPE_1__* FUNC_27 (struct sk_buff*) ;
 int FUNC_28 (struct sk_buff*) ;
 unsigned int FUNC_29 (struct sk_buff*) ;
 scalar_t__ FUNC_30 (struct sk_buff*) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *) ;
 scalar_t__ FUNC_33 (int) ;

__attribute__((used)) static int FUNC_34(struct sk_buff *VAR_6, struct net_device *VAR_7)
{
 struct nfp_net *VAR_8 = FUNC_9(VAR_7);
 const skb_frag_t *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 struct nfp_net_tx_ring *VAR_14;
 struct nfp_net_r_vector *VAR_15;
 struct nfp_net_tx_buf *VAR_16;
 struct nfp_net_tx_desc *VAR_17;
 struct netdev_queue *VAR_18;
 struct nfp_net_dp *VAR_19;
 dma_addr_t VAR_20;
 unsigned int VAR_21;
 u64 VAR_22 = 0;
 u16 VAR_23;

 VAR_19 = &VAR_8->dp;
 VAR_23 = FUNC_25(VAR_6);
 VAR_14 = &VAR_19->tx_rings[VAR_23];
 VAR_15 = VAR_14->r_vec;

 VAR_11 = FUNC_27(VAR_6)->nr_frags;

 if (FUNC_33(FUNC_17(VAR_14, VAR_11 + 1))) {
  FUNC_22(VAR_19, "TX ring %d busy. wrp=%u rdp=%u\n",
      VAR_23, VAR_14->wr_p, VAR_14->rd_p);
  VAR_18 = FUNC_8(VAR_19->netdev, VAR_23);
  FUNC_11(VAR_18);
  FUNC_21(VAR_14);
  FUNC_31(&VAR_15->tx_sync);
  VAR_15->tx_busy++;
  FUNC_32(&VAR_15->tx_sync);
  return VAR_1;
 }

 VAR_6 = FUNC_14(VAR_19, VAR_15, VAR_6, &VAR_22, &VAR_11);
 if (FUNC_33(!VAR_6)) {
  FUNC_21(VAR_14);
  return VAR_2;
 }

 VAR_13 = FUNC_13(VAR_6, VAR_22);
 if (FUNC_33(VAR_13 < 0))
  goto err_flush;


 VAR_20 = FUNC_4(VAR_19->dev, VAR_6->data, FUNC_26(VAR_6),
      VAR_0);
 if (FUNC_5(VAR_19->dev, VAR_20))
  goto err_dma_err;

 VAR_12 = FUNC_0(VAR_14, VAR_14->wr_p);


 VAR_16 = &VAR_14->txbufs[VAR_12];
 VAR_16->skb = VAR_6;
 VAR_16->dma_addr = VAR_20;
 VAR_16->fidx = -1;
 VAR_16->pkt_cnt = 1;
 VAR_16->real_len = VAR_6->len;


 VAR_17 = &VAR_14->txds[VAR_12];
 VAR_17->offset_eop = (VAR_11 ? 0 : VAR_4) | VAR_13;
 VAR_17->dma_len = FUNC_2(FUNC_26(VAR_6));
 FUNC_12(VAR_17, VAR_20);
 VAR_17->data_len = FUNC_2(VAR_6->len);

 VAR_17->flags = 0;
 VAR_17->mss = 0;
 VAR_17->lso_hdrlen = 0;


 FUNC_20(VAR_15, VAR_16, VAR_17, VAR_6, VAR_13);
 FUNC_16(VAR_19, VAR_15, VAR_16, VAR_17, VAR_6);
 if (FUNC_30(VAR_6) && VAR_19->ctrl & VAR_3) {
  VAR_17->flags |= VAR_5;
  VAR_17->vlan = FUNC_2(FUNC_29(VAR_6));
 }


 if (VAR_11 > 0) {
  __le64 VAR_24;


  VAR_24 = VAR_17->vals8[1];

  for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
   VAR_9 = &FUNC_27(VAR_6)->frags[VAR_10];
   VAR_21 = FUNC_24(VAR_9);

   VAR_20 = FUNC_23(VAR_19->dev, VAR_9, 0,
          VAR_21, VAR_0);
   if (FUNC_5(VAR_19->dev, VAR_20))
    goto err_unmap;

   VAR_12 = FUNC_0(VAR_14, VAR_12 + 1);
   VAR_14->txbufs[VAR_12].skb = VAR_6;
   VAR_14->txbufs[VAR_12].dma_addr = VAR_20;
   VAR_14->txbufs[VAR_12].fidx = VAR_10;

   VAR_17 = &VAR_14->txds[VAR_12];
   VAR_17->dma_len = FUNC_2(VAR_21);
   FUNC_12(VAR_17, VAR_20);
   VAR_17->offset_eop = VAR_13 |
    ((VAR_10 == VAR_11 - 1) ? VAR_4 : 0);
   VAR_17->vals8[1] = VAR_24;
  }

  FUNC_31(&VAR_15->tx_sync);
  VAR_15->tx_gather++;
  FUNC_32(&VAR_15->tx_sync);
 }

 FUNC_28(VAR_6);

 VAR_18 = FUNC_8(VAR_19->netdev, VAR_14->idx);

 VAR_14->wr_p += VAR_11 + 1;
 if (FUNC_18(VAR_14))
  FUNC_19(VAR_18, VAR_14);

 VAR_14->wr_ptr_add += VAR_11 + 1;
 if (FUNC_1(VAR_18, VAR_16->real_len, FUNC_10()))
  FUNC_21(VAR_14);

 return VAR_2;

err_unmap:
 while (--VAR_10 >= 0) {
  VAR_9 = &FUNC_27(VAR_6)->frags[VAR_10];
  FUNC_6(VAR_19->dev, VAR_14->txbufs[VAR_12].dma_addr,
          FUNC_24(VAR_9), VAR_0);
  VAR_14->txbufs[VAR_12].skb = ((void*)0);
  VAR_14->txbufs[VAR_12].dma_addr = 0;
  VAR_14->txbufs[VAR_12].fidx = -2;
  VAR_12 = VAR_12 - 1;
  if (VAR_12 < 0)
   VAR_12 += VAR_14->cnt;
 }
 FUNC_7(VAR_19->dev, VAR_14->txbufs[VAR_12].dma_addr,
    FUNC_26(VAR_6), VAR_0);
 VAR_14->txbufs[VAR_12].skb = ((void*)0);
 VAR_14->txbufs[VAR_12].dma_addr = 0;
 VAR_14->txbufs[VAR_12].fidx = -2;
err_dma_err:
 FUNC_22(VAR_19, "Failed to map DMA TX buffer\n");
err_flush:
 FUNC_21(VAR_14);
 FUNC_31(&VAR_15->tx_sync);
 VAR_15->tx_errors++;
 FUNC_32(&VAR_15->tx_sync);
 FUNC_15(VAR_6, VAR_22);
 FUNC_3(VAR_6);
 return VAR_2;
}
