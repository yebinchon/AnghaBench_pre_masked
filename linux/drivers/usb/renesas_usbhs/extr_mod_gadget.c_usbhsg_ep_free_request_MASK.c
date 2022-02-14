
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int node; } ;
struct usbhsg_request {TYPE_1__ pkt; } ;
struct usb_request {int dummy; } ;
struct usb_ep {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct usbhsg_request*) ;
 int FUNC_2 (int *) ;
 struct usbhsg_request* FUNC_3 (struct usb_request*) ;

__attribute__((used)) static void FUNC_4(struct usb_ep *VAR_0,
       struct usb_request *VAR_1)
{
 struct usbhsg_request *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(!FUNC_2(&VAR_2->pkt.node));
 FUNC_1(VAR_2);
}
