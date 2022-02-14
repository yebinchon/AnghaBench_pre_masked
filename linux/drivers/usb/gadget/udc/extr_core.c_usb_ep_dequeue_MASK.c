
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int dummy; } ;
struct usb_ep {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* dequeue ) (struct usb_ep*,struct usb_request*) ;} ;


 int FUNC_0 (struct usb_ep*,struct usb_request*) ;
 int FUNC_1 (struct usb_ep*,struct usb_request*,int) ;

int FUNC_2(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_0->ops->dequeue(VAR_0, VAR_1);
 FUNC_1(VAR_0, VAR_1, VAR_2);

 return VAR_2;
}
