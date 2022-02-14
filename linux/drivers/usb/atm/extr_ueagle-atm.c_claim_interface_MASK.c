
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbatm_data {int dummy; } ;
struct usb_interface {int dummy; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_device*,char*,int,...) ;
 int FUNC_1 (int *,struct usb_interface*,struct usbatm_data*) ;
 struct usb_interface* FUNC_2 (struct usb_device*,int) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_2,
      struct usbatm_data *VAR_3, int VAR_4)
{
 int VAR_5;
 struct usb_interface *VAR_6 = FUNC_2(VAR_2, VAR_4);

 if (!VAR_6) {
  FUNC_0(VAR_2, "interface %d not found\n", VAR_4);
  return -VAR_0;
 }

 VAR_5 = FUNC_1(&VAR_1, VAR_6, VAR_3);
 if (VAR_5 != 0)
  FUNC_0(VAR_2, "can't claim interface %d, error %d\n", VAR_4,
         VAR_5);
 return VAR_5;
}
