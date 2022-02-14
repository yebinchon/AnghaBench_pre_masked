
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct st_thermal_sensor {TYPE_2__* ops; void* temp_data; void* overflow; void* dcorrect; TYPE_1__* cdata; struct regmap* regmap; struct device* dev; } ;
struct regmap {int dummy; } ;
struct reg_field {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int (* alloc_regfields ) (struct st_thermal_sensor*) ;} ;
struct TYPE_3__ {struct reg_field* reg_fields; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 size_t VAR_3 ;
 int FUNC_1 (struct device*,char*) ;
 void* FUNC_2 (struct device*,struct regmap*,struct reg_field const) ;
 int FUNC_3 (struct st_thermal_sensor*) ;

__attribute__((used)) static int FUNC_4(struct st_thermal_sensor *VAR_4)
{
 struct device *VAR_5 = VAR_4->dev;
 struct regmap *VAR_6 = VAR_4->regmap;
 const struct reg_field *VAR_7 = VAR_4->cdata->reg_fields;

 VAR_4->dcorrect = FUNC_2(VAR_5, VAR_6,
         VAR_7[VAR_1]);

 VAR_4->overflow = FUNC_2(VAR_5, VAR_6,
         VAR_7[VAR_3]);

 VAR_4->temp_data = FUNC_2(VAR_5, VAR_6,
          VAR_7[VAR_0]);

 if (FUNC_0(VAR_4->dcorrect) ||
     FUNC_0(VAR_4->overflow) ||
     FUNC_0(VAR_4->temp_data)) {
  FUNC_1(VAR_5, "failed to allocate common regfields\n");
  return -VAR_2;
 }

 return VAR_4->ops->alloc_regfields(VAR_4);
}
