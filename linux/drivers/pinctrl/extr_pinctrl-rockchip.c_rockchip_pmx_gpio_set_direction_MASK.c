
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rockchip_pinctrl {int dev; } ;
struct pinctrl_gpio_range {int name; struct gpio_chip* gc; } ;
struct pinctrl_dev {int dummy; } ;
struct gpio_chip {unsigned int base; } ;


 int FUNC_0 (struct gpio_chip*,unsigned int,int) ;
 int FUNC_1 (int ,char*,unsigned int,int ,int,char*) ;
 struct rockchip_pinctrl* FUNC_2 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_0,
           struct pinctrl_gpio_range *VAR_1,
           unsigned VAR_2, bool VAR_3)
{
 struct rockchip_pinctrl *VAR_4 = FUNC_2(VAR_0);
 struct gpio_chip *VAR_5;
 int VAR_6;

 VAR_5 = VAR_1->gc;
 VAR_6 = VAR_2 - VAR_5->base;
 FUNC_1(VAR_4->dev, "gpio_direction for pin %u as %s-%d to %s\n",
   VAR_2, VAR_1->name, VAR_6, VAR_3 ? "input" : "output");

 return FUNC_0(VAR_5, VAR_2 - VAR_5->base,
      VAR_3);
}
