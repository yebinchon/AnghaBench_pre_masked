
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_chip {int dummy; } ;
struct mtk_pinctrl {struct gpio_chip chip; TYPE_1__* soc; } ;
struct TYPE_4__ {unsigned long eint_n; } ;
struct mtk_pin_desc {TYPE_2__ eint; } ;
struct TYPE_3__ {scalar_t__ pins; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct mtk_pinctrl*,unsigned long) ;

__attribute__((used)) static int FUNC_1(void *VAR_2, unsigned long VAR_3,
        unsigned int *VAR_4,
        struct gpio_chip **VAR_5)
{
 struct mtk_pinctrl *VAR_6 = (struct mtk_pinctrl *)VAR_2;
 const struct mtk_pin_desc *VAR_7;

 VAR_7 = (const struct mtk_pin_desc *)VAR_6->soc->pins;
 *VAR_5 = &VAR_6->chip;


 if (VAR_7[VAR_3].eint.eint_n == VAR_3)
  *VAR_4 = VAR_3;
 else
  *VAR_4 = FUNC_0(VAR_6, VAR_3);

 return *VAR_4 == VAR_0 ? -VAR_1 : 0;
}
