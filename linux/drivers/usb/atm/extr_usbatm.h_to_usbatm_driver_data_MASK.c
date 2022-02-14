
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbatm_data {void* driver_data; } ;
struct usb_interface {int dummy; } ;


 struct usbatm_data* FUNC_0 (struct usb_interface*) ;

__attribute__((used)) static inline void *FUNC_1(struct usb_interface *VAR_0)
{
 struct usbatm_data *VAR_1;

 if (VAR_0 == ((void*)0))
  return ((void*)0);

 VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 return VAR_1->driver_data;
}
