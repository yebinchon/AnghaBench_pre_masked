
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;
struct trancevibrator {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct trancevibrator*) ;
 struct trancevibrator* FUNC_2 (int,int ) ;
 int FUNC_3 (struct usb_device*) ;
 int FUNC_4 (struct usb_interface*,struct trancevibrator*) ;

__attribute__((used)) static int FUNC_5(struct usb_interface *VAR_2,
      const struct usb_device_id *VAR_3)
{
 struct usb_device *VAR_4 = FUNC_0(VAR_2);
 struct trancevibrator *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(sizeof(struct trancevibrator), VAR_1);
 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto error;
 }

 VAR_5->udev = FUNC_3(VAR_4);
 FUNC_4(VAR_2, VAR_5);

 return 0;

error:
 FUNC_1(VAR_5);
 return VAR_6;
}
