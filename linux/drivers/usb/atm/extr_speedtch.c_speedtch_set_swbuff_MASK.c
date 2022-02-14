
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbatm_data {struct usb_device* usb_dev; } ;
struct usb_device {int dummy; } ;
struct speedtch_instance_data {struct usbatm_data* usbatm; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_device*,int ,int,int,int,int,int *,int ,int ) ;
 int FUNC_1 (struct usbatm_data*,char*,char*) ;
 int FUNC_2 (struct usb_device*,int ) ;
 int FUNC_3 (struct usbatm_data*,char*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct speedtch_instance_data *VAR_1, int VAR_2)
{
 struct usbatm_data *VAR_3 = VAR_1->usbatm;
 struct usb_device *VAR_4 = VAR_3->usb_dev;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, FUNC_2(VAR_4, 0),
         0x32, 0x40, VAR_2 ? 0x01 : 0x00, 0x00, ((void*)0), 0, VAR_0);
 if (VAR_5 < 0)
  FUNC_3(VAR_3,
    "%sabling SW buffering: usb_control_msg returned %d\n",
    VAR_2 ? "En" : "Dis", VAR_5);
 else
  FUNC_1(VAR_3, "speedtch_set_swbuff: %sbled SW buffering\n", VAR_2 ? "En" : "Dis");
}
