
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regulator_dev {int ngpios; int* gflags; int nr_states; int type; scalar_t__ enabled_at_boot; int init_data; int startup_delay; int states; int supply_name; } ;
struct regulator_config {struct regulator_dev* ena_gpiod; struct device_node* of_node; struct gpio_regulator_data* driver_data; int init_data; struct device* dev; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct gpio_regulator_state {int dummy; } ;
struct TYPE_3__ {int type; int n_voltages; int * ops; int enable_time; int owner; int * name; } ;
struct gpio_regulator_data {int nr_gpios; int nr_states; int state; TYPE_1__ desc; int * states; struct regulator_dev** gpiods; } ;
struct gpio_regulator_config {int ngpios; int* gflags; int nr_states; int type; scalar_t__ enabled_at_boot; int init_data; int startup_delay; int states; int supply_name; } ;
struct gpio_desc {int dummy; } ;
struct device_node {int dummy; } ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;


 int VAR_6 ;
 int FUNC_2 (struct device*,char*,...) ;
 struct regulator_dev* FUNC_3 (struct device*) ;
 struct regulator_dev* FUNC_4 (struct device*,int *,int,int) ;
 int * FUNC_5 (struct device*,int ,int,int ) ;
 int * FUNC_6 (struct device*,int ,int ) ;
 void* FUNC_7 (struct device*,int,int ) ;
 struct regulator_dev* FUNC_8 (struct device*,TYPE_1__*,struct regulator_config*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct regulator_dev* FUNC_9 (struct device*,char*,int) ;
 int FUNC_10 (struct regulator_dev*,int *) ;
 struct regulator_dev* FUNC_11 (struct device*,struct device_node*,TYPE_1__*) ;
 int FUNC_12 (struct platform_device*,struct gpio_regulator_data*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct gpio_regulator_config *VAR_11 = FUNC_3(VAR_10);
 struct device_node *VAR_12 = VAR_10->of_node;
 struct gpio_regulator_data *VAR_13;
 struct regulator_config VAR_14 = { };
 struct regulator_dev *VAR_15;
 enum gpiod_flags VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20;

 VAR_13 = FUNC_7(VAR_10, sizeof(struct gpio_regulator_data),
          VAR_2);
 if (VAR_13 == ((void*)0))
  return -VAR_1;

 if (VAR_12) {
  VAR_11 = FUNC_11(VAR_10, VAR_12,
            &VAR_13->desc);
  if (FUNC_0(VAR_11))
   return FUNC_1(VAR_11);
 }

 VAR_13->desc.name = FUNC_6(VAR_10, VAR_11->supply_name, VAR_2);
 if (VAR_13->desc.name == ((void*)0)) {
  FUNC_2(VAR_10, "Failed to allocate supply name\n");
  return -VAR_1;
 }

 VAR_13->gpiods = FUNC_7(VAR_10, sizeof(struct gpio_desc *),
           VAR_2);
 if (!VAR_13->gpiods)
  return -VAR_1;
 for (VAR_20 = 0; VAR_20 < VAR_11->ngpios; VAR_20++) {
  VAR_13->gpiods[VAR_20] = FUNC_4(VAR_10,
         ((void*)0),
         VAR_20,
         VAR_11->gflags[VAR_20]);
  if (FUNC_0(VAR_13->gpiods[VAR_20]))
   return FUNC_1(VAR_13->gpiods[VAR_20]);

  FUNC_10(VAR_13->gpiods[VAR_20], VAR_13->desc.name);
 }
 VAR_13->nr_gpios = VAR_11->ngpios;

 VAR_13->states = FUNC_5(VAR_10,
           VAR_11->states,
           VAR_11->nr_states *
           sizeof(struct gpio_regulator_state),
           VAR_2);
 if (VAR_13->states == ((void*)0)) {
  FUNC_2(VAR_10, "Failed to allocate state data\n");
  return -VAR_1;
 }
 VAR_13->nr_states = VAR_11->nr_states;

 VAR_13->desc.owner = VAR_6;
 VAR_13->desc.enable_time = VAR_11->startup_delay;


 switch (VAR_11->type) {
 case 128:
  VAR_13->desc.type = 128;
  VAR_13->desc.ops = &VAR_8;
  VAR_13->desc.n_voltages = VAR_11->nr_states;
  break;
 case 129:
  VAR_13->desc.type = 129;
  VAR_13->desc.ops = &VAR_7;
  break;
 default:
  FUNC_2(VAR_10, "No regulator type set\n");
  return -VAR_0;
 }


 VAR_19 = 0;
 for (VAR_17 = 0; VAR_17 < VAR_13->nr_gpios; VAR_17++) {
  if (VAR_11->gflags[VAR_17] == VAR_4)
   VAR_19 |= (1 << VAR_17);
 }
 VAR_13->state = VAR_19;

 VAR_14.dev = VAR_10;
 VAR_14.init_data = VAR_11->init_data;
 VAR_14.driver_data = VAR_13;
 VAR_14.of_node = VAR_12;





 if (VAR_11->enabled_at_boot)
  VAR_16 = VAR_4 | VAR_3;
 else
  VAR_16 = VAR_5 | VAR_3;

 VAR_14.ena_gpiod = FUNC_9(VAR_10, "enable", VAR_16);
 if (FUNC_0(VAR_14.ena_gpiod))
  return FUNC_1(VAR_14.ena_gpiod);

 VAR_15 = FUNC_8(VAR_10, &VAR_13->desc, &VAR_14);
 if (FUNC_0(VAR_15)) {
  VAR_18 = FUNC_1(VAR_15);
  FUNC_2(VAR_10, "Failed to register regulator: %d\n", VAR_18);
  return VAR_18;
 }

 FUNC_12(VAR_9, VAR_13);

 return 0;
}
