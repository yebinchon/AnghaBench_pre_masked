
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_pinctrl {struct gpio_chip* chip; } ;
struct TYPE_2__ {unsigned int number; } ;
struct mtk_desc_pin {TYPE_1__ pin; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct mtk_desc_pin* FUNC_0 (struct mtk_pinctrl*,unsigned long) ;

__attribute__((used)) static int
FUNC_1(void *VAR_1, unsigned long VAR_2, unsigned int *VAR_3,
    struct gpio_chip **VAR_4)
{
 struct mtk_pinctrl *VAR_5 = (struct mtk_pinctrl *)VAR_1;
 const struct mtk_desc_pin *VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_2);
 if (!VAR_6)
  return -VAR_0;

 *VAR_4 = VAR_5->chip;
 *VAR_3 = VAR_6->pin.number;

 return 0;
}
