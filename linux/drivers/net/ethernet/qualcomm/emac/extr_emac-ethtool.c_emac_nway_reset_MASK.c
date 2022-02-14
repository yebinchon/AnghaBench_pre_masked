
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_1)
{
 struct phy_device *VAR_2 = VAR_1->phydev;

 if (!VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_2);
}
