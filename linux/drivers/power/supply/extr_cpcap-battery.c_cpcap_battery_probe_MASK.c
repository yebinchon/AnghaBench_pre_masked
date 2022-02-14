
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct power_supply_desc {char* name; int get_property; int num_properties; int properties; int type; } ;
struct power_supply_config {struct cpcap_battery_ddata* drv_data; int of_node; } ;
struct TYPE_7__ {int of_node; int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {int data; } ;
struct TYPE_8__ {int ccm; } ;
struct cpcap_battery_ddata {int active; TYPE_1__* dev; int psy; TYPE_2__ config; int reg; int vendor; int irq_list; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct cpcap_battery_ddata*) ;
 int FUNC_5 (struct platform_device*,struct cpcap_battery_ddata*) ;
 int VAR_8 ;
 int FUNC_6 (TYPE_1__*,int ,int *) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (int ,int *) ;
 void* FUNC_9 (TYPE_1__*,int,int ) ;
 int FUNC_10 (TYPE_1__*,struct power_supply_desc*,struct power_supply_config*) ;
 int FUNC_11 (TYPE_2__*,int ,int) ;
 struct of_device_id* FUNC_12 (int ,TYPE_1__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct platform_device*,struct cpcap_battery_ddata*) ;
 int FUNC_15 (int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_9)
{
 struct power_supply_desc *VAR_10;
 struct cpcap_battery_ddata *VAR_11;
 const struct of_device_id *VAR_12;
 struct power_supply_config VAR_13 = {};
 int VAR_14;

 VAR_12 = FUNC_12(FUNC_13(VAR_7),
    &VAR_9->dev);
 if (!VAR_12)
  return -VAR_1;

 if (!VAR_12->data) {
  FUNC_7(&VAR_9->dev, "no configuration data found\n");

  return -VAR_2;
 }

 VAR_11 = FUNC_9(&VAR_9->dev, sizeof(*VAR_11), VAR_4);
 if (!VAR_11)
  return -VAR_3;

 FUNC_1(&VAR_11->irq_list);
 VAR_11->dev = &VAR_9->dev;
 FUNC_11(&VAR_11->config, VAR_12->data, sizeof(VAR_11->config));

 VAR_11->reg = FUNC_8(VAR_11->dev->parent, ((void*)0));
 if (!VAR_11->reg)
  return -VAR_2;

 VAR_14 = FUNC_6(VAR_11->dev, VAR_11->reg, &VAR_11->vendor);
 if (VAR_14)
  return VAR_14;

 FUNC_14(VAR_9, VAR_11);

 VAR_14 = FUNC_15(VAR_11->reg, VAR_0,
       0xffff, VAR_11->config.ccm);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_5(VAR_9, VAR_11);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_4(VAR_11);
 if (VAR_14)
  return VAR_14;

 VAR_10 = FUNC_9(VAR_11->dev, sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_3;

 VAR_10->name = "battery",
 VAR_10->type = VAR_5,
 VAR_10->properties = VAR_8,
 VAR_10->num_properties = FUNC_0(VAR_8),
 VAR_10->get_property = VAR_6,

 VAR_13.of_node = VAR_9->dev.of_node;
 VAR_13.drv_data = VAR_11;

 VAR_11->psy = FUNC_10(VAR_11->dev, VAR_10,
      &VAR_13);
 VAR_14 = FUNC_2(VAR_11->psy);
 if (VAR_14) {
  FUNC_7(VAR_11->dev, "failed to register power supply\n");
  return VAR_14;
 }

 FUNC_3(&VAR_11->active, 1);

 return 0;
}
