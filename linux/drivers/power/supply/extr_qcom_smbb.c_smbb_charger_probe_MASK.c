
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int id; char* name; char* supply_name; char* of_match; int type; int owner; int * ops; } ;
struct smbb_charger {int revision; scalar_t__ addr; int regmap; void* jeita_ext_temp; void* otg_reg; TYPE_3__ otg_rdesc; void* dc_psy; void* dc_disabled; void* edev; void* usb_psy; void* bat_psy; int statlock; TYPE_1__* dev; } ;
struct regulator_config {struct smbb_charger* driver_data; TYPE_1__* dev; } ;
struct reg_off_mask_default {int rev_mask; int mask; int value; scalar_t__ offset; int name; int (* handler ) (int,struct smbb_charger*) ;} ;
struct power_supply_config {int num_supplicants; struct reg_off_mask_default* supplied_to; struct smbb_charger* drv_data; int of_node; } ;
struct TYPE_10__ {int of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (struct reg_off_mask_default*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (TYPE_1__*,char*,int) ;
 void* FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,void*) ;
 struct smbb_charger* FUNC_9 (TYPE_1__*,int,int ) ;
 void* FUNC_10 (TYPE_1__*,int *,struct power_supply_config*) ;
 void* FUNC_11 (TYPE_1__*,TYPE_3__*,struct regulator_config*) ;
 int FUNC_12 (TYPE_1__*,int,int *,int (*) (int,struct smbb_charger*),int ,int ,struct smbb_charger*) ;
 int FUNC_13 (int *) ;
 void* FUNC_14 (int ,char*) ;
 int FUNC_15 (int ,char*,scalar_t__*) ;
 int FUNC_16 (struct platform_device*,int ) ;
 int FUNC_17 (struct platform_device*,struct smbb_charger*) ;
 int FUNC_18 (int ,scalar_t__,int*) ;
 int FUNC_19 (int ,scalar_t__,int,int) ;
 struct reg_off_mask_default* VAR_13 ;
 int FUNC_20 (struct smbb_charger*,int) ;
 struct reg_off_mask_default* VAR_14 ;
 struct reg_off_mask_default* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_21 (int,struct smbb_charger*) ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_19)
{
 struct power_supply_config VAR_20 = {};
 struct power_supply_config VAR_21 = {};
 struct power_supply_config VAR_22 = {};
 struct smbb_charger *VAR_23;
 struct regulator_config VAR_24 = { };
 int VAR_25, VAR_26;

 VAR_23 = FUNC_9(&VAR_19->dev, sizeof(*VAR_23), VAR_4);
 if (!VAR_23)
  return -VAR_3;

 VAR_23->dev = &VAR_19->dev;
 FUNC_13(&VAR_23->statlock);

 VAR_23->regmap = FUNC_5(VAR_19->dev.parent, ((void*)0));
 if (!VAR_23->regmap) {
  FUNC_4(&VAR_19->dev, "failed to locate regmap\n");
  return -VAR_2;
 }

 VAR_25 = FUNC_15(VAR_19->dev.of_node, "reg", &VAR_23->addr);
 if (VAR_25) {
  FUNC_4(&VAR_19->dev, "missing or invalid 'reg' property\n");
  return VAR_25;
 }

 VAR_25 = FUNC_18(VAR_23->regmap, VAR_23->addr + VAR_8, &VAR_23->revision);
 if (VAR_25) {
  FUNC_4(&VAR_19->dev, "unable to read revision\n");
  return VAR_25;
 }

 VAR_23->revision += 1;
 if (VAR_23->revision != 2 && VAR_23->revision != 3) {
  FUNC_4(&VAR_19->dev, "v1 hardware not supported\n");
  return -VAR_2;
 }
 FUNC_6(&VAR_19->dev, "Initializing SMBB rev %u", VAR_23->revision);

 VAR_23->dc_disabled = FUNC_14(VAR_19->dev.of_node, "qcom,disable-dc");

 for (VAR_26 = 0; VAR_26 < VAR_10; ++VAR_26) {
  VAR_25 = FUNC_20(VAR_23, VAR_26);
  if (VAR_25) {
   FUNC_4(&VAR_19->dev, "failed to parse/apply settings\n");
   return VAR_25;
  }
 }

 VAR_20.drv_data = VAR_23;
 VAR_20.of_node = VAR_19->dev.of_node;
 VAR_23->bat_psy = FUNC_10(&VAR_19->dev,
        &VAR_11,
        &VAR_20);
 if (FUNC_2(VAR_23->bat_psy)) {
  FUNC_4(&VAR_19->dev, "failed to register battery\n");
  return FUNC_3(VAR_23->bat_psy);
 }

