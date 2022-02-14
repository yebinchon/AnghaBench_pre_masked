
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int dummy; } ;
struct net_device {struct phy_device* phydev; } ;


 int FUNC_0 (struct phy_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0)
{
 struct phy_device *VAR_1 = VAR_0->phydev;

 FUNC_0(VAR_1);
}
