
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_gadget {int dummy; } ;
struct usb_composite_dev {int lock; TYPE_1__* driver; scalar_t__ config; scalar_t__ suspended; } ;
struct TYPE_2__ {int (* disconnect ) (struct usb_composite_dev*) ;} ;


 struct usb_composite_dev* FUNC_0 (struct usb_gadget*) ;
 int FUNC_1 (struct usb_composite_dev*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct usb_composite_dev*) ;

void FUNC_5(struct usb_gadget *VAR_0)
{
 struct usb_composite_dev *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2;




 FUNC_2(&VAR_1->lock, VAR_2);
 VAR_1->suspended = 0;
 if (VAR_1->config)
  FUNC_1(VAR_1);
 if (VAR_1->driver->disconnect)
  VAR_1->driver->disconnect(VAR_1);
 FUNC_3(&VAR_1->lock, VAR_2);
}
