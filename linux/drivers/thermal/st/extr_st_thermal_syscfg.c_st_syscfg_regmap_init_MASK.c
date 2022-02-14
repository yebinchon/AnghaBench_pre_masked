
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_thermal_sensor {int regmap; int dev; TYPE_1__* cdata; } ;
struct TYPE_2__ {int sys_compat; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct st_thermal_sensor *VAR_0)
{
 VAR_0->regmap =
  FUNC_3(VAR_0->cdata->sys_compat);
 if (FUNC_0(VAR_0->regmap)) {
  FUNC_2(VAR_0->dev, "failed to find syscfg regmap\n");
  return FUNC_1(VAR_0->regmap);
 }

 return 0;
}
