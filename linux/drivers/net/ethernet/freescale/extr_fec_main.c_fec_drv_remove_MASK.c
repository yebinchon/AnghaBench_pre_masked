
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct net_device {int dummy; } ;
struct fec_enet_private {int phy_node; int clk_ipg; int clk_ahb; scalar_t__ reg_phy; int tx_timeout_work; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fec_enet_private*) ;
 int FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct net_device*) ;
 struct fec_enet_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct device_node*) ;
 scalar_t__ FUNC_8 (struct device_node*) ;
 struct net_device* FUNC_9 (struct platform_device*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (struct net_device*) ;

__attribute__((used)) static int
FUNC_14(struct platform_device *VAR_0)
{
 struct net_device *VAR_1 = FUNC_9(VAR_0);
 struct fec_enet_private *VAR_2 = FUNC_5(VAR_1);
 struct device_node *VAR_3 = VAR_0->dev.of_node;

 FUNC_0(&VAR_2->tx_timeout_work);
 FUNC_3(VAR_0);
 FUNC_13(VAR_1);
 FUNC_2(VAR_2);
 if (VAR_2->reg_phy)
  FUNC_12(VAR_2->reg_phy);
 FUNC_11(&VAR_0->dev);
 FUNC_10(&VAR_0->dev);
 FUNC_1(VAR_2->clk_ahb);
 FUNC_1(VAR_2->clk_ipg);
 if (FUNC_8(VAR_3))
  FUNC_7(VAR_3);
 FUNC_6(VAR_2->phy_node);
 FUNC_4(VAR_1);

 return 0;
}
