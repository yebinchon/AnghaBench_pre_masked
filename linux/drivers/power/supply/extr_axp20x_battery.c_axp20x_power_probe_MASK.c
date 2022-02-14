
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply_config {int of_node; struct axp20x_batt_ps* drv_data; } ;
struct power_supply_battery_info {int voltage_min_design_uv; int constant_charge_current_max_ua; } ;
struct device {int of_node; int parent; } ;
struct platform_device {struct device dev; } ;
struct axp_data {int dummy; } ;
struct axp20x_batt_ps {int max_ccc; void* batt; struct axp_data* data; int regmap; void* batt_dischrg_i; void* batt_chrg_i; void* batt_v; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_4 ;
 int FUNC_2 (struct axp20x_batt_ps*,int*) ;
 scalar_t__ FUNC_3 (struct axp20x_batt_ps*,int) ;
 scalar_t__ FUNC_4 (struct axp20x_batt_ps*,int) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (int ,int *) ;
 void* FUNC_7 (struct device*,char*) ;
 struct axp20x_batt_ps* FUNC_8 (struct device*,int,int ) ;
 void* FUNC_9 (struct device*,int *,struct power_supply_config*) ;
 scalar_t__ FUNC_10 (struct device*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct platform_device*,struct axp20x_batt_ps*) ;
 int FUNC_13 (void*,struct power_supply_battery_info*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_5)
{
 struct axp20x_batt_ps *VAR_6;
 struct power_supply_config VAR_7 = {};
 struct power_supply_battery_info VAR_8;
 struct device *VAR_9 = &VAR_5->dev;

 if (!FUNC_11(VAR_5->dev.of_node))
  return -VAR_0;

 VAR_6 = FUNC_8(&VAR_5->dev, sizeof(*VAR_6),
       VAR_3);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->dev = &VAR_5->dev;

 VAR_6->batt_v = FUNC_7(&VAR_5->dev, "batt_v");
 if (FUNC_0(VAR_6->batt_v)) {
  if (FUNC_1(VAR_6->batt_v) == -VAR_0)
   return -VAR_2;
  return FUNC_1(VAR_6->batt_v);
 }

 VAR_6->batt_chrg_i = FUNC_7(&VAR_5->dev,
       "batt_chrg_i");
 if (FUNC_0(VAR_6->batt_chrg_i)) {
  if (FUNC_1(VAR_6->batt_chrg_i) == -VAR_0)
   return -VAR_2;
  return FUNC_1(VAR_6->batt_chrg_i);
 }

 VAR_6->batt_dischrg_i = FUNC_7(&VAR_5->dev,
          "batt_dischrg_i");
 if (FUNC_0(VAR_6->batt_dischrg_i)) {
  if (FUNC_1(VAR_6->batt_dischrg_i) == -VAR_0)
   return -VAR_2;
  return FUNC_1(VAR_6->batt_dischrg_i);
 }

 VAR_6->regmap = FUNC_6(VAR_5->dev.parent, ((void*)0));
 FUNC_12(VAR_5, VAR_6);

 VAR_7.drv_data = VAR_6;
 VAR_7.of_node = VAR_5->dev.of_node;

 VAR_6->data = (struct axp_data *)FUNC_10(VAR_9);

 VAR_6->batt = FUNC_9(&VAR_5->dev,
             &VAR_4,
             &VAR_7);
 if (FUNC_0(VAR_6->batt)) {
  FUNC_5(&VAR_5->dev, "failed to register power supply: %ld\n",
   FUNC_1(VAR_6->batt));
  return FUNC_1(VAR_6->batt);
 }

 if (!FUNC_13(VAR_6->batt, &VAR_8)) {
  int VAR_10 = VAR_8.voltage_min_design_uv;
  int VAR_11 = VAR_8.constant_charge_current_max_ua;

  if (VAR_10 > 0 && FUNC_4(VAR_6,
             VAR_10))
   FUNC_5(&VAR_5->dev,
    "couldn't set voltage_min_design\n");


  VAR_6->max_ccc = VAR_11;

  if (VAR_11 <= 0 || FUNC_3(VAR_6,
           VAR_11)) {
   FUNC_5(&VAR_5->dev,
    "couldn't set constant charge current from DT: fallback to minimum value\n");
   VAR_11 = 300000;
   VAR_6->max_ccc = VAR_11;
   FUNC_3(VAR_6, VAR_11);
  }
 }





 FUNC_2(VAR_6,
        &VAR_6->max_ccc);

 return 0;
}
