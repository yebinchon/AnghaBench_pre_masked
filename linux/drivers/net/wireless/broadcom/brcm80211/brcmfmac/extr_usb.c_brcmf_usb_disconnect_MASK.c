
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct brcmf_usbdev_info {int dev_init_done; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct brcmf_usbdev_info*) ;
 int FUNC_2 (struct brcmf_usbdev_info*) ;
 scalar_t__ FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct usb_interface *VAR_1)
{
 struct brcmf_usbdev_info *VAR_2;

 FUNC_0(VAR_0, "Enter\n");
 VAR_2 = (struct brcmf_usbdev_info *)FUNC_3(VAR_1);

 if (VAR_2) {
  FUNC_4(&VAR_2->dev_init_done);



  if (!FUNC_3(VAR_1))
   goto done;

  FUNC_1(VAR_2);
  FUNC_2(VAR_2);
 }
done:
 FUNC_0(VAR_0, "Exit\n");
}
