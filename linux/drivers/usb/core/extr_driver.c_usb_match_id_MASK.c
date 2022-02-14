
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {scalar_t__ driver_info; scalar_t__ bInterfaceClass; scalar_t__ bDeviceClass; scalar_t__ idProduct; scalar_t__ idVendor; } ;


 scalar_t__ FUNC_0 (struct usb_interface*,struct usb_device_id const*) ;

const struct usb_device_id *FUNC_1(struct usb_interface *VAR_0,
      const struct usb_device_id *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return ((void*)0);






 for (; VAR_1->idVendor || VAR_1->idProduct || VAR_1->bDeviceClass ||
        VAR_1->bInterfaceClass || VAR_1->driver_info; VAR_1++) {
  if (FUNC_0(VAR_0, VAR_1))
   return VAR_1;
 }

 return ((void*)0);
}
