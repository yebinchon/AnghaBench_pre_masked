
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct musb {TYPE_2__* hcd; struct device* controller; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int uses_pio_for_control; } ;
struct TYPE_4__ {unsigned long* hcd_priv; int uses_new_polling; int has_tt; TYPE_1__ self; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int *,struct device*,int ) ;

int FUNC_2(struct musb *VAR_2)
{
 struct device *VAR_3 = VAR_2->controller;


 VAR_2->hcd = FUNC_1(&VAR_1, VAR_3, FUNC_0(VAR_3));
 if (!VAR_2->hcd)
  return -VAR_0;

 *VAR_2->hcd->hcd_priv = (unsigned long) VAR_2;
 VAR_2->hcd->self.uses_pio_for_control = 1;
 VAR_2->hcd->uses_new_polling = 1;
 VAR_2->hcd->has_tt = 1;

 return 0;
}
