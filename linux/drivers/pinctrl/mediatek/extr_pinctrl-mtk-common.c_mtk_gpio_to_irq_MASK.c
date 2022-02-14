
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_pinctrl {int eint; TYPE_1__* devdata; } ;
struct TYPE_4__ {unsigned long eintnum; } ;
struct mtk_desc_pin {TYPE_2__ eint; } ;
struct gpio_chip {int dummy; } ;
struct TYPE_3__ {struct mtk_desc_pin* pins; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct mtk_pinctrl* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct mtk_pinctrl *VAR_4 = FUNC_0(VAR_2);
 const struct mtk_desc_pin *VAR_5;
 unsigned long VAR_6;

 VAR_5 = VAR_4->devdata->pins + VAR_3;
 if (VAR_5->eint.eintnum == VAR_1)
  return -VAR_0;

 VAR_6 = VAR_5->eint.eintnum;

 return FUNC_1(VAR_4->eint, VAR_6);
}
