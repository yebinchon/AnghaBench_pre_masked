
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sk_buff {int dummy; } ;
struct nfp_net_tx_ring {scalar_t__ wr_p; scalar_t__ rd_p; scalar_t__ qcp_rd_p; scalar_t__ cnt; int idx; struct nfp_net_tx_buf* txbufs; int qcp_q; struct nfp_net_r_vector* r_vec; } ;
struct nfp_net_tx_buf {int fidx; scalar_t__ pkt_cnt; scalar_t__ real_len; struct sk_buff* skb; scalar_t__ dma_addr; } ;
struct nfp_net_r_vector {int tx_sync; int tx_pkts; int tx_bytes; TYPE_1__* nfp_net; } ;
struct nfp_net_dp {int netdev; int dev; } ;
struct netdev_queue {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_4__ {int nr_frags; int * frags; } ;
struct TYPE_3__ {struct nfp_net_dp dp; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_net_tx_ring*,scalar_t__) ;
 int FUNC_1 (int,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int) ;
 struct netdev_queue* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct netdev_queue*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct netdev_queue*) ;
 int FUNC_8 (struct netdev_queue*) ;
 scalar_t__ FUNC_9 (struct nfp_net_tx_ring*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int const*) ;
 int FUNC_12 (struct sk_buff*) ;
 TYPE_2__* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 () ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int ) ;

__attribute__((used)) static void FUNC_18(struct nfp_net_tx_ring *VAR_1, int VAR_2)
{
 struct nfp_net_r_vector *VAR_3 = VAR_1->r_vec;
 struct nfp_net_dp *VAR_4 = &VAR_3->nfp_net->dp;
 struct netdev_queue *VAR_5;
 u32 VAR_6 = 0, VAR_7 = 0;
 u32 VAR_8;
 int VAR_9;

 if (VAR_1->wr_p == VAR_1->rd_p)
  return;


 VAR_8 = FUNC_10(VAR_1->qcp_q);

 if (VAR_8 == VAR_1->qcp_rd_p)
  return;

 VAR_9 = FUNC_0(VAR_1, VAR_8 - VAR_1->qcp_rd_p);

 while (VAR_9--) {
  const skb_frag_t *VAR_10;
  struct nfp_net_tx_buf *VAR_11;
  struct sk_buff *VAR_12;
  int VAR_13, VAR_14;
  int VAR_15;

  VAR_15 = FUNC_0(VAR_1, VAR_1->rd_p++);
  VAR_11 = &VAR_1->txbufs[VAR_15];

  VAR_12 = VAR_11->skb;
  if (!VAR_12)
   continue;

  VAR_14 = FUNC_13(VAR_12)->nr_frags;
  VAR_13 = VAR_11->fidx;

  if (VAR_13 == -1) {

   FUNC_3(VAR_4->dev, VAR_11->dma_addr,
      FUNC_12(VAR_12), VAR_0);

   VAR_6 += VAR_11->pkt_cnt;
   VAR_7 += VAR_11->real_len;
  } else {

   VAR_10 = &FUNC_13(VAR_12)->frags[VAR_13];
   FUNC_2(VAR_4->dev, VAR_11->dma_addr,
           FUNC_11(VAR_10), VAR_0);
  }


  if (VAR_13 == VAR_14 - 1)
   FUNC_4(VAR_12, VAR_2);

  VAR_11->dma_addr = 0;
  VAR_11->skb = ((void*)0);
  VAR_11->fidx = -2;
 }

 VAR_1->qcp_rd_p = VAR_8;

 FUNC_15(&VAR_3->tx_sync);
 VAR_3->tx_bytes += VAR_7;
 VAR_3->tx_pkts += VAR_6;
 FUNC_16(&VAR_3->tx_sync);

 if (!VAR_4->netdev)
  return;

 VAR_5 = FUNC_5(VAR_4->netdev, VAR_1->idx);
 FUNC_6(VAR_5, VAR_6, VAR_7);
 if (FUNC_9(VAR_1)) {

  FUNC_14();

  if (FUNC_17(FUNC_7(VAR_5)))
   FUNC_8(VAR_5);
 }

 FUNC_1(VAR_1->wr_p - VAR_1->rd_p > VAR_1->cnt,
    "TX ring corruption rd_p=%u wr_p=%u cnt=%u\n",
    VAR_1->rd_p, VAR_1->wr_p, VAR_1->cnt);
}
