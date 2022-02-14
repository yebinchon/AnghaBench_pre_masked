
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct mtk_pinctrl {int eint; TYPE_1__* soc; } ;
struct TYPE_4__ {scalar_t__ eint_n; } ;
struct mtk_pin_desc {TYPE_2__ eint; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_3__ {int * pins; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct mtk_pinctrl* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_2, unsigned int VAR_3)
{
 struct mtk_pinctrl *VAR_4 = FUNC_0(VAR_2);
 const struct mtk_pin_desc *VAR_5;

 if (!VAR_4->eint)
  return -VAR_1;

 VAR_5 = (const struct mtk_pin_desc *)&VAR_4->soc->pins[VAR_3];

 if (VAR_5->eint.eint_n == (u16)VAR_0)
  return -VAR_1;

 return FUNC_1(VAR_4->eint, VAR_5->eint.eint_n);
}
