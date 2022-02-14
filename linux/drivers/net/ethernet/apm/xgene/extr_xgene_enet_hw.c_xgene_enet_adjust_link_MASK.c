
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_mac_ops {int (* tx_disable ) (struct xgene_enet_pdata*) ;int (* rx_disable ) (struct xgene_enet_pdata*) ;int (* tx_enable ) (struct xgene_enet_pdata*) ;int (* rx_enable ) (struct xgene_enet_pdata*) ;int (* set_speed ) (struct xgene_enet_pdata*) ;} ;
struct xgene_enet_pdata {scalar_t__ phy_speed; struct xgene_mac_ops* mac_ops; } ;
struct phy_device {scalar_t__ speed; scalar_t__ link; } ;
struct net_device {struct phy_device* phydev; } ;


 scalar_t__ VAR_0 ;
 struct xgene_enet_pdata* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct xgene_enet_pdata*) ;
 int FUNC_3 (struct xgene_enet_pdata*) ;
 int FUNC_4 (struct xgene_enet_pdata*) ;
 int FUNC_5 (struct xgene_enet_pdata*) ;
 int FUNC_6 (struct xgene_enet_pdata*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_1)
{
 struct xgene_enet_pdata *VAR_2 = FUNC_0(VAR_1);
 const struct xgene_mac_ops *VAR_3 = VAR_2->mac_ops;
 struct phy_device *VAR_4 = VAR_1->phydev;

 if (VAR_4->link) {
  if (VAR_2->phy_speed != VAR_4->speed) {
   VAR_2->phy_speed = VAR_4->speed;
   VAR_3->set_speed(VAR_2);
   VAR_3->rx_enable(VAR_2);
   VAR_3->tx_enable(VAR_2);
   FUNC_1(VAR_4);
  }

  FUNC_7(VAR_1);
 } else {
  VAR_3->rx_disable(VAR_2);
  VAR_3->tx_disable(VAR_2);
  VAR_2->phy_speed = VAR_0;
  FUNC_1(VAR_4);
 }
}
