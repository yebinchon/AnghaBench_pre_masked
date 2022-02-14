
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {scalar_t__ start; } ;
struct regulator_init_data {int dummy; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {int regmap; struct regulator_init_data* init_data; struct pm8607_regulator_info* driver_data; int dev; } ;
struct pm860x_chip {scalar_t__ id; int regmap_companion; int regmap; int dev; scalar_t__ buck3_double; } ;
struct TYPE_6__ {scalar_t__ vsel_reg; unsigned long long name; } ;
struct pm8607_regulator_info {int slope_double; TYPE_2__ desc; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (struct pm8607_regulator_info*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct regulator_dev*) ;
 int VAR_3 ;
 int FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (TYPE_1__*,char*,unsigned long long) ;
 struct pm860x_chip* FUNC_4 (int ) ;
 struct regulator_init_data* FUNC_5 (TYPE_1__*) ;
 struct regulator_dev* FUNC_6 (TYPE_1__*,TYPE_2__*,struct regulator_config*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct pm8607_regulator_info*) ;
 struct pm8607_regulator_info* VAR_4 ;
 struct pm8607_regulator_info* VAR_5 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_6)
{
 struct pm860x_chip *VAR_7 = FUNC_4(VAR_6->dev.parent);
 struct pm8607_regulator_info *VAR_8 = ((void*)0);
 struct regulator_init_data *VAR_9 = FUNC_5(&VAR_6->dev);
 struct regulator_config VAR_10 = { };
 struct regulator_dev *VAR_11;
 struct resource *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_7(VAR_6, VAR_2, 0);
 if (VAR_12) {

  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_5); VAR_13++) {
   VAR_8 = &VAR_5[VAR_13];
   if (VAR_8->desc.vsel_reg == VAR_12->start)
    break;
  }
  if (VAR_13 == FUNC_0(VAR_5)) {
   FUNC_3(&VAR_6->dev, "Failed to find regulator %llu\n",
    (unsigned long long)VAR_12->start);
   return -VAR_1;
  }
 } else {

  VAR_8 = &VAR_4[0];

  VAR_13 = -1;
 }


 if ((VAR_13 == VAR_3) && VAR_7->buck3_double)
  VAR_8->slope_double = 1;

 VAR_10.dev = VAR_7->dev;
 VAR_10.driver_data = VAR_8;

 if (VAR_9)
  VAR_10.init_data = VAR_9;

 if (VAR_7->id == VAR_0)
  VAR_10.regmap = VAR_7->regmap;
 else
  VAR_10.regmap = VAR_7->regmap_companion;

 VAR_11 = FUNC_6(&VAR_6->dev, &VAR_8->desc, &VAR_10);
 if (FUNC_1(VAR_11)) {
  FUNC_3(&VAR_6->dev, "failed to register regulator %s\n",
   VAR_8->desc.name);
  return FUNC_2(VAR_11);
 }

 FUNC_8(VAR_6, VAR_8);
 return 0;
}
