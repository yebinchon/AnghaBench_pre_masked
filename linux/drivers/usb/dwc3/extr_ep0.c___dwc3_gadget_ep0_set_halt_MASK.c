
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_ep {int dummy; } ;
struct dwc3_ep {struct dwc3* dwc; } ;
struct dwc3 {int dummy; } ;


 int FUNC_0 (struct dwc3*) ;
 struct dwc3_ep* FUNC_1 (struct usb_ep*) ;

int FUNC_2(struct usb_ep *VAR_0, int VAR_1)
{
 struct dwc3_ep *VAR_2 = FUNC_1(VAR_0);
 struct dwc3 *VAR_3 = VAR_2->dwc;

 FUNC_0(VAR_3);

 return 0;
}
