
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct power_supply_desc {int num_properties; scalar_t__ name; int type; int get_property; int properties; } ;
struct power_supply_config {int num_supplicants; int supplied_to; struct gpio_charger* drv_data; TYPE_1__* of_node; } ;
struct device {TYPE_1__* of_node; struct gpio_charger_platform_data* platform_data; } ;
struct platform_device {scalar_t__ name; struct device dev; } ;
struct gpio_desc {int dummy; } ;
struct gpio_charger_platform_data {int num_supplicants; int supplied_to; int type; scalar_t__ name; int gpio; scalar_t__ gpio_active_low; } ;
struct gpio_charger {int charge_status_irq; struct gpio_desc* charge_status; struct gpio_desc* charger; struct gpio_desc* gpiod; void* irq; struct power_supply_desc charger_desc; } ;
struct TYPE_2__ {scalar_t__ name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 scalar_t__ FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int) ;
 int FUNC_6 (struct device*,int ,unsigned long,int ) ;
 struct gpio_desc* FUNC_7 (struct device*,int *,int ) ;
 struct gpio_desc* FUNC_8 (struct device*,char*,int ) ;
 struct gpio_charger* FUNC_9 (struct device*,int,int ) ;
 struct gpio_desc* FUNC_10 (struct device*,struct power_supply_desc*,struct power_supply_config*) ;
 void* FUNC_11 (struct device*,struct gpio_desc*,struct gpio_desc*) ;
 int VAR_8 ;
 int FUNC_12 (struct device*) ;
 int VAR_9 ;
 int FUNC_13 (int ) ;
 struct gpio_desc* FUNC_14 (int ) ;
 int FUNC_15 (struct platform_device*,struct gpio_charger*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 const struct gpio_charger_platform_data *VAR_12 = VAR_11->platform_data;
 struct power_supply_config VAR_13 = {};
 struct gpio_charger *VAR_14;
 struct power_supply_desc *VAR_15;
 struct gpio_desc *VAR_16;
 int VAR_17;
 unsigned long VAR_18;
 int VAR_19;

 if (!VAR_12 && !VAR_11->of_node) {
  FUNC_3(VAR_11, "No platform data\n");
  return -VAR_1;
 }

 VAR_14 = FUNC_9(VAR_11, sizeof(*VAR_14), VAR_4);
 if (!VAR_14)
  return -VAR_2;





 VAR_14->gpiod = FUNC_7(VAR_11, ((void*)0), VAR_5);





 if (FUNC_1(VAR_14->gpiod) && !VAR_11->of_node) {

  if (!FUNC_13(VAR_12->gpio)) {
   FUNC_3(VAR_11, "Invalid gpio pin in pdata\n");
   return -VAR_0;
  }
  VAR_18 = VAR_7;
  if (VAR_12->gpio_active_low)
   VAR_18 |= VAR_6;
  VAR_19 = FUNC_6(VAR_11, VAR_12->gpio, VAR_18,
         FUNC_4(VAR_11));
  if (VAR_19) {
   FUNC_3(VAR_11, "Failed to request gpio pin: %d\n", VAR_19);
   return VAR_19;
  }

  VAR_14->gpiod = FUNC_14(VAR_12->gpio);
 } else if (FUNC_1(VAR_14->gpiod)) {

  if (FUNC_2(VAR_14->gpiod) == -VAR_3)
   return -VAR_3;
  FUNC_3(VAR_11, "error getting GPIO descriptor\n");
  return FUNC_2(VAR_14->gpiod);
 }

 VAR_16 = FUNC_8(VAR_11, "charge-status", VAR_5);
 VAR_14->charge_status = VAR_16;
 if (FUNC_1(VAR_14->charge_status))
  return FUNC_2(VAR_14->charge_status);

 VAR_15 = &VAR_14->charger_desc;
 VAR_15->properties = VAR_9;
 VAR_15->num_properties = FUNC_0(VAR_9);

 if (!VAR_14->charge_status)
  VAR_15->num_properties -= 1;
 VAR_15->get_property = VAR_8;

 VAR_13.of_node = VAR_11->of_node;
 VAR_13.drv_data = VAR_14;

 if (VAR_12) {
  VAR_15->name = VAR_12->name;
  VAR_15->type = VAR_12->type;
  VAR_13.supplied_to = VAR_12->supplied_to;
  VAR_13.num_supplicants = VAR_12->num_supplicants;
 } else {
  VAR_15->name = VAR_11->of_node->name;
  VAR_15->type = FUNC_12(VAR_11);
 }

 if (!VAR_15->name)
  VAR_15->name = VAR_10->name;

 VAR_14->charger = FUNC_10(VAR_11, VAR_15,
          &VAR_13);
 if (FUNC_1(VAR_14->charger)) {
  VAR_19 = FUNC_2(VAR_14->charger);
  FUNC_3(VAR_11, "Failed to register power supply: %d\n", VAR_19);
  return VAR_19;
 }

 VAR_14->irq = FUNC_11(VAR_11, VAR_14->charger,
       VAR_14->gpiod);

 VAR_17 = FUNC_11(VAR_11, VAR_14->charger,
       VAR_14->charge_status);
 VAR_14->charge_status_irq = VAR_17;

 FUNC_15(VAR_10, VAR_14);

 FUNC_5(VAR_11, 1);

 return 0;
}
