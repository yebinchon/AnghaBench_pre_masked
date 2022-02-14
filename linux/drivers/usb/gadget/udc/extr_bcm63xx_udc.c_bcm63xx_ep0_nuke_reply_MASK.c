
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int dummy; } ;
struct bcm63xx_udc {struct usb_request* ep0_request; scalar_t__ ep0_req_completed; int gadget; struct usb_request* ep0_reply; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcm63xx_udc*,struct usb_request*,int ) ;
 int FUNC_1 (int *,struct usb_request*,int) ;

__attribute__((used)) static void FUNC_2(struct bcm63xx_udc *VAR_1, int VAR_2)
{
 struct usb_request *VAR_3 = VAR_1->ep0_reply;

 VAR_1->ep0_reply = ((void*)0);
 FUNC_1(&VAR_1->gadget, VAR_3, VAR_2);
 if (VAR_1->ep0_request == VAR_3) {
  VAR_1->ep0_req_completed = 0;
  VAR_1->ep0_request = ((void*)0);
 }
 FUNC_0(VAR_1, VAR_3, -VAR_0);
}
