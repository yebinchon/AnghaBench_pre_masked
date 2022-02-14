
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {int rxq_cnt; int cq_cnt; TYPE_1__** tx_ring; struct xgene_enet_desc_ring** rx_ring; } ;
struct xgene_enet_desc_ring {int irq_name; } ;
struct net_device {char* name; } ;
struct TYPE_2__ {struct xgene_enet_desc_ring* cp_ring; } ;


 int VAR_0 ;
 struct xgene_enet_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,char*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_1)
{
 struct xgene_enet_pdata *VAR_2 = FUNC_0(VAR_1);
 struct xgene_enet_desc_ring *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->rxq_cnt; VAR_4++) {
  VAR_3 = VAR_2->rx_ring[VAR_4];
  if (!VAR_2->cq_cnt) {
   FUNC_1(VAR_3->irq_name, VAR_0, "%s-rx-txc",
     VAR_1->name);
  } else {
   FUNC_1(VAR_3->irq_name, VAR_0, "%s-rx-%d",
     VAR_1->name, VAR_4);
  }
 }

 for (VAR_4 = 0; VAR_4 < VAR_2->cq_cnt; VAR_4++) {
  VAR_3 = VAR_2->tx_ring[VAR_4]->cp_ring;
  FUNC_1(VAR_3->irq_name, VAR_0, "%s-txc-%d",
    VAR_1->name, VAR_4);
 }
}
