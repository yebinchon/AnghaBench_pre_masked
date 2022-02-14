
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {int dummy; } ;
struct axienet_local {int * phy_node; scalar_t__ clk; scalar_t__ phylink; } ;


 int FUNC_0 (struct axienet_local*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct net_device*) ;
 struct axienet_local* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 struct net_device* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_6(VAR_0);
 struct axienet_local *VAR_2 = FUNC_3(VAR_1);

 FUNC_7(VAR_1);

 if (VAR_2->phylink)
  FUNC_5(VAR_2->phylink);

 FUNC_0(VAR_2);

 if (VAR_2->clk)
  FUNC_1(VAR_2->clk);

 FUNC_4(VAR_2->phy_node);
 VAR_2->phy_node = ((void*)0);

 FUNC_2(VAR_1);

 return 0;
}
