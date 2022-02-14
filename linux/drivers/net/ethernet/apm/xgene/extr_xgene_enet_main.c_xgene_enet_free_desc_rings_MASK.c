
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {int txq_cnt; int rxq_cnt; struct xgene_enet_desc_ring** rx_ring; scalar_t__ cq_cnt; struct xgene_enet_desc_ring** tx_ring; TYPE_1__* pdev; } ;
struct xgene_enet_desc_ring {void* cp_skb; void* rx_skb; void* frag_dma_addr; void* frag_page; struct xgene_enet_desc_ring* page_pool; struct xgene_enet_desc_ring* buf_pool; struct xgene_enet_desc_ring* cp_ring; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct device*,void*) ;
 int FUNC_1 (struct xgene_enet_desc_ring*) ;

__attribute__((used)) static void FUNC_2(struct xgene_enet_pdata *VAR_0)
{
 struct xgene_enet_desc_ring *VAR_1;
 struct device *VAR_2 = &VAR_0->pdev->dev;
 struct xgene_enet_desc_ring *VAR_3;
 void *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0->txq_cnt; VAR_5++) {
  VAR_3 = VAR_0->tx_ring[VAR_5];
  if (VAR_3) {
   if (VAR_3->cp_ring && VAR_3->cp_ring->cp_skb)
    FUNC_0(VAR_2, VAR_3->cp_ring->cp_skb);

   if (VAR_3->cp_ring && VAR_0->cq_cnt)
    FUNC_1(VAR_3->cp_ring);

   FUNC_1(VAR_3);
  }

 }

 for (VAR_5 = 0; VAR_5 < VAR_0->rxq_cnt; VAR_5++) {
  VAR_3 = VAR_0->rx_ring[VAR_5];
  if (VAR_3) {
   if (VAR_3->buf_pool) {
    if (VAR_3->buf_pool->rx_skb)
     FUNC_0(VAR_2, VAR_3->buf_pool->rx_skb);

    FUNC_1(VAR_3->buf_pool);
   }

   VAR_1 = VAR_3->page_pool;
   if (VAR_1) {
    VAR_4 = VAR_1->frag_page;
    if (VAR_4)
     FUNC_0(VAR_2, VAR_4);

    VAR_4 = VAR_1->frag_dma_addr;
    if (VAR_4)
     FUNC_0(VAR_2, VAR_4);
   }

   FUNC_1(VAR_3);
  }
 }
}
