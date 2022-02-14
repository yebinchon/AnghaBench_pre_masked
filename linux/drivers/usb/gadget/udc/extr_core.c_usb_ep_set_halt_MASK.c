
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ep {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_halt ) (struct usb_ep*,int) ;} ;


 int FUNC_0 (struct usb_ep*,int) ;
 int FUNC_1 (struct usb_ep*,int) ;

int FUNC_2(struct usb_ep *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->ops->set_halt(VAR_0, 1);
 FUNC_1(VAR_0, VAR_1);

 return VAR_1;
}
