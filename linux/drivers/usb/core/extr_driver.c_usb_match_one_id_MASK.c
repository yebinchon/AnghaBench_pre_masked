
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct usb_host_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct usb_device {int dummy; } ;


 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct usb_device*,struct usb_device_id const*) ;
 int FUNC_2 (struct usb_device*,struct usb_host_interface*,struct usb_device_id const*) ;

int FUNC_3(struct usb_interface *VAR_0,
       const struct usb_device_id *VAR_1)
{
 struct usb_host_interface *VAR_2;
 struct usb_device *VAR_3;


 if (VAR_1 == ((void*)0))
  return 0;

 VAR_2 = VAR_0->cur_altsetting;
 VAR_3 = FUNC_0(VAR_0);

 if (!FUNC_1(VAR_3, VAR_1))
  return 0;

 return FUNC_2(VAR_3, VAR_2, VAR_1);
}
