
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {int rxq_cnt; int cq_cnt; TYPE_1__** tx_ring; struct xgene_enet_desc_ring** rx_ring; } ;
struct xgene_enet_desc_ring {int irq; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct xgene_enet_desc_ring* cp_ring; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,struct xgene_enet_desc_ring*) ;
 int FUNC_1 (int ,int ) ;
 struct device* FUNC_2 (struct net_device*) ;
 struct xgene_enet_pdata* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 struct xgene_enet_pdata *VAR_2;
 struct xgene_enet_desc_ring *VAR_3;
 struct device *VAR_4;
 int VAR_5;

 VAR_2 = FUNC_3(VAR_1);
 VAR_4 = FUNC_2(VAR_1);

 for (VAR_5 = 0; VAR_5 < VAR_2->rxq_cnt; VAR_5++) {
  VAR_3 = VAR_2->rx_ring[VAR_5];
  FUNC_1(VAR_3->irq, VAR_0);
  FUNC_0(VAR_4, VAR_3->irq, VAR_3);
 }

 for (VAR_5 = 0; VAR_5 < VAR_2->cq_cnt; VAR_5++) {
  VAR_3 = VAR_2->tx_ring[VAR_5]->cp_ring;
  FUNC_1(VAR_3->irq, VAR_0);
  FUNC_0(VAR_4, VAR_3->irq, VAR_3);
 }
}
