
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dwc3_qcom {scalar_t__ pm_suspended; int dwc3; } ;
struct dwc3 {TYPE_1__* xhci; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct dwc3* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_1, void *VAR_2)
{
 struct dwc3_qcom *VAR_3 = VAR_2;
 struct dwc3 *VAR_4 = FUNC_0(VAR_3->dwc3);


 if (VAR_3->pm_suspended)
  return VAR_0;

 if (VAR_4->xhci)
  FUNC_1(&VAR_4->xhci->dev);

 return VAR_0;
}
