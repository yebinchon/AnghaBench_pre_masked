
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_mac_ops {int (* rx_disable ) (struct xgene_enet_pdata*) ;int (* tx_disable ) (struct xgene_enet_pdata*) ;} ;
struct xgene_enet_pdata {int rxq_cnt; int * rx_ring; int link_work; struct xgene_mac_ops* mac_ops; } ;
struct net_device {scalar_t__ phydev; } ;


 int FUNC_0 (int *) ;
 struct xgene_enet_pdata* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct xgene_enet_pdata*) ;
 int FUNC_5 (struct xgene_enet_pdata*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct xgene_enet_pdata*) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_0)
{
 struct xgene_enet_pdata *VAR_1 = FUNC_1(VAR_0);
 const struct xgene_mac_ops *VAR_2 = VAR_1->mac_ops;
 int VAR_3;

 FUNC_2(VAR_0);
 VAR_2->tx_disable(VAR_1);
 VAR_2->rx_disable(VAR_1);

 if (VAR_0->phydev)
  FUNC_3(VAR_0->phydev);
 else
  FUNC_0(&VAR_1->link_work);

 FUNC_6(VAR_0);
 FUNC_7(VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_1->rxq_cnt; VAR_3++)
  FUNC_8(VAR_1->rx_ring[VAR_3], -1);

 return 0;
}
