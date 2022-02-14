
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
struct platform_device {int dev; } ;
struct exynos_tmu_data {int regulator; int clk_sec; int clk; int sclk; struct thermal_zone_device* tzd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct platform_device*,int) ;
 struct exynos_tmu_data* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,struct thermal_zone_device*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct exynos_tmu_data *VAR_1 = FUNC_4(VAR_0);
 struct thermal_zone_device *VAR_2 = VAR_1->tzd;

 FUNC_6(&VAR_0->dev, VAR_2);
 FUNC_3(VAR_0, 0);

 FUNC_1(VAR_1->sclk);
 FUNC_2(VAR_1->clk);
 if (!FUNC_0(VAR_1->clk_sec))
  FUNC_2(VAR_1->clk_sec);

 if (!FUNC_0(VAR_1->regulator))
  FUNC_5(VAR_1->regulator);

 return 0;
}
