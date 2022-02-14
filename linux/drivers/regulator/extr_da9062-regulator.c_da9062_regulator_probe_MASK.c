
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct regulator_config {int regmap; struct da9062_regulator* driver_data; int dev; } ;
struct TYPE_9__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct da9062_regulators {int n_regulators; int irq_ldo_lim; struct da9062_regulator* regulator; } ;
struct TYPE_11__ {scalar_t__ reg; } ;
struct TYPE_10__ {int name; int owner; int type; } ;
struct da9062_regulator_info {TYPE_5__ suspend_sleep; TYPE_5__ sleep; TYPE_5__ suspend; TYPE_5__ mode; TYPE_3__ desc; } ;
struct da9062_regulator {void* rdev; TYPE_3__ desc; void* suspend_sleep; struct da9062_regulator_info const* info; void* sleep; void* suspend; void* mode; struct da9062* hw; } ;
struct da9062 {int chip_type; int regmap; int dev; } ;
typedef int config ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 struct da9062* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 struct da9062_regulators* FUNC_5 (TYPE_1__*,int ,int ) ;
 void* FUNC_6 (TYPE_1__*,int ,TYPE_5__) ;
 void* FUNC_7 (TYPE_1__*,TYPE_3__*,struct regulator_config*) ;
 int FUNC_8 (TYPE_1__*,int,int *,int ,int,char*,struct da9062_regulators*) ;
 struct da9062_regulator_info* VAR_11 ;
 struct da9062_regulator_info* VAR_12 ;
 int FUNC_9 (struct regulator_config*,int ,int) ;
 int FUNC_10 (struct platform_device*,char*) ;
 int FUNC_11 (struct platform_device*,struct da9062_regulators*) ;
 int VAR_13 ;
 int FUNC_12 (struct da9062_regulators*,int ,int) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_14)
{
 struct da9062 *VAR_15 = FUNC_3(VAR_14->dev.parent);
 struct da9062_regulators *VAR_16;
 struct da9062_regulator *VAR_17;
 struct regulator_config VAR_18 = { };
 const struct da9062_regulator_info *VAR_19;
 int VAR_20, VAR_21, VAR_22;
 int VAR_23;

 switch (VAR_15->chip_type) {
 case 129:
  VAR_23 = VAR_0;
  VAR_19 = VAR_11;
  break;
 case 128:
  VAR_23 = VAR_1;
  VAR_19 = VAR_12;
  break;
 default:
  FUNC_2(VAR_15->dev, "Unrecognised chip type\n");
  return -VAR_2;
 }


 VAR_16 = FUNC_5(&VAR_14->dev, FUNC_12(VAR_16, VAR_13,
      VAR_23), VAR_5);
 if (!VAR_16)
  return -VAR_3;

 VAR_16->n_regulators = VAR_23;
 FUNC_11(VAR_14, VAR_16);

 VAR_21 = 0;
 while (VAR_21 < VAR_16->n_regulators) {

  VAR_17 = &VAR_16->regulator[VAR_21];
  VAR_17->hw = VAR_15;
  VAR_17->info = &VAR_19[VAR_21];
  VAR_17->desc = VAR_17->info->desc;
  VAR_17->desc.type = VAR_8;
  VAR_17->desc.owner = VAR_9;

  if (VAR_17->info->mode.reg) {
   VAR_17->mode = FUNC_6(
     &VAR_14->dev,
     VAR_15->regmap,
     VAR_17->info->mode);
   if (FUNC_0(VAR_17->mode))
    return FUNC_1(VAR_17->mode);
  }

  if (VAR_17->info->suspend.reg) {
   VAR_17->suspend = FUNC_6(
     &VAR_14->dev,
     VAR_15->regmap,
     VAR_17->info->suspend);
   if (FUNC_0(VAR_17->suspend))
    return FUNC_1(VAR_17->suspend);
  }

  if (VAR_17->info->sleep.reg) {
   VAR_17->sleep = FUNC_6(
     &VAR_14->dev,
     VAR_15->regmap,
     VAR_17->info->sleep);
   if (FUNC_0(VAR_17->sleep))
    return FUNC_1(VAR_17->sleep);
  }

  if (VAR_17->info->suspend_sleep.reg) {
   VAR_17->suspend_sleep = FUNC_6(
     &VAR_14->dev,
     VAR_15->regmap,
     VAR_17->info->suspend_sleep);
   if (FUNC_0(VAR_17->suspend_sleep))
    return FUNC_1(VAR_17->suspend_sleep);
  }


  FUNC_9(&VAR_18, 0, sizeof(VAR_18));
  VAR_18.dev = VAR_15->dev;
  VAR_18.driver_data = VAR_17;
  VAR_18.regmap = VAR_15->regmap;

  VAR_17->rdev = FUNC_7(&VAR_14->dev, &VAR_17->desc,
           &VAR_18);
  if (FUNC_0(VAR_17->rdev)) {
   FUNC_2(&VAR_14->dev,
    "Failed to register %s regulator\n",
    VAR_17->desc.name);
   return FUNC_1(VAR_17->rdev);
  }

  VAR_21++;
 }


 VAR_20 = FUNC_10(VAR_14, "LDO_LIM");
 if (VAR_20 < 0)
  return VAR_20;
 VAR_16->irq_ldo_lim = VAR_20;

 VAR_22 = FUNC_8(&VAR_14->dev, VAR_20,
     ((void*)0), VAR_10,
     VAR_7 | VAR_6,
     "LDO_LIM", VAR_16);
 if (VAR_22) {
  FUNC_4(&VAR_14->dev,
    "Failed to request LDO_LIM IRQ.\n");
  VAR_16->irq_ldo_lim = -VAR_4;
 }

 return 0;
}
