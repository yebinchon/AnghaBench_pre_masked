
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device {int dev; } ;
struct TYPE_2__ {int state; } ;
struct brcmf_usbdev_info {scalar_t__ wowl_enabled; TYPE_1__ bus_pub; } ;
typedef int pm_message_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcmf_usbdev_info*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct brcmf_usbdev_info* FUNC_4 (int *) ;
 struct usb_device* FUNC_5 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_2, pm_message_t VAR_3)
{
 struct usb_device *VAR_4 = FUNC_5(VAR_2);
 struct brcmf_usbdev_info *VAR_5 = FUNC_4(&VAR_4->dev);

 FUNC_1(VAR_1, "Enter\n");
 VAR_5->bus_pub.state = VAR_0;
 if (VAR_5->wowl_enabled) {
  FUNC_0(VAR_5);
 } else {
  FUNC_2(&VAR_4->dev);
  FUNC_3(&VAR_4->dev);
 }
 return 0;
}
