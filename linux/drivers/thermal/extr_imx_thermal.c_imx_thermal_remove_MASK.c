
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct platform_device {int dummy; } ;
struct imx_thermal_data {int policy; int cdev; int tz; int thermal_clk; TYPE_1__* socdata; struct regmap* tempmon; } ;
struct TYPE_2__ {int power_down_mask; scalar_t__ sensor_ctrl; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct imx_thermal_data* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct regmap*,scalar_t__,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct imx_thermal_data *VAR_2 = FUNC_4(VAR_1);
 struct regmap *VAR_3 = VAR_2->tempmon;


 FUNC_5(VAR_3, VAR_2->socdata->sensor_ctrl + VAR_0,
       VAR_2->socdata->power_down_mask);
 if (!FUNC_0(VAR_2->thermal_clk))
  FUNC_1(VAR_2->thermal_clk);

 FUNC_6(VAR_2->tz);
 FUNC_2(VAR_2->cdev);
 FUNC_3(VAR_2->policy);

 return 0;
}
