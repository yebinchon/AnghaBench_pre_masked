
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int phydev; } ;
struct ftgmac100 {int mii_bus; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ftgmac100* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct ftgmac100 *VAR_1 = FUNC_2(VAR_0);

 if (!VAR_0->phydev)
  return;

 FUNC_3(VAR_0->phydev);
 FUNC_1(VAR_1->mii_bus);
 FUNC_0(VAR_1->mii_bus);
}
