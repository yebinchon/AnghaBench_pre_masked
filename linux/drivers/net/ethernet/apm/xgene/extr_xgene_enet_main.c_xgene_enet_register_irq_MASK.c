
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_enet_pdata {int rxq_cnt; int cq_cnt; TYPE_1__** tx_ring; struct xgene_enet_desc_ring** rx_ring; } ;
struct xgene_enet_desc_ring {int irq_name; int irq; } ;
struct net_device {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct xgene_enet_desc_ring* cp_ring; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ,int ,int ,int ,struct xgene_enet_desc_ring*) ;
 int FUNC_1 (int ,int ) ;
 struct device* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*,int ) ;
 struct xgene_enet_pdata* FUNC_4 (struct net_device*) ;
 int VAR_1 ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_2)
{
 struct xgene_enet_pdata *VAR_3 = FUNC_4(VAR_2);
 struct device *VAR_4 = FUNC_2(VAR_2);
 struct xgene_enet_desc_ring *VAR_5;
 int VAR_6 = 0, VAR_7;

 FUNC_5(VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_3->rxq_cnt; VAR_7++) {
  VAR_5 = VAR_3->rx_ring[VAR_7];
  FUNC_1(VAR_5->irq, VAR_0);
  VAR_6 = FUNC_0(VAR_4, VAR_5->irq, VAR_1,
           0, VAR_5->irq_name, VAR_5);
  if (VAR_6) {
   FUNC_3(VAR_2, "Failed to request irq %s\n",
       VAR_5->irq_name);
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_3->cq_cnt; VAR_7++) {
  VAR_5 = VAR_3->tx_ring[VAR_7]->cp_ring;
  FUNC_1(VAR_5->irq, VAR_0);
  VAR_6 = FUNC_0(VAR_4, VAR_5->irq, VAR_1,
           0, VAR_5->irq_name, VAR_5);
  if (VAR_6) {
   FUNC_3(VAR_2, "Failed to request irq %s\n",
       VAR_5->irq_name);
  }
 }

 return VAR_6;
}
