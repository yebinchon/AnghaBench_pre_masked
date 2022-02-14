
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int drv; } ;
struct net_device {struct phy_device* phydev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct phy_device*) ;

int FUNC_1(struct net_device *VAR_2)
{
 struct phy_device *VAR_3 = VAR_2->phydev;

 if (!VAR_3)
  return -VAR_1;

 if (!VAR_3->drv)
  return -VAR_0;

 return FUNC_0(VAR_3);
}
