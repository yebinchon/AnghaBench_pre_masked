
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_pinctrl_drv_data {int nr_banks; struct samsung_pin_bank* pin_banks; } ;
struct TYPE_2__ {int base; } ;
struct gpio_chip {int label; int of_node; int * parent; int ngpio; int base; } ;
struct samsung_pin_bank {int name; int of_node; int nr_pins; TYPE_1__ grange; struct gpio_chip gpio_chip; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int *,struct gpio_chip*,struct samsung_pin_bank*) ;
 struct gpio_chip VAR_0 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1,
        struct samsung_pinctrl_drv_data *VAR_2)
{
 struct samsung_pin_bank *VAR_3 = VAR_2->pin_banks;
 struct gpio_chip *VAR_4;
 int VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2->nr_banks; ++VAR_6, ++VAR_3) {
  VAR_3->gpio_chip = VAR_0;

  VAR_4 = &VAR_3->gpio_chip;
  VAR_4->base = VAR_3->grange.base;
  VAR_4->ngpio = VAR_3->nr_pins;
  VAR_4->parent = &VAR_1->dev;
  VAR_4->of_node = VAR_3->of_node;
  VAR_4->label = VAR_3->name;

  VAR_5 = FUNC_1(&VAR_1->dev, VAR_4, VAR_3);
  if (VAR_5) {
   FUNC_0(&VAR_1->dev, "failed to register gpio_chip %s, error code: %d\n",
       VAR_4->label, VAR_5);
   return VAR_5;
  }
 }

 return 0;
}
