
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_local {int * phy_node; int * mii_bus; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct net_local* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 struct net_device* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_5(VAR_0);

 struct net_local *VAR_2 = FUNC_3(VAR_1);


 if (VAR_2->mii_bus) {
  FUNC_2(VAR_2->mii_bus);
  FUNC_1(VAR_2->mii_bus);
  VAR_2->mii_bus = ((void*)0);
 }

 FUNC_6(VAR_1);

 FUNC_4(VAR_2->phy_node);
 VAR_2->phy_node = ((void*)0);

 FUNC_0(VAR_1);

 return 0;
}
