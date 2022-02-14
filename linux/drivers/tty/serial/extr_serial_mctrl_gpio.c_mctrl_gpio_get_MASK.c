
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mctrl_gpios {scalar_t__* gpio; } ;
typedef enum mctrl_gpio_idx { ____Placeholder_mctrl_gpio_idx } mctrl_gpio_idx ;
struct TYPE_2__ {unsigned int mctrl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_1 ;

unsigned int FUNC_2(struct mctrl_gpios *VAR_2, unsigned int *VAR_3)
{
 enum mctrl_gpio_idx VAR_4;

 if (VAR_2 == ((void*)0))
  return *VAR_3;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2->gpio[VAR_4] && !FUNC_1(VAR_4)) {
   if (FUNC_0(VAR_2->gpio[VAR_4]))
    *VAR_3 |= VAR_1[VAR_4].mctrl;
   else
    *VAR_3 &= ~VAR_1[VAR_4].mctrl;
  }
 }

 return *VAR_3;
}
