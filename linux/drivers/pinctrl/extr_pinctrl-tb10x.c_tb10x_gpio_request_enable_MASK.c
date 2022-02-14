
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb10x_pinfuncgrp {unsigned int mode; int port; int pincnt; unsigned int* pins; scalar_t__ isgpio; } ;
struct tb10x_pinctrl {int pinfuncgrpcnt; int mutex; int gpios; TYPE_1__* ports; struct tb10x_pinfuncgrp* pingroups; } ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {unsigned int mode; scalar_t__ count; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct tb10x_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (struct tb10x_pinctrl*,int,int) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_1,
     struct pinctrl_gpio_range *VAR_2,
     unsigned VAR_3)
{
 struct tb10x_pinctrl *VAR_4 = FUNC_2(VAR_1);
 int VAR_5 = -1;
 int VAR_6 = -1;
 int VAR_7;

 FUNC_0(&VAR_4->mutex);







 for (VAR_7 = 0; VAR_7 < VAR_4->pinfuncgrpcnt; VAR_7++) {
  const struct tb10x_pinfuncgrp *VAR_8 = &VAR_4->pingroups[VAR_7];
  unsigned int VAR_9 = VAR_8->mode;
  int VAR_10, VAR_11 = VAR_8->port;





  if (VAR_11 < 0)
   continue;

  for (VAR_10 = 0; VAR_10 < VAR_8->pincnt; VAR_10++) {
   if (VAR_3 == VAR_8->pins[VAR_10]) {
    if (VAR_8->isgpio) {




     VAR_5 = VAR_11;
     VAR_6 = VAR_9;
    } else if (VAR_4->ports[VAR_11].count
     && (VAR_4->ports[VAR_11].mode == VAR_9)) {




     FUNC_1(&VAR_4->mutex);
     return -VAR_0;
    }
    break;
   }
  }
 }







 FUNC_3(VAR_3, VAR_4->gpios);







 if (VAR_5 >= 0)
  FUNC_4(VAR_4, VAR_5, VAR_6);

 FUNC_1(&VAR_4->mutex);

 return 0;
}
