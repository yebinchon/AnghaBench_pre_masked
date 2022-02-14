
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pinctrl {struct rockchip_pin_ctrl* ctrl; } ;
struct rockchip_pin_ctrl {int nr_banks; struct rockchip_pin_bank* pin_banks; } ;
struct gpio_chip {int label; int of_node; int * parent; int ngpio; int base; } ;
struct rockchip_pin_bank {struct gpio_chip gpio_chip; int valid; int name; int of_node; int nr_pins; int pin_base; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (struct gpio_chip*,struct rockchip_pin_bank*) ;
 int FUNC_3 (struct gpio_chip*) ;
 struct gpio_chip VAR_0 ;
 int FUNC_4 (struct platform_device*,struct rockchip_pinctrl*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1,
      struct rockchip_pinctrl *VAR_2)
{
 struct rockchip_pin_ctrl *VAR_3 = VAR_2->ctrl;
 struct rockchip_pin_bank *VAR_4 = VAR_3->pin_banks;
 struct gpio_chip *VAR_5;
 int VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3->nr_banks; ++VAR_7, ++VAR_4) {
  if (!VAR_4->valid) {
   FUNC_1(&VAR_1->dev, "bank %s is not valid\n",
     VAR_4->name);
   continue;
  }

  VAR_4->gpio_chip = VAR_0;

  VAR_5 = &VAR_4->gpio_chip;
  VAR_5->base = VAR_4->pin_base;
  VAR_5->ngpio = VAR_4->nr_pins;
  VAR_5->parent = &VAR_1->dev;
  VAR_5->of_node = VAR_4->of_node;
  VAR_5->label = VAR_4->name;

  VAR_6 = FUNC_2(VAR_5, VAR_4);
  if (VAR_6) {
   FUNC_0(&VAR_1->dev, "failed to register gpio_chip %s, error code: %d\n",
       VAR_5->label, VAR_6);
   goto fail;
  }
 }

 FUNC_4(VAR_1, VAR_2);

 return 0;

fail:
 for (--VAR_7, --VAR_4; VAR_7 >= 0; --VAR_7, --VAR_4) {
  if (!VAR_4->valid)
   continue;
  FUNC_3(&VAR_4->gpio_chip);
 }
 return VAR_6;
}
