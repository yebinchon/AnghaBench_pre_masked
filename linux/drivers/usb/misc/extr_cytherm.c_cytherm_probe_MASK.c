
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct usb_cytherm {int brightness; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct usb_device* FUNC_1 (struct usb_interface*) ;
 struct usb_cytherm* FUNC_2 (int,int ) ;
 int FUNC_3 (struct usb_device*) ;
 int FUNC_4 (struct usb_interface*,struct usb_cytherm*) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_2,
    const struct usb_device_id *VAR_3)
{
 struct usb_device *VAR_4 = FUNC_1(VAR_2);
 struct usb_cytherm *VAR_5 = ((void*)0);
 int VAR_6 = -VAR_0;

 VAR_5 = FUNC_2 (sizeof(struct usb_cytherm), VAR_1);
 if (!VAR_5)
  goto error_mem;

 VAR_5->udev = FUNC_3(VAR_4);

 FUNC_4 (VAR_2, VAR_5);

 VAR_5->brightness = 0xFF;

 FUNC_0 (&VAR_2->dev,
    "Cypress thermometer device now attached\n");
 return 0;

error_mem:
 return VAR_6;
}
