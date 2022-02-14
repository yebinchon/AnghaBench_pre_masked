
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial {struct usb_interface* interface; struct usb_device* dev; } ;
struct usb_interface {int dummy; } ;
struct usb_device {int dev; TYPE_1__* actconfig; } ;
struct TYPE_2__ {struct usb_interface** interface; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct usb_serial *VAR_1)
{
 struct usb_device *VAR_2 = VAR_1->dev;
 struct usb_interface *VAR_3 = VAR_1->interface;

 if (VAR_3 == VAR_2->actconfig->interface[0] ||
     VAR_3 == VAR_2->actconfig->interface[1]) {
  FUNC_0(&VAR_2->dev, "Ignoring serial port reserved for JTAG\n");
  return -VAR_0;
 }

 return 0;
}
