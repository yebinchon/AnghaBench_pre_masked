
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct mii_bus {int dummy; } ;
struct b44 {struct mii_bus* mii_bus; struct net_device* dev; } ;


 int FUNC_0 (struct mii_bus*) ;
 int FUNC_1 (struct mii_bus*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct b44 *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->dev;
 struct mii_bus *VAR_2 = VAR_0->mii_bus;

 FUNC_2(VAR_1->phydev);
 FUNC_1(VAR_2);
 FUNC_0(VAR_2);
}
