
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct net_device {int dummy; } ;
struct fs_enet_private {TYPE_1__* fpi; int dev; TYPE_3__* ops; } ;
struct TYPE_6__ {int (* cleanup_data ) (struct net_device*) ;int (* free_bd ) (struct net_device*) ;} ;
struct TYPE_4__ {scalar_t__ clk_per; int phy_node; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct net_device*) ;
 struct fs_enet_private* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 struct net_device* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_7(VAR_0);
 struct fs_enet_private *VAR_2 = FUNC_3(VAR_1);

 FUNC_10(VAR_1);

 VAR_2->ops->free_bd(VAR_1);
 VAR_2->ops->cleanup_data(VAR_1);
 FUNC_1(VAR_2->dev, ((void*)0));
 FUNC_4(VAR_2->fpi->phy_node);
 if (VAR_2->fpi->clk_per)
  FUNC_0(VAR_2->fpi->clk_per);
 if (FUNC_6(VAR_0->dev.of_node))
  FUNC_5(VAR_0->dev.of_node);
 FUNC_2(VAR_1);
 return 0;
}
