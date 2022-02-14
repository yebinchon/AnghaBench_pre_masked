
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xge_pdata {struct mii_bus* mdio_bus; } ;
struct net_device {scalar_t__ phydev; } ;
struct mii_bus {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mii_bus*) ;
 int FUNC_1 (struct mii_bus*) ;
 struct xge_pdata* FUNC_2 (struct net_device*) ;
 int FUNC_3 (scalar_t__) ;

void FUNC_4(struct net_device *VAR_1)
{
 struct xge_pdata *VAR_2 = FUNC_2(VAR_1);
 struct mii_bus *VAR_3 = VAR_2->mdio_bus;

 if (VAR_1->phydev)
  FUNC_3(VAR_1->phydev);

 if (VAR_3->state == VAR_0)
  FUNC_1(VAR_3);

 FUNC_0(VAR_3);
}
