
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct usb_serial {TYPE_1__* interface; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_2__ desc; } ;
struct TYPE_3__ {struct usb_host_interface* cur_altsetting; } ;



__attribute__((used)) static u8 FUNC_0(struct usb_serial *VAR_0)
{
 struct usb_host_interface *VAR_1;

 VAR_1 = VAR_0->interface->cur_altsetting;

 return VAR_1->desc.bInterfaceNumber;
}
