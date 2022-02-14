
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_gadget {int dummy; } ;
struct dwc3 {int dummy; } ;


 int FUNC_0 (struct dwc3*) ;
 struct dwc3* FUNC_1 (struct usb_gadget*) ;

__attribute__((used)) static int FUNC_2(struct usb_gadget *VAR_0)
{
 struct dwc3 *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(VAR_1);
}
