
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ power_down; } ;
struct dwc2_hsotg {TYPE_1__ params; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dwc2_hsotg*) ;
 int FUNC_1 (struct dwc2_hsotg*) ;

int FUNC_2(struct dwc2_hsotg *VAR_2, int VAR_3)
{
 if (VAR_2->params.power_down != VAR_0)
  return -VAR_1;

 if (VAR_3)
  return FUNC_1(VAR_2);
 else
  return FUNC_0(VAR_2);
}
