
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w1_gpio_platform_data {scalar_t__ pullup_gpiod; int (* enable_external_pullup ) (int) ;scalar_t__ gpiod; } ;
struct w1_bus_master {int set_pullup; int write_bit; int read_bit; struct w1_gpio_platform_data* data; } ;
struct device {struct w1_gpio_platform_data* platform_data; struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
typedef enum gpiod_flags { ____Placeholder_gpiod_flags } gpiod_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct device*,char*) ;
 struct w1_gpio_platform_data* FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct device*,int *,int ,int) ;
 scalar_t__ FUNC_5 (struct device*,int *,int,int) ;
 void* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (scalar_t__,int) ;
 int FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (struct platform_device*,struct w1_bus_master*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (struct w1_bus_master*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_8)
{
 struct w1_bus_master *VAR_9;
 struct w1_gpio_platform_data *VAR_10;
 struct device *VAR_11 = &VAR_8->dev;
 struct device_node *VAR_12 = VAR_11->of_node;

 enum gpiod_flags VAR_13 = VAR_4;
 int VAR_14;

 if (FUNC_10()) {
  VAR_10 = FUNC_6(&VAR_8->dev, sizeof(*VAR_10), VAR_2);
  if (!VAR_10)
   return -VAR_0;







  if (FUNC_9(VAR_12, "linux,open-drain", ((void*)0)))
   VAR_13 = VAR_3;

  VAR_8->dev.platform_data = VAR_10;
 }
 VAR_10 = FUNC_3(VAR_11);

 if (!VAR_10) {
  FUNC_2(VAR_11, "No configuration data\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_6(VAR_11, sizeof(struct w1_bus_master),
   VAR_2);
 if (!VAR_9) {
  FUNC_2(VAR_11, "Out of memory\n");
  return -VAR_0;
 }

 VAR_10->gpiod = FUNC_4(VAR_11, ((void*)0), 0, VAR_13);
 if (FUNC_0(VAR_10->gpiod)) {
  FUNC_2(VAR_11, "gpio_request (pin) failed\n");
  return FUNC_1(VAR_10->gpiod);
 }

 VAR_10->pullup_gpiod =
  FUNC_5(VAR_11, ((void*)0), 1, VAR_3);
 if (FUNC_0(VAR_10->pullup_gpiod)) {
  FUNC_2(VAR_11, "gpio_request_one "
   "(ext_pullup_enable_pin) failed\n");
  return FUNC_1(VAR_10->pullup_gpiod);
 }

 VAR_9->data = VAR_10;
 VAR_9->read_bit = VAR_5;
 FUNC_7(VAR_10->gpiod, 1);
 VAR_9->write_bit = VAR_7;







 if (VAR_13 == VAR_4)
  VAR_9->set_pullup = VAR_6;

 VAR_14 = FUNC_13(VAR_9);
 if (VAR_14) {
  FUNC_2(VAR_11, "w1_add_master device failed\n");
  return VAR_14;
 }

 if (VAR_10->enable_external_pullup)
  VAR_10->enable_external_pullup(1);

 if (VAR_10->pullup_gpiod)
  FUNC_8(VAR_10->pullup_gpiod, 1);

 FUNC_11(VAR_8, VAR_9);

 return 0;
}
