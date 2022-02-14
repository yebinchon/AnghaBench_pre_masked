
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct usb_serial {struct usb_device* dev; TYPE_1__* interface; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct usb_device {int dev; } ;
struct sierra_iface_info {int dummy; } ;
struct TYPE_2__ {int num_altsetting; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 scalar_t__ FUNC_1 (int ,struct sierra_iface_info*) ;
 int FUNC_2 (struct usb_serial*) ;
 int FUNC_3 (struct usb_device*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct usb_serial *VAR_1,
   const struct usb_device_id *VAR_2)
{
 int VAR_3 = 0;
 struct usb_device *VAR_4;
 u8 VAR_5;

 VAR_4 = VAR_1->dev;
 VAR_5 = FUNC_2(VAR_1);





 if (VAR_1->interface->num_altsetting == 2) {
  FUNC_0(&VAR_4->dev, "Selecting alt setting for interface %d\n",
   VAR_5);

  FUNC_3(VAR_4, VAR_5, 1);
 }

 if (FUNC_1(VAR_5,
    (struct sierra_iface_info *)VAR_2->driver_info)) {
  FUNC_0(&VAR_1->dev->dev,
   "Ignoring blacklisted interface #%d\n", VAR_5);
  return -VAR_0;
 }

 return VAR_3;
}
