
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device {int dev; } ;
struct brcmf_usbdev_info {int dummy; } ;
struct brcmf_fw_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,struct brcmf_fw_request*,int ) ;
 struct brcmf_usbdev_info* FUNC_2 (int *) ;
 struct brcmf_fw_request* FUNC_3 (struct brcmf_usbdev_info*) ;
 int VAR_2 ;
 struct usb_device* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct brcmf_fw_request*) ;

__attribute__((used)) static int FUNC_6(struct usb_interface *VAR_3)
{
 struct usb_device *VAR_4 = FUNC_4(VAR_3);
 struct brcmf_usbdev_info *VAR_5 = FUNC_2(&VAR_4->dev);
 struct brcmf_fw_request *VAR_6;
 int VAR_7;

 FUNC_0(VAR_1, "Enter\n");

 VAR_6 = FUNC_3(VAR_5);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_1(&VAR_4->dev, VAR_6, VAR_2);
 if (VAR_7 < 0)
  FUNC_5(VAR_6);

 return VAR_7;
}
