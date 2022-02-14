
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct usb_hcd {TYPE_3__* driver; } ;
struct TYPE_4__ {int wMaxPacketSize; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;
struct usb_device {TYPE_2__ ep0; int speed; int bus; } ;
struct lvs_rh {int portnum; int present; } ;
struct TYPE_6__ {scalar_t__ (* enable_device ) (struct usb_hcd*,struct usb_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_hcd* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*) ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 scalar_t__ FUNC_4 (struct usb_hcd*,struct usb_device*) ;
 struct usb_device* FUNC_5 (struct usb_device*,int ,int ) ;
 struct lvs_rh* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_device*) ;
 int FUNC_8 (struct usb_device*,int ) ;

__attribute__((used)) static struct usb_device *FUNC_9(struct usb_interface *VAR_2)
{
 struct usb_device *VAR_3, *VAR_4;
 struct usb_hcd *VAR_5;
 struct lvs_rh *VAR_6 = FUNC_6(VAR_2);

 if (!VAR_6->present) {
  FUNC_2(&VAR_2->dev, "No LVS device is present\n");
  return ((void*)0);
 }

 VAR_4 = FUNC_3(VAR_2);
 VAR_5 = FUNC_0(VAR_4->bus);

 VAR_3 = FUNC_5(VAR_4, VAR_4->bus, VAR_6->portnum);
 if (!VAR_3) {
  FUNC_2(&VAR_2->dev, "Could not allocate lvs udev\n");
  return ((void*)0);
 }
 VAR_3->speed = VAR_0;
 VAR_3->ep0.desc.wMaxPacketSize = FUNC_1(512);
 FUNC_8(VAR_3, VAR_1);

 if (VAR_5->driver->enable_device) {
  if (VAR_5->driver->enable_device(VAR_5, VAR_3) < 0) {
   FUNC_2(&VAR_2->dev, "Failed to enable\n");
   FUNC_7(VAR_3);
   return ((void*)0);
  }
 }

 return VAR_3;
}
