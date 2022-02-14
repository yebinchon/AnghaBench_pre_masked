
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_enet_pdata {struct net_device* ndev; } ;
struct net_device {scalar_t__ phydev; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct xgene_enet_pdata *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->ndev;

 if (VAR_1->phydev)
  FUNC_0(VAR_1->phydev);
}
