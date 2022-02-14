
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct net_device {int * phydev; } ;
struct macb {int phy_node; int tsu_clk; int rx_clk; int pclk; int hclk; int tx_clk; int mii_bus; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct macb* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct device_node*) ;
 scalar_t__ FUNC_8 (struct device_node*) ;
 int FUNC_9 (int *) ;
 struct net_device* FUNC_10 (struct platform_device*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct net_device*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_0)
{
 struct net_device *VAR_1;
 struct macb *VAR_2;
 struct device_node *VAR_3 = VAR_0->dev.of_node;

 VAR_1 = FUNC_10(VAR_0);

 if (VAR_1) {
  VAR_2 = FUNC_5(VAR_1);
  if (VAR_1->phydev)
   FUNC_9(VAR_1->phydev);
  FUNC_4(VAR_2->mii_bus);
  if (VAR_3 && FUNC_8(VAR_3))
   FUNC_7(VAR_3);
  VAR_1->phydev = ((void*)0);
  FUNC_3(VAR_2->mii_bus);

  FUNC_15(VAR_1);
  FUNC_11(&VAR_0->dev);
  FUNC_12(&VAR_0->dev);
  if (!FUNC_14(&VAR_0->dev)) {
   FUNC_0(VAR_2->tx_clk);
   FUNC_1(VAR_2->tx_clk);
   FUNC_0(VAR_2->hclk);
   FUNC_0(VAR_2->pclk);
   FUNC_0(VAR_2->rx_clk);
   FUNC_0(VAR_2->tsu_clk);
   FUNC_13(&VAR_0->dev);
  }
  FUNC_6(VAR_2->phy_node);
  FUNC_2(VAR_1);
 }

 return 0;
}
