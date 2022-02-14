
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ is_b_host; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct dwc2_hsotg {int dummy; } ;


 struct usb_hcd* FUNC_0 (struct dwc2_hsotg*) ;

__attribute__((used)) static void FUNC_1(struct dwc2_hsotg *VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_0(VAR_0);

 VAR_1->self.is_b_host = 0;
}
