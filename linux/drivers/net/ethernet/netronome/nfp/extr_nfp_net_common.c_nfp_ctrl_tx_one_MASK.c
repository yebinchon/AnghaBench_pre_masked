
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {unsigned int len; int data; } ;
struct nfp_net_tx_ring {int wr_ptr_add; int wr_p; struct nfp_net_tx_desc* txds; struct nfp_net_tx_buf* txbufs; } ;
struct nfp_net_tx_desc {unsigned int offset_eop; scalar_t__ lso_hdrlen; scalar_t__ mss; scalar_t__ flags; void* data_len; void* dma_len; } ;
struct nfp_net_tx_buf {int fidx; int pkt_cnt; unsigned int real_len; int dma_addr; struct sk_buff* skb; } ;
struct nfp_net_r_vector {int tx_sync; int tx_errors; int queue; int tx_busy; struct nfp_net_tx_ring* tx_ring; TYPE_1__* nfp_net; } ;
struct nfp_net_dp {int dev; } ;
struct nfp_net {int app; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {int nr_frags; } ;
struct TYPE_3__ {struct nfp_net_dp dp; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_net_tx_ring*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 void* FUNC_4 (unsigned int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct nfp_net_tx_desc*,int ) ;
 int FUNC_10 (struct nfp_net_tx_ring*,int) ;
 int FUNC_11 (struct nfp_net_tx_ring*) ;
 int FUNC_12 (struct nfp_net_dp*,char*) ;
 int FUNC_13 (int ,int ) ;
 unsigned int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,int) ;
 TYPE_2__* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 scalar_t__ FUNC_20 (int) ;

__attribute__((used)) static bool
FUNC_21(struct nfp_net *VAR_4, struct nfp_net_r_vector *VAR_5,
  struct sk_buff *VAR_6, bool VAR_7)
{
 unsigned int VAR_8 = VAR_6->len, VAR_9 = 0;
 struct nfp_net_tx_ring *VAR_10;
 struct nfp_net_tx_buf *VAR_11;
 struct nfp_net_tx_desc *VAR_12;
 struct nfp_net_dp *VAR_13;
 dma_addr_t VAR_14;
 int VAR_15;

 VAR_13 = &VAR_5->nfp_net->dp;
 VAR_10 = VAR_5->tx_ring;

 if (FUNC_1(FUNC_17(VAR_6)->nr_frags)) {
  FUNC_12(VAR_13, "Driver's CTRL TX does not implement gather\n");
  goto err_free;
 }

 if (FUNC_20(FUNC_10(VAR_10, 1))) {
  FUNC_18(&VAR_5->tx_sync);
  VAR_5->tx_busy++;
  FUNC_19(&VAR_5->tx_sync);
  if (!VAR_7)
   FUNC_3(&VAR_5->queue, VAR_6);
  else
   FUNC_2(&VAR_5->queue, VAR_6);
  return 1;
 }

 if (FUNC_8(VAR_4->app)) {
  if (FUNC_20(FUNC_15(VAR_6) < 8)) {
   FUNC_12(VAR_13, "CTRL TX on skb without headroom\n");
   goto err_free;
  }
  VAR_9 = 8;
  FUNC_13(VAR_1, FUNC_16(VAR_6, 4));
  FUNC_13(VAR_2, FUNC_16(VAR_6, 4));
 }


 VAR_14 = FUNC_6(VAR_13->dev, VAR_6->data, FUNC_14(VAR_6),
      VAR_0);
 if (FUNC_7(VAR_13->dev, VAR_14))
  goto err_dma_warn;

 VAR_15 = FUNC_0(VAR_10, VAR_10->wr_p);


 VAR_11 = &VAR_10->txbufs[VAR_15];
 VAR_11->skb = VAR_6;
 VAR_11->dma_addr = VAR_14;
 VAR_11->fidx = -1;
 VAR_11->pkt_cnt = 1;
 VAR_11->real_len = VAR_8;


 VAR_12 = &VAR_10->txds[VAR_15];
 VAR_12->offset_eop = VAR_9 | VAR_3;
 VAR_12->dma_len = FUNC_4(FUNC_14(VAR_6));
 FUNC_9(VAR_12, VAR_14);
 VAR_12->data_len = FUNC_4(VAR_6->len);

 VAR_12->flags = 0;
 VAR_12->mss = 0;
 VAR_12->lso_hdrlen = 0;

 VAR_10->wr_p++;
 VAR_10->wr_ptr_add++;
 FUNC_11(VAR_10);

 return 0;

err_dma_warn:
 FUNC_12(VAR_13, "Failed to DMA map TX CTRL buffer\n");
err_free:
 FUNC_18(&VAR_5->tx_sync);
 VAR_5->tx_errors++;
 FUNC_19(&VAR_5->tx_sync);
 FUNC_5(VAR_6);
 return 0;
}
