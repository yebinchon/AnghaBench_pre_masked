
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {int name; struct gpio_chip* gc; } ;
struct pinctrl_dev {int dummy; } ;
struct gpio_chip {int dummy; } ;
struct armada_37xx_pinctrl {int dev; } ;


 int FUNC_0 (struct gpio_chip*,unsigned int) ;
 int FUNC_1 (struct gpio_chip*,unsigned int,int ) ;
 int FUNC_2 (int ,char*,unsigned int,int ,unsigned int,char*) ;
 struct armada_37xx_pinctrl* FUNC_3 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_0,
           struct pinctrl_gpio_range *VAR_1,
           unsigned int VAR_2, bool VAR_3)
{
 struct armada_37xx_pinctrl *VAR_4 = FUNC_3(VAR_0);
 struct gpio_chip *VAR_5 = VAR_1->gc;

 FUNC_2(VAR_4->dev, "gpio_direction for pin %u as %s-%d to %s\n",
  VAR_2, VAR_1->name, VAR_2, VAR_3 ? "input" : "output");

 if (VAR_3)
  FUNC_0(VAR_5, VAR_2);
 else
  FUNC_1(VAR_5, VAR_2, 0);

 return 0;
}
