
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_enet_pdata {int * mdio_bus; struct net_device* ndev; } ;
struct net_device {scalar_t__ phydev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct xgene_enet_pdata *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->ndev;

 if (VAR_1->phydev)
  FUNC_2(VAR_1->phydev);

 FUNC_1(VAR_0->mdio_bus);
 FUNC_0(VAR_0->mdio_bus);
 VAR_0->mdio_bus = ((void*)0);
}
