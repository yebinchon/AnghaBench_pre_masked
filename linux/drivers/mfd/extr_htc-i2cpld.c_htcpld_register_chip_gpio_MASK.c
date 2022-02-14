
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct htcpld_data {struct htcpld_chip* chip; } ;
struct htcpld_core_platform_data {struct htcpld_chip_platform_data* chip; } ;
struct htcpld_chip_platform_data {int addr; int num_gpios; int gpio_in_base; int gpio_out_base; } ;
struct gpio_chip {char* label; int ngpio; int base; int to_irq; int * direction_output; int * direction_input; int * set; void* get; void* owner; struct device* parent; } ;
struct htcpld_chip {struct gpio_chip chip_out; struct gpio_chip chip_in; } ;


 void* VAR_0 ;
 struct htcpld_core_platform_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int ,int) ;
 int FUNC_2 (struct gpio_chip*,struct htcpld_chip*) ;
 int FUNC_3 (struct gpio_chip*) ;
 void* VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 struct htcpld_data* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(
  struct platform_device *VAR_6,
  int VAR_7)
{
 struct htcpld_data *VAR_8;
 struct device *VAR_9 = &VAR_6->dev;
 struct htcpld_core_platform_data *VAR_10;
 struct htcpld_chip *VAR_11;
 struct htcpld_chip_platform_data *VAR_12;
 struct gpio_chip *VAR_13;
 int VAR_14 = 0;


 VAR_10 = FUNC_0(VAR_9);
 VAR_8 = FUNC_4(VAR_6);
 VAR_11 = &VAR_8->chip[VAR_7];
 VAR_12 = &VAR_10->chip[VAR_7];


 VAR_13 = &(VAR_11->chip_out);
 VAR_13->label = "htcpld-out";
 VAR_13->parent = VAR_9;
 VAR_13->owner = VAR_0;
 VAR_13->get = VAR_1;
 VAR_13->set = VAR_2;
 VAR_13->direction_input = ((void*)0);
 VAR_13->direction_output = VAR_5;
 VAR_13->base = VAR_12->gpio_out_base;
 VAR_13->ngpio = VAR_12->num_gpios;

 VAR_13 = &(VAR_11->chip_in);
 VAR_13->label = "htcpld-in";
 VAR_13->parent = VAR_9;
 VAR_13->owner = VAR_0;
 VAR_13->get = VAR_1;
 VAR_13->set = ((void*)0);
 VAR_13->direction_input = VAR_4;
 VAR_13->direction_output = ((void*)0);
 VAR_13->to_irq = VAR_3;
 VAR_13->base = VAR_12->gpio_in_base;
 VAR_13->ngpio = VAR_12->num_gpios;


 VAR_14 = FUNC_2(&(VAR_11->chip_out), VAR_11);
 if (VAR_14) {
  FUNC_1(VAR_9, "Unable to register output GPIOs for 0x%x: %d\n",
    VAR_12->addr, VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_2(&(VAR_11->chip_in), VAR_11);
 if (VAR_14) {
  FUNC_1(VAR_9, "Unable to register input GPIOs for 0x%x: %d\n",
    VAR_12->addr, VAR_14);
  FUNC_3(&(VAR_11->chip_out));
  return VAR_14;
 }

 return 0;
}
