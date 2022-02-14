
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct dwc2_hsotg {int dummy; } ;


 int FUNC_0 (struct dwc2_hsotg*,int) ;
 struct dwc2_hsotg* FUNC_1 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_2(struct usb_hcd *VAR_0, char *VAR_1)
{
 struct dwc2_hsotg *VAR_2 = FUNC_1(VAR_0);

 VAR_1[0] = FUNC_0(VAR_2, 1) << 1;
 return VAR_1[0] != 0;
}
