
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct regulator_desc {int name; } ;
struct regulator_config {struct max77620_regulator* driver_data; struct device* dev; int regmap; } ;
struct device {TYPE_2__* parent; scalar_t__ of_node; } ;
struct platform_device {struct device dev; } ;
struct max77620_regulator_info {struct regulator_desc desc; } ;
struct max77620_regulator {TYPE_1__* reg_pdata; int * enable_power_mode; struct max77620_regulator_info** rinfo; int rmap; struct device* dev; } ;
struct max77620_chip {int chip_id; int rmap; } ;
struct TYPE_4__ {scalar_t__ of_node; } ;
struct TYPE_3__ {int active_fps_src; int active_fps_pd_slot; int active_fps_pu_slot; int suspend_fps_src; int suspend_fps_pd_slot; int suspend_fps_pu_slot; int power_ok; int ramp_rate_setting; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;


 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct device*,char*,int ,int) ;
 struct max77620_chip* FUNC_3 (TYPE_2__*) ;
 struct max77620_regulator* FUNC_4 (struct device*,int,int ) ;
 struct regulator_dev* FUNC_5 (struct device*,struct regulator_desc*,struct regulator_config*) ;
 struct max77620_regulator_info* VAR_6 ;
 int FUNC_6 (struct max77620_regulator*,int) ;
 struct max77620_regulator_info* VAR_7 ;
 struct max77620_regulator_info* VAR_8 ;
 int FUNC_7 (struct platform_device*,struct max77620_regulator*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_9)
{
 struct max77620_chip *VAR_10 = FUNC_3(VAR_9->dev.parent);
 struct max77620_regulator_info *VAR_11;
 struct device *VAR_12 = &VAR_9->dev;
 struct regulator_config VAR_13 = { };
 struct max77620_regulator *VAR_14;
 int VAR_15 = 0;
 int VAR_16;

 VAR_14 = FUNC_4(VAR_12, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 FUNC_7(VAR_9, VAR_14);
 VAR_14->dev = VAR_12;
 VAR_14->rmap = VAR_10->rmap;
 if (!VAR_12->of_node)
  VAR_12->of_node = VAR_9->dev.parent->of_node;

 switch (VAR_10->chip_id) {
 case 129:
  VAR_11 = VAR_7;
  break;
 case 130:
  VAR_11 = VAR_6;
  break;
 case 128:
  VAR_11 = VAR_8;
  break;
 default:
  return -VAR_0;
 }

 VAR_13.regmap = VAR_14->rmap;
 VAR_13.dev = VAR_12;
 VAR_13.driver_data = VAR_14;

 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
  struct regulator_dev *VAR_17;
  struct regulator_desc *VAR_18;

  if ((VAR_10->chip_id == 129) &&
      (VAR_16 == VAR_5))
   continue;

  VAR_18 = &VAR_11[VAR_16].desc;
  VAR_14->rinfo[VAR_16] = &VAR_11[VAR_16];
  VAR_14->enable_power_mode[VAR_16] = VAR_4;
  VAR_14->reg_pdata[VAR_16].active_fps_src = -1;
  VAR_14->reg_pdata[VAR_16].active_fps_pd_slot = -1;
  VAR_14->reg_pdata[VAR_16].active_fps_pu_slot = -1;
  VAR_14->reg_pdata[VAR_16].suspend_fps_src = -1;
  VAR_14->reg_pdata[VAR_16].suspend_fps_pd_slot = -1;
  VAR_14->reg_pdata[VAR_16].suspend_fps_pu_slot = -1;
  VAR_14->reg_pdata[VAR_16].power_ok = -1;
  VAR_14->reg_pdata[VAR_16].ramp_rate_setting = -1;

  VAR_15 = FUNC_6(VAR_14, VAR_16);
  if (VAR_15 < 0)
   return VAR_15;

  VAR_17 = FUNC_5(VAR_12, VAR_18, &VAR_13);
  if (FUNC_0(VAR_17)) {
   VAR_15 = FUNC_1(VAR_17);
   FUNC_2(VAR_12, "Regulator registration %s failed: %d\n",
    VAR_18->name, VAR_15);
   return VAR_15;
  }
 }

 return 0;
}
