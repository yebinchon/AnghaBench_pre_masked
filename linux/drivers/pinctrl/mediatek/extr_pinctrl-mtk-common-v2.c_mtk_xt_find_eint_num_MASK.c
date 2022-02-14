
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_pinctrl {TYPE_1__* soc; } ;
struct TYPE_4__ {unsigned long eint_n; } ;
struct mtk_pin_desc {int number; TYPE_2__ eint; } ;
struct TYPE_3__ {int npins; scalar_t__ pins; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mtk_pinctrl *VAR_1, unsigned long VAR_2)
{
 const struct mtk_pin_desc *VAR_3;
 int VAR_4 = 0;

 VAR_3 = (const struct mtk_pin_desc *)VAR_1->soc->pins;

 while (VAR_4 < VAR_1->soc->npins) {
  if (VAR_3[VAR_4].eint.eint_n == VAR_2)
   return VAR_3[VAR_4].number;
  VAR_4++;
 }

 return VAR_0;
}
