
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;
struct dwc3_request {int dummy; } ;


 int FUNC_0 (struct dwc3_request*) ;
 struct dwc3_request* FUNC_1 (struct usb_request*) ;
 int FUNC_2 (struct dwc3_request*) ;

__attribute__((used)) static void FUNC_3(struct usb_ep *VAR_0,
  struct usb_request *VAR_1)
{
 struct dwc3_request *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_2);
 FUNC_0(VAR_2);
}
