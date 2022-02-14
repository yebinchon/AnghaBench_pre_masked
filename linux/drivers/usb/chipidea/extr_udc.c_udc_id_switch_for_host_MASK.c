
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ci_hdrc {TYPE_1__* platdata; scalar_t__ vbus_active; scalar_t__ is_otg; } ;
struct TYPE_2__ {scalar_t__ pins_default; int pctl; scalar_t__ pins_device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ci_hdrc*,int,int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ci_hdrc *VAR_2)
{




 if (VAR_2->is_otg)
  FUNC_0(VAR_2, VAR_0 | VAR_1, VAR_1);

 VAR_2->vbus_active = 0;

 if (VAR_2->platdata->pins_device && VAR_2->platdata->pins_default)
  FUNC_1(VAR_2->platdata->pctl,
         VAR_2->platdata->pins_default);
}
