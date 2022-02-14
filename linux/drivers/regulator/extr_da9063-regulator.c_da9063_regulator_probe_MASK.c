
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct regulator_config {int regmap; int of_node; struct da9063_regulator* driver_data; int init_data; TYPE_2__* dev; } ;
struct TYPE_10__ {int parent; } ;
struct platform_device {TYPE_2__ dev; } ;
struct of_regulator_match {int of_node; } ;
struct da9063_regulators_pdata {scalar_t__ n_regulators; } ;
struct da9063_regulators {int n_regulators; struct da9063_regulator* regulator; } ;
struct TYPE_11__ {int name; int owner; int type; } ;
struct da9063_regulator {struct da9063_regulators_pdata* rdev; TYPE_4__ desc; struct da9063_regulators_pdata* suspend_sleep; TYPE_1__* info; struct da9063_regulators_pdata* sleep; struct da9063_regulators_pdata* suspend; struct da9063_regulators_pdata* mode; struct da9063* hw; } ;
struct da9063_dev_model {scalar_t__ type; int n_regulators; TYPE_1__* regulator_info; } ;
struct da9063 {scalar_t__ type; int regmap; } ;
typedef int config ;
struct TYPE_12__ {scalar_t__ reg; } ;
struct TYPE_9__ {TYPE_6__ suspend_sleep; TYPE_6__ sleep; TYPE_6__ suspend; TYPE_6__ mode; TYPE_4__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct da9063_regulators_pdata*) ;
 int FUNC_1 (struct da9063_regulators_pdata*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct da9063_regulators_pdata*,int) ;
 int VAR_10 ;
 struct da9063_regulators_pdata* FUNC_3 (struct platform_device*,struct of_regulator_match**) ;
 int FUNC_4 (TYPE_2__*,char*,...) ;
 struct da9063* FUNC_5 (int ) ;
 struct da9063_regulators* FUNC_6 (TYPE_2__*,int ,int ) ;
 void* FUNC_7 (TYPE_2__*,int ,TYPE_6__) ;
 struct da9063_regulators_pdata* FUNC_8 (TYPE_2__*,TYPE_4__*,struct regulator_config*) ;
 int FUNC_9 (TYPE_2__*,int,int *,int ,int,char*,struct da9063_regulators*) ;
 int FUNC_10 (struct regulator_config*,int ,int) ;
 int FUNC_11 (struct platform_device*,char*) ;
 int FUNC_12 (struct platform_device*,struct da9063_regulators*) ;
 int FUNC_13 (int ,int ,int*) ;
 int VAR_11 ;
 struct da9063_dev_model* VAR_12 ;
 int FUNC_14 (struct da9063_regulators*,int ,int) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_13)
{
 struct da9063 *VAR_14 = FUNC_5(VAR_13->dev.parent);
 struct of_regulator_match *VAR_15 = ((void*)0);
 struct da9063_regulators_pdata *VAR_16;
 const struct da9063_dev_model *VAR_17;
 struct da9063_regulators *VAR_18;
 struct da9063_regulator *VAR_19;
 struct regulator_config VAR_20;
 bool VAR_21, VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;

 VAR_16 = FUNC_3(VAR_13, &VAR_15);

 if (FUNC_0(VAR_16) || VAR_16->n_regulators == 0) {
  FUNC_4(&VAR_13->dev,
   "No regulators defined for the platform\n");
  return -VAR_3;
 }


 for (VAR_17 = VAR_12; VAR_17->regulator_info; VAR_17++) {
  if (VAR_17->type == VAR_14->type)
   break;
 }
 if (!VAR_17->regulator_info) {
  FUNC_4(&VAR_13->dev, "Chip model not recognised (%u)\n",
   VAR_14->type);
  return -VAR_3;
 }

 VAR_27 = FUNC_13(VAR_14->regmap, VAR_2, &VAR_28);
 if (VAR_27 < 0) {
  FUNC_4(&VAR_13->dev,
   "Error while reading BUCKs configuration\n");
  return VAR_27;
 }
 VAR_21 = VAR_28 & VAR_0;
 VAR_22 = VAR_28 & VAR_1;

 VAR_26 = VAR_17->n_regulators;
 if (VAR_21)
  VAR_26 -= 2;
 else
  VAR_26--;
 if (VAR_22)
  VAR_26 -= 2;
 else
  VAR_26--;


 VAR_18 = FUNC_6(&VAR_13->dev, FUNC_14(VAR_18,
      VAR_11, VAR_26), VAR_5);
 if (!VAR_18)
  return -VAR_4;

 VAR_18->n_regulators = VAR_26;
 FUNC_12(VAR_13, VAR_18);


 VAR_25 = 0;
 VAR_23 = 0;
 while (VAR_25 < VAR_18->n_regulators) {

  switch (VAR_23) {
  case 133:
  case 132:
   if (VAR_21) {
    VAR_23++;
    continue;
   }
   break;
  case 129:
  case 130:
   if (VAR_22) {
    VAR_23++;
    continue;
   }
   break;
  case 131:
   if (!VAR_21) {
    VAR_23++;
    continue;
   }
   break;
  case 128:
   if (!VAR_22) {
    VAR_23++;
    continue;
   }
   break;
  }


  VAR_19 = &VAR_18->regulator[VAR_25];
  VAR_19->hw = VAR_14;
  VAR_19->info = &VAR_17->regulator_info[VAR_23];
  VAR_19->desc = VAR_19->info->desc;
  VAR_19->desc.type = VAR_8;
  VAR_19->desc.owner = VAR_9;

  if (VAR_19->info->mode.reg) {
   VAR_19->mode = FUNC_7(&VAR_13->dev,
     VAR_14->regmap, VAR_19->info->mode);
   if (FUNC_0(VAR_19->mode))
    return FUNC_1(VAR_19->mode);
  }

  if (VAR_19->info->suspend.reg) {
   VAR_19->suspend = FUNC_7(&VAR_13->dev,
     VAR_14->regmap, VAR_19->info->suspend);
   if (FUNC_0(VAR_19->suspend))
    return FUNC_1(VAR_19->suspend);
  }

  if (VAR_19->info->sleep.reg) {
   VAR_19->sleep = FUNC_7(&VAR_13->dev,
     VAR_14->regmap, VAR_19->info->sleep);
   if (FUNC_0(VAR_19->sleep))
    return FUNC_1(VAR_19->sleep);
  }

  if (VAR_19->info->suspend_sleep.reg) {
   VAR_19->suspend_sleep = FUNC_7(&VAR_13->dev,
     VAR_14->regmap, VAR_19->info->suspend_sleep);
   if (FUNC_0(VAR_19->suspend_sleep))
    return FUNC_1(VAR_19->suspend_sleep);
  }


  FUNC_10(&VAR_20, 0, sizeof(VAR_20));
  VAR_20.dev = &VAR_13->dev;
  VAR_20.init_data = FUNC_2(VAR_16, VAR_23);
  VAR_20.driver_data = VAR_19;
  if (VAR_15)
   VAR_20.of_node = VAR_15[VAR_23].of_node;
  VAR_20.regmap = VAR_14->regmap;
  VAR_19->rdev = FUNC_8(&VAR_13->dev, &VAR_19->desc,
           &VAR_20);
  if (FUNC_0(VAR_19->rdev)) {
   FUNC_4(&VAR_13->dev,
    "Failed to register %s regulator\n",
    VAR_19->desc.name);
   return FUNC_1(VAR_19->rdev);
  }
  VAR_23++;
  VAR_25++;
 }


 VAR_24 = FUNC_11(VAR_13, "LDO_LIM");
 if (VAR_24 < 0)
  return VAR_24;

 VAR_27 = FUNC_9(&VAR_13->dev, VAR_24,
    ((void*)0), VAR_10,
    VAR_7 | VAR_6,
    "LDO_LIM", VAR_18);
 if (VAR_27) {
  FUNC_4(&VAR_13->dev, "Failed to request LDO_LIM IRQ.\n");
  return VAR_27;
 }

 return 0;
}
