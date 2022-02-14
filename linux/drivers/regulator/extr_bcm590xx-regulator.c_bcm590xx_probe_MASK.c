
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_desc {int dummy; } ;
struct regulator_config {int regmap; struct bcm590xx_reg* driver_data; int dev; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {int name; TYPE_1__ dev; } ;
struct bcm590xx_reg {TYPE_2__* desc; struct bcm590xx* mfd; } ;
struct bcm590xx_info {char* name; int n_linear_ranges; int linear_ranges; int n_voltages; int volt_table; int vin_name; } ;
struct bcm590xx {int dev; int regmap_pri; int regmap_sec; } ;
struct TYPE_7__ {char* name; int id; int enable_is_inverted; int owner; int type; int enable_reg; int enable_mask; int vsel_reg; int vsel_mask; int * ops; int n_linear_ranges; int linear_ranges; int n_voltages; int volt_table; int supply_name; void* regulators_node; void* of_match; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct bcm590xx_info* VAR_12 ;
 int FUNC_7 (int ,char*,int ) ;
 struct bcm590xx* FUNC_8 (int ) ;
 TYPE_2__* FUNC_9 (TYPE_1__*,int,int,int ) ;
 struct bcm590xx_reg* FUNC_10 (TYPE_1__*,int,int ) ;
 struct regulator_dev* FUNC_11 (TYPE_1__*,TYPE_2__*,struct regulator_config*) ;
 void* FUNC_12 (char*) ;
 int FUNC_13 (struct platform_device*,struct bcm590xx_reg*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_13)
{
 struct bcm590xx *VAR_14 = FUNC_8(VAR_13->dev.parent);
 struct bcm590xx_reg *VAR_15;
 struct regulator_config VAR_16 = { };
 struct bcm590xx_info *VAR_17;
 struct regulator_dev *VAR_18;
 int VAR_19;

 VAR_15 = FUNC_10(&VAR_13->dev, sizeof(*VAR_15), VAR_6);
 if (!VAR_15)
  return -VAR_5;

 VAR_15->mfd = VAR_14;

 FUNC_13(VAR_13, VAR_15);

 VAR_15->desc = FUNC_9(&VAR_13->dev,
     VAR_1,
     sizeof(struct regulator_desc),
     VAR_6);
 if (!VAR_15->desc)
  return -VAR_5;

 VAR_17 = VAR_12;

 for (VAR_19 = 0; VAR_19 < VAR_1; VAR_19++, VAR_17++) {

  VAR_15->desc[VAR_19].name = VAR_17->name;
  VAR_15->desc[VAR_19].of_match = FUNC_12(VAR_17->name);
  VAR_15->desc[VAR_19].regulators_node = FUNC_12("regulators");
  VAR_15->desc[VAR_19].supply_name = VAR_17->vin_name;
  VAR_15->desc[VAR_19].id = VAR_19;
  VAR_15->desc[VAR_19].volt_table = VAR_17->volt_table;
  VAR_15->desc[VAR_19].n_voltages = VAR_17->n_voltages;
  VAR_15->desc[VAR_19].linear_ranges = VAR_17->linear_ranges;
  VAR_15->desc[VAR_19].n_linear_ranges = VAR_17->n_linear_ranges;

  if ((FUNC_1(VAR_19)) || (FUNC_0(VAR_19))) {
   VAR_15->desc[VAR_19].ops = &VAR_10;
   VAR_15->desc[VAR_19].vsel_mask = VAR_0;
  } else if (FUNC_2(VAR_19))
   VAR_15->desc[VAR_19].ops = &VAR_11;
  else {
   VAR_15->desc[VAR_19].ops = &VAR_9;
   VAR_15->desc[VAR_19].vsel_mask = VAR_3;
  }

  if (FUNC_2(VAR_19))
   VAR_15->desc[VAR_19].enable_mask = VAR_4;
  else {
   VAR_15->desc[VAR_19].vsel_reg = FUNC_6(VAR_19);
   VAR_15->desc[VAR_19].enable_is_inverted = 1;
   VAR_15->desc[VAR_19].enable_mask = VAR_2;
  }
  VAR_15->desc[VAR_19].enable_reg = FUNC_5(VAR_19);
  VAR_15->desc[VAR_19].type = VAR_7;
  VAR_15->desc[VAR_19].owner = VAR_8;

  VAR_16.dev = VAR_14->dev;
  VAR_16.driver_data = VAR_15;
  if (FUNC_0(VAR_19) || FUNC_2(VAR_19))
   VAR_16.regmap = VAR_14->regmap_sec;
  else
   VAR_16.regmap = VAR_14->regmap_pri;

  VAR_18 = FUNC_11(&VAR_13->dev, &VAR_15->desc[VAR_19],
            &VAR_16);
  if (FUNC_3(VAR_18)) {
   FUNC_7(VAR_14->dev,
    "failed to register %s regulator\n",
    VAR_13->name);
   return FUNC_4(VAR_18);
  }
 }

 return 0;
}
