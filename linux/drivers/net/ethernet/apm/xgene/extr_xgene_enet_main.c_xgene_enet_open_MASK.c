
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_mac_ops {int (* rx_enable ) (struct xgene_enet_pdata*) ;int (* tx_enable ) (struct xgene_enet_pdata*) ;} ;
struct xgene_enet_pdata {int link_work; int rxq_cnt; int txq_cnt; struct xgene_mac_ops* mac_ops; } ;
struct net_device {scalar_t__ phydev; } ;


 int VAR_0 ;
 struct xgene_enet_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct xgene_enet_pdata*) ;
 int FUNC_8 (struct xgene_enet_pdata*) ;
 int FUNC_9 (struct xgene_enet_pdata*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_1)
{
 struct xgene_enet_pdata *VAR_2 = FUNC_0(VAR_1);
 const struct xgene_mac_ops *VAR_3 = VAR_2->mac_ops;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_2->txq_cnt);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_1, VAR_2->rxq_cnt);
 if (VAR_4)
  return VAR_4;

 FUNC_9(VAR_2);
 VAR_4 = FUNC_10(VAR_1);
 if (VAR_4)
  return VAR_4;

 if (VAR_1->phydev) {
  FUNC_5(VAR_1->phydev);
 } else {
  FUNC_6(&VAR_2->link_work, VAR_0);
  FUNC_1(VAR_1);
 }

 VAR_3->tx_enable(VAR_2);
 VAR_3->rx_enable(VAR_2);
 FUNC_4(VAR_1);

 return VAR_4;
}
