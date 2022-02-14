
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx2967_thermal_priv {int clk_apb; int clk_topcrm; int tzd; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int ) ;
 struct zx2967_thermal_priv* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct zx2967_thermal_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_0->dev, VAR_1->tzd);
 FUNC_0(VAR_1->clk_topcrm);
 FUNC_0(VAR_1->clk_apb);

 return 0;
}
