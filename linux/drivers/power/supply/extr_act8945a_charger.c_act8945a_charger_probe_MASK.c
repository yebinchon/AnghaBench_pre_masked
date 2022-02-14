
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct power_supply_config {struct act8945a_charger* drv_data; int of_node; } ;
struct TYPE_7__ {int of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct TYPE_8__ {char* name; int type; int num_properties; int properties; int get_property; } ;
struct act8945a_charger {int init_done; int work; int psy; TYPE_3__ desc; int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,struct act8945a_charger*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct act8945a_charger*) ;
 int FUNC_6 (struct act8945a_charger*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (int ,int *) ;
 struct act8945a_charger* FUNC_9 (TYPE_1__*,int,int ) ;
 int FUNC_10 (TYPE_1__*,TYPE_3__*,struct power_supply_config*) ;
 int FUNC_11 (TYPE_1__*,int,int ,int ,char*,struct act8945a_charger*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct platform_device*,struct act8945a_charger*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_10)
{
 struct act8945a_charger *VAR_11;
 struct power_supply_config VAR_12 = {};
 int VAR_13, VAR_14;

 VAR_11 = FUNC_9(&VAR_10->dev, sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->regmap = FUNC_8(VAR_10->dev.parent, ((void*)0));
 if (!VAR_11->regmap) {
  FUNC_7(&VAR_10->dev, "Parent did not provide regmap\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_4(&VAR_10->dev, VAR_11);
 if (VAR_14)
  return VAR_14;

 VAR_13 = FUNC_12(VAR_10->dev.of_node, 0);
 if (VAR_13 <= 0) {
  FUNC_7(&VAR_10->dev, "failed to find IRQ number\n");
  return VAR_13 ?: -VAR_3;
 }

 VAR_14 = FUNC_11(&VAR_10->dev, VAR_13, VAR_8,
          VAR_5, "act8945a_interrupt",
          VAR_11);
 if (VAR_14) {
  FUNC_7(&VAR_10->dev, "failed to request nIRQ pin IRQ\n");
  return VAR_14;
 }

 VAR_11->desc.name = "act8945a-charger";
 VAR_11->desc.get_property = VAR_6;
 VAR_11->desc.properties = VAR_7;
 VAR_11->desc.num_properties = FUNC_0(VAR_7);

 VAR_14 = FUNC_6(VAR_11, &VAR_11->desc.type);
 if (VAR_14)
  return -VAR_0;

 VAR_12.of_node = VAR_10->dev.of_node;
 VAR_12.drv_data = VAR_11;

 VAR_11->psy = FUNC_10(&VAR_10->dev,
        &VAR_11->desc,
        &VAR_12);
 if (FUNC_2(VAR_11->psy)) {
  FUNC_7(&VAR_10->dev, "failed to register power supply\n");
  return FUNC_3(VAR_11->psy);
 }

 FUNC_13(VAR_10, VAR_11);

 FUNC_1(&VAR_11->work, VAR_9);

 VAR_14 = FUNC_5(VAR_11);
 if (VAR_14)
  return -VAR_1;

 VAR_11->init_done = 1;

 return 0;
}
