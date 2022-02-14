
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ link; } ;
struct net_device {struct phy_device* phydev; } ;
struct emac_adapter {int dummy; } ;


 int FUNC_0 (struct emac_adapter*) ;
 int FUNC_1 (struct emac_adapter*) ;
 int FUNC_2 (struct emac_adapter*,int) ;
 struct emac_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct phy_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0)
{
 struct emac_adapter *VAR_1 = FUNC_3(VAR_0);
 struct phy_device *VAR_2 = VAR_0->phydev;

 if (VAR_2->link) {
  FUNC_0(VAR_1);
  FUNC_2(VAR_1, 1);
 } else {
  FUNC_2(VAR_1, 0);
  FUNC_1(VAR_1);
 }

 FUNC_4(VAR_2);
}
