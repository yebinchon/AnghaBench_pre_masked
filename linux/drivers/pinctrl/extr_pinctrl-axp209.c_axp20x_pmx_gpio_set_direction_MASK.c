
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct axp20x_pctl {TYPE_1__* funcs; } ;
struct TYPE_2__ {int muxval; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct pinctrl_dev*,unsigned int,int ) ;
 struct axp20x_pctl* FUNC_1 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_2,
      struct pinctrl_gpio_range *VAR_3,
      unsigned int VAR_4, bool VAR_5)
{
 struct axp20x_pctl *VAR_6 = FUNC_1(VAR_2);

 if (VAR_5)
  return FUNC_0(VAR_2, VAR_4,
          VAR_6->funcs[VAR_0].muxval);

 return FUNC_0(VAR_2, VAR_4,
         VAR_6->funcs[VAR_1].muxval);
}