 VAR_21.drv_data = VAR_23;
 VAR_21.supplied_to = VAR_13;
 VAR_21.num_supplicants = FUNC_0(VAR_13);
 VAR_23->usb_psy = FUNC_10(&VAR_19->dev,
        &VAR_18,
        &VAR_21);
 if (FUNC_2(VAR_23->usb_psy)) {
  FUNC_4(&VAR_19->dev, "failed to register USB power supply\n");
  return FUNC_3(VAR_23->usb_psy);
 }

 VAR_23->edev = FUNC_7(&VAR_19->dev, VAR_17);
 if (FUNC_2(VAR_23->edev)) {
  FUNC_4(&VAR_19->dev, "failed to allocate extcon device\n");
  return -VAR_3;
 }

 VAR_25 = FUNC_8(&VAR_19->dev, VAR_23->edev);
 if (VAR_25 < 0) {
  FUNC_4(&VAR_19->dev, "failed to register extcon device\n");
  return VAR_25;
 }

 if (!VAR_23->dc_disabled) {
  VAR_22.drv_data = VAR_23;
  VAR_22.supplied_to = VAR_13;
  VAR_22.num_supplicants = FUNC_0(VAR_13);
  VAR_23->dc_psy = FUNC_10(&VAR_19->dev,
        &VAR_12,
        &VAR_22);
  if (FUNC_2(VAR_23->dc_psy)) {
   FUNC_4(&VAR_19->dev, "failed to register DC power supply\n");
   return FUNC_3(VAR_23->dc_psy);
  }
 }

 for (VAR_26 = 0; VAR_26 < FUNC_0(VAR_14); ++VAR_26) {
  int VAR_27;

  VAR_27 = FUNC_16(VAR_19, VAR_14[VAR_26].name);
  if (VAR_27 < 0) {
   FUNC_4(&VAR_19->dev, "failed to get irq '%s'\n",
    VAR_14[VAR_26].name);
   return VAR_27;
  }

  VAR_14[VAR_26].handler(VAR_27, VAR_23);

  VAR_25 = FUNC_12(&VAR_19->dev, VAR_27, ((void*)0),
    VAR_14[VAR_26].handler, VAR_5,
    VAR_14[VAR_26].name, VAR_23);
  if (VAR_25) {
   FUNC_4(&VAR_19->dev, "failed to request irq '%s'\n",
    VAR_14[VAR_26].name);
   return VAR_25;
  }
 }





 VAR_23->otg_rdesc.id = -1;
 VAR_23->otg_rdesc.name = "otg-vbus";
 VAR_23->otg_rdesc.ops = &VAR_16;
 VAR_23->otg_rdesc.owner = VAR_9;
 VAR_23->otg_rdesc.type = VAR_6;
 VAR_23->otg_rdesc.supply_name = "usb-otg-in";
 VAR_23->otg_rdesc.of_match = "otg-vbus";

 VAR_24.dev = &VAR_19->dev;
 VAR_24.driver_data = VAR_23;

 VAR_23->otg_reg = FUNC_11(&VAR_19->dev, &VAR_23->otg_rdesc,
            &VAR_24);
 if (FUNC_2(VAR_23->otg_reg))
  return FUNC_3(VAR_23->otg_reg);

 VAR_23->jeita_ext_temp = FUNC_14(VAR_19->dev.of_node,
   "qcom,jeita-extended-temp-range");


 VAR_25 = FUNC_19(VAR_23->regmap, VAR_23->addr + VAR_7,
   VAR_0 | VAR_1,
   VAR_23->jeita_ext_temp ?
    VAR_0 :
    VAR_1);
 if (VAR_25) {
  FUNC_4(&VAR_19->dev,
   "unable to set %s temperature range\n",
   VAR_23->jeita_ext_temp ? "JEITA extended" : "normal");
  return VAR_25;
 }

 for (VAR_26 = 0; VAR_26 < FUNC_0(VAR_15); ++VAR_26) {
  const struct reg_off_mask_default *VAR_28 = &VAR_15[VAR_26];

  if (VAR_28->rev_mask & FUNC_1(VAR_23->revision))
   continue;

  VAR_25 = FUNC_19(VAR_23->regmap, VAR_23->addr + VAR_28->offset,
    VAR_28->mask, VAR_28->value);
  if (VAR_25) {
   FUNC_4(&VAR_19->dev,
    "unable to initializing charging, bailing\n");
   return VAR_25;
  }
 }

 FUNC_17(VAR_19, VAR_23);

 return 0;
}
