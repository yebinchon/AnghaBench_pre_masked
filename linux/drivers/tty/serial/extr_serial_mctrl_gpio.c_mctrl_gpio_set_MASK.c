
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mctrl_gpios {struct gpio_desc** gpio; } ;
struct gpio_desc {int dummy; } ;
typedef enum mctrl_gpio_idx { ____Placeholder_mctrl_gpio_idx } mctrl_gpio_idx ;
struct TYPE_2__ {unsigned int mctrl; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int,int ,unsigned int) ;
 int FUNC_2 (unsigned int,struct gpio_desc**,int *,int ) ;
 scalar_t__ FUNC_3 (int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

void FUNC_4(struct mctrl_gpios *VAR_3, unsigned int VAR_4)
{
 enum mctrl_gpio_idx VAR_5;
 struct gpio_desc *VAR_6[VAR_0];
 FUNC_0(VAR_2, VAR_0);
 unsigned int VAR_7 = 0;

 if (VAR_3 == ((void*)0))
  return;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (VAR_3->gpio[VAR_5] && FUNC_3(VAR_5)) {
   VAR_6[VAR_7] = VAR_3->gpio[VAR_5];
   FUNC_1(VAR_7, VAR_2,
         VAR_4 & VAR_1[VAR_5].mctrl);
   VAR_7++;
  }
 FUNC_2(VAR_7, VAR_6, ((void*)0), VAR_2);
}
