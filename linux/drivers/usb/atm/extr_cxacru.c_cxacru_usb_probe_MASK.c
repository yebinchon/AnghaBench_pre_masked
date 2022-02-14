
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_2__ {scalar_t__ bDeviceClass; int iProduct; } ;
struct usb_device {TYPE_1__ descriptor; } ;
typedef int buf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 int FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (struct usb_device*,int ,char*,int) ;
 int FUNC_4 (struct usb_interface*,struct usb_device_id const*,int *) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_3,
  const struct usb_device_id *VAR_4)
{
 struct usb_device *VAR_5 = FUNC_1(VAR_3);
 char VAR_6[15];




 if (VAR_5->descriptor.bDeviceClass == VAR_1
   && FUNC_3(VAR_5, VAR_5->descriptor.iProduct,
    VAR_6, sizeof(VAR_6)) > 0) {
  if (!FUNC_2(VAR_6, "USB NET CARD")) {
   FUNC_0(&VAR_3->dev, "ignoring cx82310_eth device\n");
   return -VAR_0;
  }
 }

 return FUNC_4(VAR_3, VAR_4, &VAR_2);
}
