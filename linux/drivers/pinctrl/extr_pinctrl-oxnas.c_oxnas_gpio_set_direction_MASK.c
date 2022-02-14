
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_gpio_range {struct gpio_chip* gc; } ;
struct pinctrl_dev {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (struct gpio_chip*,unsigned int) ;
 int FUNC_1 (struct gpio_chip*,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0,
        struct pinctrl_gpio_range *VAR_1,
        unsigned int VAR_2, bool VAR_3)
{
 struct gpio_chip *VAR_4 = VAR_1->gc;

 if (VAR_3)
  FUNC_0(VAR_4, VAR_2);
 else
  FUNC_1(VAR_4, VAR_2, 0);

 return 0;
}
