
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int minor; } ;
struct usb_ftdi {int disconnected; TYPE_1__* udev; scalar_t__ registered; scalar_t__ initialized; scalar_t__ enumerated; scalar_t__ synchronized; int platform_dev; struct usb_class_driver* class; } ;
struct usb_class_driver {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct usb_ftdi*) ;
 int FUNC_2 (struct usb_ftdi*) ;
 int FUNC_3 (struct usb_ftdi*) ;
 int FUNC_4 (struct usb_ftdi*) ;
 int FUNC_5 (struct usb_ftdi*) ;
 int FUNC_6 (struct usb_ftdi*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct usb_interface*,struct usb_class_driver*) ;
 struct usb_ftdi* FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_11(struct usb_interface *VAR_0)
{
 struct usb_ftdi *VAR_1 = FUNC_9(VAR_0);
 VAR_1->disconnected += 1;
 if (VAR_1->class) {
  int VAR_2 = VAR_0->minor;
  struct usb_class_driver *VAR_3 = VAR_1->class;
  FUNC_10(VAR_0, ((void*)0));
  FUNC_8(VAR_0, VAR_3);
  FUNC_0(&VAR_1->udev->dev, "USB FTDI U132 jtag interface on minor %d now disconnected\n",
    VAR_2);
 } else {
  FUNC_6(VAR_1);
  FUNC_1(VAR_1);
  FUNC_5(VAR_1);
  FUNC_2(VAR_1);
  FUNC_3(VAR_1);
  if (VAR_1->registered) {
   FUNC_7(&VAR_1->platform_dev);
   VAR_1->synchronized = 0;
   VAR_1->enumerated = 0;
   VAR_1->initialized = 0;
   VAR_1->registered = 0;
  }
  VAR_1->disconnected += 1;
  FUNC_10(VAR_0, ((void*)0));
  FUNC_0(&VAR_1->udev->dev, "USB FTDI U132 host controller interface now disconnected\n");
 }
 FUNC_4(VAR_1);
}
