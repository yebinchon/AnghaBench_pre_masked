
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {scalar_t__ autoneg; } ;
struct net_device {struct phy_device* phydev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3)
{
 struct phy_device *VAR_4 = VAR_3->phydev;

 if (!FUNC_1(VAR_3))
  return 0;

 if (!VAR_4)
  return -VAR_2;

 if (VAR_4->autoneg != VAR_0)
  return -VAR_1;

 return FUNC_0(VAR_4);
}
