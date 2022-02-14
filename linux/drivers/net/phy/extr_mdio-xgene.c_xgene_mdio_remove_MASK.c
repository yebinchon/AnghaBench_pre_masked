
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgene_mdio_pdata {int clk; struct mii_bus* mdio_bus; } ;
struct device {scalar_t__ of_node; } ;
struct platform_device {struct device dev; } ;
struct mii_bus {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mii_bus*) ;
 int FUNC_2 (struct mii_bus*) ;
 struct xgene_mdio_pdata* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct xgene_mdio_pdata *VAR_1 = FUNC_3(VAR_0);
 struct mii_bus *VAR_2 = VAR_1->mdio_bus;
 struct device *VAR_3 = &VAR_0->dev;

 FUNC_2(VAR_2);
 FUNC_1(VAR_2);

 if (VAR_3->of_node)
  FUNC_0(VAR_1->clk);

 return 0;
}
