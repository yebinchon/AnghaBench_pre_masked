
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ci_hdrc {scalar_t__ is_otg; TYPE_1__* platdata; } ;
struct TYPE_2__ {scalar_t__ pins_device; int pctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ci_hdrc*,int,int) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct ci_hdrc *VAR_2)
{
 if (VAR_2->platdata->pins_device)
  FUNC_1(VAR_2->platdata->pctl,
         VAR_2->platdata->pins_device);

 if (VAR_2->is_otg)

  FUNC_0(VAR_2, VAR_1 | VAR_0,
     VAR_1 | VAR_0);

 return 0;
}
