
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct net_device {scalar_t__ phydev; } ;
struct mv643xx_eth_private {struct net_device* dev; int clk; int tx_timeout_task; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (scalar_t__) ;
 struct mv643xx_eth_private* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct mv643xx_eth_private *VAR_1 = FUNC_5(VAR_0);
 struct net_device *VAR_2 = VAR_1->dev;

 FUNC_6(VAR_1->dev);
 if (VAR_2->phydev)
  FUNC_4(VAR_2->phydev);
 FUNC_1(&VAR_1->tx_timeout_task);

 if (!FUNC_0(VAR_1->clk))
  FUNC_2(VAR_1->clk);

 FUNC_3(VAR_1->dev);

 return 0;
}
