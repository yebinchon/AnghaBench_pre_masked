
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_serial {TYPE_2__* interface; } ;
struct usb_interface_descriptor {scalar_t__ bInterfaceClass; int bNumEndpoints; int bInterfaceNumber; } ;
struct usb_device_id {unsigned long driver_info; } ;
struct TYPE_4__ {TYPE_1__* cur_altsetting; } ;
struct TYPE_3__ {struct usb_interface_descriptor desc; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct usb_serial*,void*) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_3,
   const struct usb_device_id *VAR_4)
{
 struct usb_interface_descriptor *VAR_5 =
    &VAR_3->interface->cur_altsetting->desc;
 unsigned long VAR_6 = VAR_4->driver_info;


 if (VAR_5->bInterfaceClass == VAR_2)
  return -VAR_0;






 if (VAR_6 & FUNC_0(VAR_5->bInterfaceNumber))
  return -VAR_0;





 if (VAR_6 & VAR_1 && VAR_5->bNumEndpoints != 2)
  return -VAR_0;


 FUNC_1(VAR_3, (void *)VAR_6);

 return 0;
}
