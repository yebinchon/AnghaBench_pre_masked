
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct usb_device {int dev; } ;
struct p54u_priv {int fw_wait_load; struct firmware const* fw; struct usb_interface* intf; struct usb_device* udev; } ;
struct firmware {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_1 ;
 int FUNC_2 (struct p54u_priv*) ;
 int FUNC_3 (int *,struct usb_interface*) ;
 int FUNC_4 (struct usb_device*) ;
 int FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_device*) ;

__attribute__((used)) static void FUNC_7(const struct firmware *VAR_2,
      void *VAR_3)
{
 struct p54u_priv *VAR_4 = VAR_3;
 struct usb_device *VAR_5 = VAR_4->udev;
 struct usb_interface *VAR_6 = VAR_4->intf;
 int VAR_7;

 if (VAR_2) {
  VAR_4->fw = VAR_2;
  VAR_7 = FUNC_2(VAR_4);
 } else {
  VAR_7 = -VAR_0;
  FUNC_1(&VAR_5->dev, "Firmware not found.\n");
 }

 FUNC_0(&VAR_4->fw_wait_load);




 VAR_4 = ((void*)0);

 if (VAR_7) {
  FUNC_1(&VAR_6->dev, "failed to initialize device (%d)\n", VAR_7);

  FUNC_4(VAR_5);
  FUNC_3(&VAR_1, VAR_6);
  FUNC_6(VAR_5);
 }

 FUNC_5(VAR_6);
}
