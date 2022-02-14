
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int actual; } ;
struct bcm63xx_udc {struct usb_request* ep0_request; scalar_t__ ep0_req_completed; } ;



__attribute__((used)) static int FUNC_0(struct bcm63xx_udc *VAR_0)
{
 struct usb_request *VAR_1 = VAR_0->ep0_request;

 VAR_0->ep0_req_completed = 0;
 VAR_0->ep0_request = ((void*)0);

 return VAR_1->actual;
}
