
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct nixge_priv {scalar_t__ mii_bus; int phy_node; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;
 struct nixge_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 struct net_device* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_6(VAR_0);
 struct nixge_priv *VAR_2 = FUNC_2(VAR_1);

 FUNC_7(VAR_1);

 if (FUNC_5(VAR_0->dev.of_node))
  FUNC_4(VAR_0->dev.of_node);
 FUNC_3(VAR_2->phy_node);

 if (VAR_2->mii_bus)
  FUNC_1(VAR_2->mii_bus);

 FUNC_0(VAR_1);

 return 0;
}
