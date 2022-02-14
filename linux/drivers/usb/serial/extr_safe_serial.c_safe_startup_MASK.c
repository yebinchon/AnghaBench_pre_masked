
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_serial {TYPE_4__* interface; TYPE_2__* dev; } ;
struct usb_interface_descriptor {scalar_t__ bInterfaceClass; scalar_t__ bInterfaceSubClass; int bInterfaceProtocol; } ;
struct TYPE_8__ {TYPE_3__* cur_altsetting; } ;
struct TYPE_7__ {struct usb_interface_descriptor desc; } ;
struct TYPE_5__ {scalar_t__ bDeviceClass; } ;
struct TYPE_6__ {TYPE_1__ descriptor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;


 int VAR_5 ;

__attribute__((used)) static int FUNC_0(struct usb_serial *VAR_6)
{
 struct usb_interface_descriptor *VAR_7;

 if (VAR_6->dev->descriptor.bDeviceClass != VAR_0)
  return -VAR_2;

 VAR_7 = &VAR_6->interface->cur_altsetting->desc;

 if (VAR_7->bInterfaceClass != VAR_3)
  return -VAR_2;
 if (VAR_7->bInterfaceSubClass != VAR_4)
  return -VAR_2;

 switch (VAR_7->bInterfaceProtocol) {
 case 129:
  break;
 case 128:
  VAR_5 = 1;
  break;
 default:
  return -VAR_1;
 }
 return 0;
}
