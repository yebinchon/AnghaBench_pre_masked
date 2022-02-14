
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {int txq_cnt; int rxq_cnt; struct xgene_enet_desc_ring** rx_ring; TYPE_1__* port_ops; struct xgene_enet_desc_ring** tx_ring; scalar_t__ cq_cnt; } ;
struct xgene_enet_desc_ring {struct xgene_enet_desc_ring* buf_pool; struct xgene_enet_desc_ring* page_pool; struct xgene_enet_desc_ring* cp_ring; } ;
struct TYPE_2__ {int (* clear ) (struct xgene_enet_pdata*,struct xgene_enet_desc_ring*) ;} ;


 int FUNC_0 (struct xgene_enet_pdata*,struct xgene_enet_desc_ring*) ;
 int FUNC_1 (struct xgene_enet_pdata*,struct xgene_enet_desc_ring*) ;
 int FUNC_2 (struct xgene_enet_pdata*,struct xgene_enet_desc_ring*) ;
 int FUNC_3 (struct xgene_enet_desc_ring*) ;
 int FUNC_4 (struct xgene_enet_desc_ring*) ;
 int FUNC_5 (struct xgene_enet_desc_ring*) ;

__attribute__((used)) static void FUNC_6(struct xgene_enet_pdata *VAR_0)
{
 struct xgene_enet_desc_ring *VAR_1, *VAR_2;
 struct xgene_enet_desc_ring *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->txq_cnt; VAR_4++) {
  VAR_3 = VAR_0->tx_ring[VAR_4];
  if (VAR_3) {
   FUNC_5(VAR_3);
   VAR_0->port_ops->clear(VAR_0, VAR_3);
   if (VAR_0->cq_cnt)
    FUNC_5(VAR_3->cp_ring);
   VAR_0->tx_ring[VAR_4] = ((void*)0);
  }

 }

 for (VAR_4 = 0; VAR_4 < VAR_0->rxq_cnt; VAR_4++) {
  VAR_3 = VAR_0->rx_ring[VAR_4];
  if (VAR_3) {
   VAR_2 = VAR_3->page_pool;
   if (VAR_2) {
    FUNC_4(VAR_2);
    FUNC_5(VAR_2);
    VAR_0->port_ops->clear(VAR_0, VAR_2);
   }

   VAR_1 = VAR_3->buf_pool;
   FUNC_3(VAR_1);
   FUNC_5(VAR_1);
   VAR_0->port_ops->clear(VAR_0, VAR_1);

   FUNC_5(VAR_3);
   VAR_0->rx_ring[VAR_4] = ((void*)0);
  }

 }
}
