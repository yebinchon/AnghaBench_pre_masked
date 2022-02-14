
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int dummy; } ;
struct usb_ep {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* free_request ) (struct usb_ep*,struct usb_request*) ;} ;


 int FUNC_0 (struct usb_ep*,struct usb_request*) ;
 int FUNC_1 (struct usb_ep*,struct usb_request*,int ) ;

void FUNC_2(struct usb_ep *VAR_0,
           struct usb_request *VAR_1)
{
 FUNC_1(VAR_0, VAR_1, 0);
 VAR_0->ops->free_request(VAR_0, VAR_1);
}
