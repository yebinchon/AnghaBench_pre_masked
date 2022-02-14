
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_gadget {int connected; TYPE_2__* udc; TYPE_3__* ops; scalar_t__ deactivated; } ;
struct TYPE_6__ {int (* pullup ) (struct usb_gadget*,int ) ;} ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_4__ {int (* disconnect ) (struct usb_gadget*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct usb_gadget*,int ) ;
 int FUNC_1 (struct usb_gadget*) ;
 int FUNC_2 (struct usb_gadget*,int) ;

int FUNC_3(struct usb_gadget *VAR_1)
{
 int VAR_2 = 0;

 if (!VAR_1->ops->pullup) {
  VAR_2 = -VAR_0;
  goto out;
 }

 if (VAR_1->deactivated) {




  VAR_1->connected = 0;
  goto out;
 }

 VAR_2 = VAR_1->ops->pullup(VAR_1, 0);
 if (!VAR_2) {
  VAR_1->connected = 0;
  VAR_1->udc->driver->disconnect(VAR_1);
 }

out:
 FUNC_2(VAR_1, VAR_2);

 return VAR_2;
}
