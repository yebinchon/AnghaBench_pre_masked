
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int is_b_host; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct dwc2_hsotg {int dummy; } ;


 int FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct dwc2_hsotg*) ;
 struct usb_hcd* FUNC_2 (struct dwc2_hsotg*) ;

__attribute__((used)) static void FUNC_3(struct dwc2_hsotg *VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_2(VAR_0);

 VAR_1->self.is_b_host = FUNC_1(VAR_0);
 FUNC_0(VAR_1);
}
