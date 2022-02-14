
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usbnet {struct driver_info* driver_info; int udev; } ;
struct TYPE_6__ {int driver; } ;
struct usb_interface {TYPE_3__ dev; TYPE_2__* cur_altsetting; } ;
struct usb_driver {int id_table; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct driver_info {int description; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,int ) ;
 struct usb_driver* FUNC_1 (int ) ;
 struct usb_device_id* FUNC_2 (struct usb_interface*,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct usbnet *VAR_1, struct usb_interface *VAR_2, u8 VAR_3)
{
 struct usb_driver *VAR_4 = FUNC_1(VAR_2->dev.driver);
 const struct usb_device_id *VAR_5;
 struct driver_info *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_1->udev,
    VAR_2->cur_altsetting->desc.bInterfaceNumber,
    VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_5 = FUNC_2(VAR_2, VAR_4->id_table);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = (struct driver_info *)VAR_5->driver_info;
 if (VAR_6 != VAR_1->driver_info) {
  FUNC_0(&VAR_2->dev, "driver_info updated to '%s'\n",
   VAR_6->description);
  VAR_1->driver_info = VAR_6;
 }
 return 0;
}
