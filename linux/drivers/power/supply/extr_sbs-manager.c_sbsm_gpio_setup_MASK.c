
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int can_sleep; int base; int owner; struct device* parent; int label; int ngpio; int direction_input; int get; } ;
struct sbsm_data {int last_state; int last_state_cont; struct i2c_client* client; struct gpio_chip chip; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,struct gpio_chip*,struct sbsm_data*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_4(struct sbsm_data *VAR_6)
{
 struct gpio_chip *VAR_7 = &VAR_6->chip;
 struct i2c_client *VAR_8 = VAR_6->client;
 struct device *VAR_9 = &VAR_8->dev;
 int VAR_10;

 if (!FUNC_1(VAR_9, "gpio-controller"))
  return 0;

 VAR_10 = FUNC_3(VAR_8, VAR_0);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_6->last_state = VAR_10;

 VAR_10 = FUNC_3(VAR_8, VAR_1);
 if (VAR_10 < 0)
  return VAR_10;
 VAR_6->last_state_cont = VAR_10;

 VAR_7->get = VAR_5;
 VAR_7->direction_input = VAR_4;
 VAR_7->can_sleep = 1;
 VAR_7->base = -1;
 VAR_7->ngpio = VAR_2;
 VAR_7->label = VAR_8->name;
 VAR_7->parent = VAR_9;
 VAR_7->owner = VAR_3;

 VAR_10 = FUNC_2(VAR_9, VAR_7, VAR_6);
 if (VAR_10) {
  FUNC_0(VAR_9, "devm_gpiochip_add_data failed: %d\n", VAR_10);
  return VAR_10;
 }

 return VAR_10;
}
