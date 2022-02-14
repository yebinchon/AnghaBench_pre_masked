
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct usb_device {int dev; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {struct usb_device* pusbdev; } ;
struct _adapter {int pnetdev; struct firmware const* fw; struct usb_interface* pusb_intf; TYPE_1__ dvobjpriv; int rtl8712_fw_ready; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct usb_device*) ;
 int FUNC_4 (struct usb_interface*,int *) ;

__attribute__((used)) static void FUNC_5(const struct firmware *VAR_0, void *VAR_1)
{
 struct _adapter *VAR_2 = VAR_1;

 FUNC_0(&VAR_2->rtl8712_fw_ready);
 if (!VAR_0) {
  struct usb_device *VAR_3 = VAR_2->dvobjpriv.pusbdev;
  struct usb_interface *VAR_4 = VAR_2->pusb_intf;

  FUNC_1(&VAR_3->dev, "r8712u: Firmware request failed\n");
  FUNC_3(VAR_3);
  FUNC_4(VAR_4, ((void*)0));
  return;
 }
 VAR_2->fw = VAR_0;

 FUNC_2(VAR_2->pnetdev);
}
