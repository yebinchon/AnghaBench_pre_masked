
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int b_hnp_enable; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct dwc2_hsotg {int dummy; } ;


 struct usb_hcd* FUNC_0 (struct dwc2_hsotg*) ;

__attribute__((used)) static int FUNC_1(struct dwc2_hsotg *VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->self.b_hnp_enable;
}
