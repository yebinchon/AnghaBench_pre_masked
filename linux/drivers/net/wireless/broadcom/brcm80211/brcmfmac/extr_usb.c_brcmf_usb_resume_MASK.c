
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device {int dev; } ;
struct TYPE_2__ {int state; } ;
struct brcmf_usbdev_info {TYPE_1__ bus_pub; int dev; int settings; int wowl_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 struct brcmf_usbdev_info* FUNC_4 (int *) ;
 int FUNC_5 (struct brcmf_usbdev_info*) ;
 struct usb_device* FUNC_6 (struct usb_interface*) ;

__attribute__((used)) static int FUNC_7(struct usb_interface *VAR_2)
{
 struct usb_device *VAR_3 = FUNC_6(VAR_2);
 struct brcmf_usbdev_info *VAR_4 = FUNC_4(&VAR_3->dev);

 FUNC_2(VAR_1, "Enter\n");
 if (!VAR_4->wowl_enabled) {
  int VAR_5;

  VAR_5 = FUNC_0(&VAR_3->dev, VAR_4->settings);
  if (VAR_5)
   return VAR_5;

  VAR_5 = FUNC_1(VAR_4->dev);
  if (VAR_5) {
   FUNC_3(VAR_4->dev);
   return VAR_5;
  }
 }

 VAR_4->bus_pub.state = VAR_0;
 FUNC_5(VAR_4);
 return 0;
}
