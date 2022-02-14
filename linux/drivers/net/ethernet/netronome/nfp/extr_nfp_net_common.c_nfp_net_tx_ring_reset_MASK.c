
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nfp_net_tx_ring {scalar_t__ rd_p; scalar_t__ wr_p; int idx; scalar_t__ is_xdp; scalar_t__ wr_ptr_add; scalar_t__ qcp_rd_p; int size; int txds; struct nfp_net_tx_buf* txbufs; } ;
struct nfp_net_tx_buf {int fidx; struct sk_buff* skb; scalar_t__ dma_addr; } ;
struct nfp_net_dp {int netdev; int dev; } ;
struct netdev_queue {int dummy; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int FUNC_0 (struct nfp_net_tx_ring*,scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 struct netdev_queue* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct netdev_queue*) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (struct sk_buff*) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_10(struct nfp_net_dp *VAR_1, struct nfp_net_tx_ring *VAR_2)
{
 const skb_frag_t *VAR_3;
 struct netdev_queue *VAR_4;

 while (!VAR_2->is_xdp && VAR_2->rd_p != VAR_2->wr_p) {
  struct nfp_net_tx_buf *VAR_5;
  struct sk_buff *VAR_6;
  int VAR_7, VAR_8;

  VAR_7 = FUNC_0(VAR_2, VAR_2->rd_p);
  VAR_5 = &VAR_2->txbufs[VAR_7];

  VAR_6 = VAR_2->txbufs[VAR_7].skb;
  VAR_8 = FUNC_9(VAR_6)->nr_frags;

  if (VAR_5->fidx == -1) {

   FUNC_3(VAR_1->dev, VAR_5->dma_addr,
      FUNC_8(VAR_6), VAR_0);
  } else {

   VAR_3 = &FUNC_9(VAR_6)->frags[VAR_5->fidx];
   FUNC_2(VAR_1->dev, VAR_5->dma_addr,
           FUNC_7(VAR_3), VAR_0);
  }


  if (VAR_5->fidx == VAR_8 - 1)
   FUNC_1(VAR_6);

  VAR_5->dma_addr = 0;
  VAR_5->skb = ((void*)0);
  VAR_5->fidx = -2;

  VAR_2->qcp_rd_p++;
  VAR_2->rd_p++;
 }

 FUNC_4(VAR_2->txds, 0, VAR_2->size);
 VAR_2->wr_p = 0;
 VAR_2->rd_p = 0;
 VAR_2->qcp_rd_p = 0;
 VAR_2->wr_ptr_add = 0;

 if (VAR_2->is_xdp || !VAR_1->netdev)
  return;

 VAR_4 = FUNC_5(VAR_1->netdev, VAR_2->idx);
 FUNC_6(VAR_4);
}
