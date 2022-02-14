
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {TYPE_1__* driver; } ;
struct usb_device {int bus; struct usb_device* parent; } ;
struct TYPE_2__ {int (* free_dev ) (struct usb_hcd*,struct usb_device*) ;} ;


 struct usb_hcd* FUNC_0 (int ) ;
 int FUNC_1 (struct usb_hcd*,struct usb_device*) ;
 int FUNC_2 (struct usb_device*) ;

__attribute__((used)) static void FUNC_3(struct usb_device *VAR_0)
{
 struct usb_device *VAR_1 = VAR_0->parent;
 struct usb_hcd *VAR_2 = FUNC_0(VAR_1->bus);

 if (VAR_2->driver->free_dev)
  VAR_2->driver->free_dev(VAR_2, VAR_0);

 FUNC_2(VAR_0);
}
