
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct power_supply_desc {int dummy; } ;
struct power_supply_config {struct axp20x_usb_power* drv_data; int of_node; } ;
struct TYPE_7__ {int of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct axp20x_usb_power {int axp20x_id; int vbus_detect; int supply; int regmap; int np; } ;
struct axp20x_dev {int regmap_irqc; int variant; int regmap; } ;
typedef enum axp20x_variants { ____Placeholder_axp20x_variants } axp20x_variants ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct power_supply_desc VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_4 (struct axp20x_usb_power*) ;
 struct power_supply_desc VAR_15 ;
 int FUNC_5 (struct axp20x_usb_power*) ;
 int FUNC_6 (struct platform_device*,struct axp20x_usb_power*) ;
 int FUNC_7 (TYPE_1__*,char*,...) ;
 struct axp20x_dev* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,char*,char const* const,int) ;
 struct axp20x_usb_power* FUNC_10 (TYPE_1__*,int,int ) ;
 int FUNC_11 (TYPE_1__*,struct power_supply_desc const*,struct power_supply_config*) ;
 int FUNC_12 (TYPE_1__*,int,int ,int ,int ,struct axp20x_usb_power*) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct platform_device*,char const* const) ;
 int FUNC_16 (struct platform_device*,struct axp20x_usb_power*) ;
 int FUNC_17 (int ,int *,int ) ;
 int FUNC_18 (int ,int) ;
 int FUNC_19 (int ,int ,int ,int ) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_17)
{
 struct axp20x_dev *VAR_18 = FUNC_8(VAR_17->dev.parent);
 struct power_supply_config VAR_19 = {};
 struct axp20x_usb_power *VAR_20;
 static const char * const VAR_21[] = { "VBUS_PLUGIN",
  "VBUS_REMOVAL", "VBUS_VALID", "VBUS_NOT_VALID", ((void*)0) };
 static const char * const VAR_22[] = {
  "VBUS_PLUGIN", "VBUS_REMOVAL", ((void*)0) };
 const char * const *VAR_23;
 const struct power_supply_desc *VAR_24;
 int VAR_25, VAR_26, VAR_27;

 if (!FUNC_14(VAR_17->dev.of_node))
  return -VAR_9;

 if (!VAR_18) {
  FUNC_7(&VAR_17->dev, "Parent drvdata not set\n");
  return -VAR_8;
 }

 VAR_20 = FUNC_10(&VAR_17->dev, sizeof(*VAR_20), VAR_11);
 if (!VAR_20)
  return -VAR_10;

 FUNC_16(VAR_17, VAR_20);
 VAR_20->axp20x_id = (enum axp20x_variants)FUNC_13(
        &VAR_17->dev);

 VAR_20->np = VAR_17->dev.of_node;
 VAR_20->regmap = VAR_18->regmap;

 if (VAR_20->axp20x_id == VAR_0) {

  VAR_27 = FUNC_19(VAR_20->regmap, VAR_1,
      VAR_2,
      VAR_2);
  if (VAR_27)
   return VAR_27;

  if (FUNC_1(VAR_6))
   VAR_27 = FUNC_6(VAR_17, VAR_20);
  else
   VAR_27 = FUNC_5(VAR_20);

  if (VAR_27)
   return VAR_27;

  VAR_24 = &VAR_12;
  VAR_23 = VAR_21;
 } else if (VAR_20->axp20x_id == VAR_3 ||
     VAR_20->axp20x_id == VAR_4 ||
     VAR_20->axp20x_id == VAR_5) {
  VAR_24 = &VAR_15;
  VAR_23 = VAR_22;
 } else {
  FUNC_7(&VAR_17->dev, "Unsupported AXP variant: %ld\n",
   VAR_18->variant);
  return -VAR_8;
 }

 VAR_19.of_node = VAR_17->dev.of_node;
 VAR_19.drv_data = VAR_20;

 VAR_20->supply = FUNC_11(&VAR_17->dev, VAR_24,
         &VAR_19);
 if (FUNC_2(VAR_20->supply))
  return FUNC_3(VAR_20->supply);


 for (VAR_25 = 0; VAR_23[VAR_25]; VAR_25++) {
  VAR_26 = FUNC_15(VAR_17, VAR_23[VAR_25]);
  if (VAR_26 < 0) {
   FUNC_9(&VAR_17->dev, "No IRQ for %s: %d\n",
     VAR_23[VAR_25], VAR_26);
   continue;
  }
  VAR_26 = FUNC_18(VAR_18->regmap_irqc, VAR_26);
  VAR_27 = FUNC_12(&VAR_17->dev, VAR_26,
    VAR_13, 0, VAR_7, VAR_20);
  if (VAR_27 < 0)
   FUNC_9(&VAR_17->dev, "Error requesting %s IRQ: %d\n",
     VAR_23[VAR_25], VAR_27);
 }

 FUNC_0(&VAR_20->vbus_detect, VAR_14);
 if (FUNC_4(VAR_20))
  FUNC_17(VAR_16, &VAR_20->vbus_detect, 0);

 return 0;
}
