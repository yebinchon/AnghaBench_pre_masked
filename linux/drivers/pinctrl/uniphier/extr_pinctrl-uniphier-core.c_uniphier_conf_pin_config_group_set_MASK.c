
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uniphier_pinctrl_priv {TYPE_2__* socdata; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_4__ {TYPE_1__* groups; } ;
struct TYPE_3__ {unsigned int* pins; unsigned int num_pins; } ;


 struct uniphier_pinctrl_priv* FUNC_0 (struct pinctrl_dev*) ;
 int FUNC_1 (struct pinctrl_dev*,unsigned int const,unsigned long*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_0,
           unsigned VAR_1,
           unsigned long *VAR_2,
           unsigned VAR_3)
{
 struct uniphier_pinctrl_priv *VAR_4 = FUNC_0(VAR_0);
 const unsigned *VAR_5 = VAR_4->socdata->groups[VAR_1].pins;
 unsigned VAR_6 = VAR_4->socdata->groups[VAR_1].num_pins;
 int VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_8 = FUNC_1(VAR_0, VAR_5[VAR_7],
         VAR_2, VAR_3);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
