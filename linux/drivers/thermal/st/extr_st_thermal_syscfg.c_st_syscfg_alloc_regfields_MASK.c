
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_thermal_sensor {int pwr; TYPE_1__* cdata; int regmap; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int * reg_fields; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t VAR_0 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct st_thermal_sensor *VAR_1)
{
 struct device *VAR_2 = VAR_1->dev;

 VAR_1->pwr = FUNC_3(VAR_2, VAR_1->regmap,
     VAR_1->cdata->reg_fields[VAR_0]);

 if (FUNC_0(VAR_1->pwr)) {
  FUNC_2(VAR_2, "failed to alloc syscfg regfields\n");
  return FUNC_1(VAR_1->pwr);
 }

 return 0;
}
