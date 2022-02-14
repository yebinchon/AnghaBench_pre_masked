
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_config {scalar_t__ of_node; struct fixed_voltage_data* driver_data; int init_data; struct device* dev; struct fixed_voltage_config* ena_gpiod; } ;
struct device {scalar_t__ of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_3__ {int n_voltages; scalar_t__ fixed_uV; int * name; void* supply_name; int enable_time; int * ops; int owner; int type; } ;
struct fixed_voltage_data {TYPE_1__ desc; struct fixed_voltage_config* dev; struct fixed_voltage_config* enable_clock; } ;
struct fixed_voltage_config {int init_data; scalar_t__ enabled_at_boot; scalar_t__ microvolts; scalar_t__ input_supply; int startup_delay; scalar_t__ supply_name; } ;
struct fixed_dev_type {scalar_t__ has_enable_clock; } ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct fixed_voltage_config*) ;
 int FUNC_1 (struct fixed_voltage_config*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct device*,char*,int *,scalar_t__) ;
 int FUNC_3 (struct device*,char*,...) ;
 struct fixed_voltage_config* FUNC_4 (struct device*) ;
 struct fixed_voltage_config* FUNC_5 (struct device*,int *) ;
 void* FUNC_6 (struct device*,scalar_t__,int ) ;
 struct fixed_voltage_data* FUNC_7 (struct device*,int,int ) ;
 struct fixed_voltage_config* FUNC_8 (struct device*,TYPE_1__*,struct regulator_config*) ;
 int VAR_8 ;
 int VAR_9 ;
 struct fixed_voltage_config* FUNC_9 (struct device*,int *,int) ;
 struct fixed_dev_type* FUNC_10 (struct device*) ;
 struct fixed_voltage_config* FUNC_11 (struct device*,TYPE_1__*) ;
 int FUNC_12 (struct platform_device*,struct fixed_voltage_data*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct fixed_voltage_config *VAR_12;
 struct fixed_voltage_data *VAR_13;
 const struct fixed_dev_type *VAR_14 = FUNC_10(VAR_11);
 struct regulator_config VAR_15 = { };
 enum gpiod_flags VAR_16;
 int VAR_17;

 VAR_13 = FUNC_7(&VAR_10->dev, sizeof(struct fixed_voltage_data),
          VAR_2);
 if (!VAR_13)
  return -VAR_1;

 if (VAR_10->dev.of_node) {
  VAR_12 = FUNC_11(&VAR_10->dev,
           &VAR_13->desc);
  if (FUNC_0(VAR_12))
   return FUNC_1(VAR_12);
 } else {
  VAR_12 = FUNC_4(&VAR_10->dev);
 }

 if (!VAR_12)
  return -VAR_1;

 VAR_13->desc.name = FUNC_6(&VAR_10->dev,
       VAR_12->supply_name,
       VAR_2);
 if (VAR_13->desc.name == ((void*)0)) {
  FUNC_3(&VAR_10->dev, "Failed to allocate supply name\n");
  return -VAR_1;
 }
 VAR_13->desc.type = VAR_6;
 VAR_13->desc.owner = VAR_7;

 if (VAR_14 && VAR_14->has_enable_clock) {
  VAR_13->desc.ops = &VAR_8;

  VAR_13->enable_clock = FUNC_5(VAR_11, ((void*)0));
  if (FUNC_0(VAR_13->enable_clock)) {
   FUNC_3(VAR_11, "Cant get enable-clock from devicetree\n");
   return -VAR_0;
  }
 } else {
  VAR_13->desc.ops = &VAR_9;
 }

 VAR_13->desc.enable_time = VAR_12->startup_delay;

 if (VAR_12->input_supply) {
  VAR_13->desc.supply_name = FUNC_6(&VAR_10->dev,
         VAR_12->input_supply,
         VAR_2);
  if (!VAR_13->desc.supply_name) {
   FUNC_3(&VAR_10->dev,
    "Failed to allocate input supply\n");
   return -VAR_1;
  }
 }

 if (VAR_12->microvolts)
  VAR_13->desc.n_voltages = 1;

 VAR_13->desc.fixed_uV = VAR_12->microvolts;





 if (VAR_12->enabled_at_boot)
  VAR_16 = VAR_4;
 else
  VAR_16 = VAR_5;
 VAR_16 |= VAR_3;





 VAR_15.ena_gpiod = FUNC_9(&VAR_10->dev, ((void*)0), VAR_16);
 if (FUNC_0(VAR_15.ena_gpiod))
  return FUNC_1(VAR_15.ena_gpiod);

 VAR_15.dev = &VAR_10->dev;
 VAR_15.init_data = VAR_12->init_data;
 VAR_15.driver_data = VAR_13;
 VAR_15.of_node = VAR_10->dev.of_node;

 VAR_13->dev = FUNC_8(&VAR_10->dev, &VAR_13->desc,
            &VAR_15);
 if (FUNC_0(VAR_13->dev)) {
  VAR_17 = FUNC_1(VAR_13->dev);
  FUNC_3(&VAR_10->dev, "Failed to register regulator: %d\n", VAR_17);
  return VAR_17;
 }

 FUNC_12(VAR_10, VAR_13);

 FUNC_2(&VAR_10->dev, "%s supplying %duV\n", VAR_13->desc.name,
  VAR_13->desc.fixed_uV);

 return 0;
}
