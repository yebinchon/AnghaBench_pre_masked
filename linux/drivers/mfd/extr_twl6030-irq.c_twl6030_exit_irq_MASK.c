
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ twl_irq; int pm_nb; } ;


 int FUNC_0 (scalar_t__,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int *) ;

int FUNC_2(void)
{
 if (VAR_0 && VAR_0->twl_irq) {
  FUNC_1(&VAR_0->pm_nb);
  FUNC_0(VAR_0->twl_irq, ((void*)0));
 }
 return 0;
}
