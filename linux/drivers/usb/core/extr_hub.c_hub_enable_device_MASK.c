
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {TYPE_1__* driver; } ;
struct usb_device {scalar_t__ state; int bus; } ;
struct TYPE_2__ {int (* enable_device ) (struct usb_hcd*,struct usb_device*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct usb_hcd* FUNC_0 (int ) ;
 int FUNC_1 (struct usb_hcd*,struct usb_device*) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_3)
{
 struct usb_hcd *VAR_4 = FUNC_0(VAR_3->bus);

 if (!VAR_4->driver->enable_device)
  return 0;
 if (VAR_3->state == VAR_1)
  return 0;
 if (VAR_3->state != VAR_2)
  return -VAR_0;

 return VAR_4->driver->enable_device(VAR_4, VAR_3);
}
