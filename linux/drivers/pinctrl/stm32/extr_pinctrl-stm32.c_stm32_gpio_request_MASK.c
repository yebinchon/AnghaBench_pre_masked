
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_pinctrl {int dev; int pctl_dev; } ;
struct TYPE_2__ {int parent; } ;
struct stm32_gpio_bank {unsigned int bank_nr; TYPE_1__ gpio_chip; } ;
struct pinctrl_gpio_range {int dummy; } ;
struct gpio_chip {scalar_t__ base; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 struct stm32_pinctrl* FUNC_1 (int ) ;
 struct stm32_gpio_bank* FUNC_2 (struct gpio_chip*) ;
 struct pinctrl_gpio_range* FUNC_3 (int ,int) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct stm32_gpio_bank *VAR_4 = FUNC_2(VAR_2);
 struct stm32_pinctrl *VAR_5 = FUNC_1(VAR_4->gpio_chip.parent);
 struct pinctrl_gpio_range *VAR_6;
 int VAR_7 = VAR_3 + (VAR_4->bank_nr * VAR_1);

 VAR_6 = FUNC_3(VAR_5->pctl_dev, VAR_7);
 if (!VAR_6) {
  FUNC_0(VAR_5->dev, "pin %d not in range.\n", VAR_7);
  return -VAR_0;
 }

 return FUNC_4(VAR_2->base + VAR_3);
}
