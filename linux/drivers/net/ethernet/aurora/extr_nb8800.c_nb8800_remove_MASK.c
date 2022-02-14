
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct net_device {int dummy; } ;
struct nb8800_priv {int clk; int mii_bus; int phy_node; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 struct nb8800_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 struct net_device* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (struct net_device*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_8(VAR_0);
 struct nb8800_priv *VAR_2 = FUNC_4(VAR_1);

 FUNC_9(VAR_1);
 if (FUNC_7(VAR_0->dev.of_node))
  FUNC_6(VAR_0->dev.of_node);
 FUNC_5(VAR_2->phy_node);

 FUNC_2(VAR_2->mii_bus);

 FUNC_0(VAR_2->clk);

 FUNC_3(VAR_1);
 FUNC_1(VAR_1);

 return 0;
}
