
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct st_thermal_sensor {void* int_enable; void* int_thresh_hi; TYPE_1__* cdata; struct regmap* regmap; struct device* dev; } ;
struct regmap {int dummy; } ;
struct reg_field {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct reg_field* reg_fields; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (struct device*,char*) ;
 void* FUNC_2 (struct device*,struct regmap*,struct reg_field const) ;

__attribute__((used)) static int FUNC_3(struct st_thermal_sensor *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;
 struct regmap *VAR_5 = VAR_3->regmap;
 const struct reg_field *VAR_6 = VAR_3->cdata->reg_fields;

 VAR_3->int_thresh_hi = FUNC_2(VAR_4, VAR_5,
      VAR_6[VAR_2]);
 VAR_3->int_enable = FUNC_2(VAR_4, VAR_5,
      VAR_6[VAR_1]);

 if (FUNC_0(VAR_3->int_thresh_hi) || FUNC_0(VAR_3->int_enable)) {
  FUNC_1(VAR_4, "failed to alloc mmap regfields\n");
  return -VAR_0;
 }

 return 0;
}
