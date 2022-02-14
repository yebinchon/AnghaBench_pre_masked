
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct power_supply_desc {int get_property; int num_properties; int properties; int type; int name; } ;
struct power_supply_config {struct lt3651_charger* drv_data; TYPE_1__* of_node; } ;
struct TYPE_11__ {TYPE_1__* of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct lt3651_charger {void* charger; void* chrg_gpio; void* fault_gpio; void* acpr_gpio; struct power_supply_desc charger_desc; } ;
struct TYPE_10__ {int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_5 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,char*) ;
 void* FUNC_6 (TYPE_2__*,char*,int ) ;
 void* FUNC_7 (TYPE_2__*,char*,int ) ;
 struct lt3651_charger* FUNC_8 (TYPE_2__*,int,int ) ;
 void* FUNC_9 (TYPE_2__*,struct power_supply_desc*,struct power_supply_config*) ;
 int FUNC_10 (TYPE_2__*,int,int ,int,int ,void*) ;
 int FUNC_11 (void*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (struct platform_device*,struct lt3651_charger*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_9)
{
 struct power_supply_config VAR_10 = {};
 struct lt3651_charger *VAR_11;
 struct power_supply_desc *VAR_12;
 int VAR_13;

 VAR_11 = FUNC_8(&VAR_9->dev, sizeof(*VAR_11),
     VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->acpr_gpio = FUNC_6(&VAR_9->dev,
     "lltc,acpr", VAR_2);
 if (FUNC_1(VAR_11->acpr_gpio)) {
  VAR_13 = FUNC_2(VAR_11->acpr_gpio);
  FUNC_3(&VAR_9->dev, "Failed to acquire acpr GPIO: %d\n", VAR_13);
  return VAR_13;
 }
 VAR_11->fault_gpio = FUNC_7(&VAR_9->dev,
     "lltc,fault", VAR_2);
 if (FUNC_1(VAR_11->fault_gpio)) {
  VAR_13 = FUNC_2(VAR_11->fault_gpio);
  FUNC_3(&VAR_9->dev, "Failed to acquire fault GPIO: %d\n", VAR_13);
  return VAR_13;
 }
 VAR_11->chrg_gpio = FUNC_7(&VAR_9->dev,
     "lltc,chrg", VAR_2);
 if (FUNC_1(VAR_11->chrg_gpio)) {
  VAR_13 = FUNC_2(VAR_11->chrg_gpio);
  FUNC_3(&VAR_9->dev, "Failed to acquire chrg GPIO: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_12 = &VAR_11->charger_desc;
 VAR_12->name = VAR_9->dev.of_node->name;
 VAR_12->type = VAR_5;
 VAR_12->properties = VAR_8;
 VAR_12->num_properties = FUNC_0(VAR_8);
 VAR_12->get_property = VAR_6;
 VAR_10.of_node = VAR_9->dev.of_node;
 VAR_10.drv_data = VAR_11;

 VAR_11->charger = FUNC_9(&VAR_9->dev,
            VAR_12, &VAR_10);
 if (FUNC_1(VAR_11->charger)) {
  VAR_13 = FUNC_2(VAR_11->charger);
  FUNC_3(&VAR_9->dev, "Failed to register power supply: %d\n",
   VAR_13);
  return VAR_13;
 }






 if (VAR_11->acpr_gpio) {
  VAR_13 = FUNC_11(VAR_11->acpr_gpio);
  if (VAR_13 >= 0)
   VAR_13 = FUNC_10(&VAR_9->dev, VAR_13,
    VAR_7,
    VAR_4 | VAR_3,
    FUNC_4(&VAR_9->dev), VAR_11->charger);
  if (VAR_13 < 0)
   FUNC_5(&VAR_9->dev, "Failed to request acpr irq\n");
 }
 if (VAR_11->fault_gpio) {
  VAR_13 = FUNC_11(VAR_11->fault_gpio);
  if (VAR_13 >= 0)
   VAR_13 = FUNC_10(&VAR_9->dev, VAR_13,
    VAR_7,
    VAR_4 | VAR_3,
    FUNC_4(&VAR_9->dev), VAR_11->charger);
  if (VAR_13 < 0)
   FUNC_5(&VAR_9->dev, "Failed to request fault irq\n");
 }
 if (VAR_11->chrg_gpio) {
  VAR_13 = FUNC_11(VAR_11->chrg_gpio);
  if (VAR_13 >= 0)
   VAR_13 = FUNC_10(&VAR_9->dev, VAR_13,
    VAR_7,
    VAR_4 | VAR_3,
    FUNC_4(&VAR_9->dev), VAR_11->charger);
  if (VAR_13 < 0)
   FUNC_5(&VAR_9->dev, "Failed to request chrg irq\n");
 }

 FUNC_12(VAR_9, VAR_11);

 return 0;
}
