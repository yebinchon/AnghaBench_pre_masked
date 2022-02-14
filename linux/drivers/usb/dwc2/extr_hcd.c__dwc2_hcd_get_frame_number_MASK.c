
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct dwc2_hsotg {int dummy; } ;


 int FUNC_0 (struct dwc2_hsotg*) ;
 struct dwc2_hsotg* FUNC_1 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_2(struct usb_hcd *VAR_0)
{
 struct dwc2_hsotg *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1);
}
