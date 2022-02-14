
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct TYPE_2__ {int speed; } ;
struct dwc2_hsotg {int wf_otg; int wq_otg; TYPE_1__ params; } ;


 struct dwc2_hsotg* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct usb_hcd *VAR_0, int VAR_1)
{
 struct dwc2_hsotg *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->params.speed == VAR_1)
  return;

 VAR_2->params.speed = VAR_1;
 FUNC_1(VAR_2->wq_otg, &VAR_2->wf_otg);
}
