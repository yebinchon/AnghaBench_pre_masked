
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb10x_pinfuncgrp {size_t port; scalar_t__ mode; int pincnt; int * pins; } ;
struct tb10x_pinctrl {int mutex; TYPE_1__* ports; int gpios; struct tb10x_pinfuncgrp* pingroups; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_2__ {scalar_t__ mode; scalar_t__ count; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct tb10x_pinctrl* FUNC_2 (struct pinctrl_dev*) ;
 int FUNC_3 (struct tb10x_pinctrl*,size_t,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_1,
   unsigned VAR_2, unsigned VAR_3)
{
 struct tb10x_pinctrl *VAR_4 = FUNC_2(VAR_1);
 const struct tb10x_pinfuncgrp *VAR_5 = &VAR_4->pingroups[VAR_3];
 int VAR_6;

 if (VAR_5->port < 0)
  return 0;

 FUNC_0(&VAR_4->mutex);





 if (VAR_4->ports[VAR_5->port].count
   && (VAR_4->ports[VAR_5->port].mode != VAR_5->mode)) {
  FUNC_1(&VAR_4->mutex);
  return -VAR_0;
 }





 for (VAR_6 = 0; VAR_6 < VAR_5->pincnt; VAR_6++)
  if (FUNC_4(VAR_5->pins[VAR_6], VAR_4->gpios)) {
   FUNC_1(&VAR_4->mutex);
   return -VAR_0;
  }

 FUNC_3(VAR_4, VAR_5->port, VAR_5->mode);

 VAR_4->ports[VAR_5->port].count++;

 FUNC_1(&VAR_4->mutex);

 return 0;
}
