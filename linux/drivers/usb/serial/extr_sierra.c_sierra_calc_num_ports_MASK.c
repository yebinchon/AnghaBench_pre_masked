
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct usb_serial_endpoints {int dummy; } ;
struct usb_serial {TYPE_3__* interface; } ;
struct TYPE_6__ {TYPE_2__* cur_altsetting; } ;
struct TYPE_4__ {int bInterfaceNumber; int bNumEndpoints; } ;
struct TYPE_5__ {TYPE_1__ desc; } ;



__attribute__((used)) static int FUNC_0(struct usb_serial *VAR_0,
     struct usb_serial_endpoints *VAR_1)
{
 int VAR_2 = 0;
 u8 VAR_3, VAR_4;

 VAR_3 = VAR_0->interface->cur_altsetting->desc.bInterfaceNumber;
 VAR_4 = VAR_0->interface->cur_altsetting->desc.bNumEndpoints;


 if (VAR_3 == 0x99)
  VAR_2 = 0;
 else if (VAR_4 <= 3)
  VAR_2 = 1;
 else
  VAR_2 = (VAR_4-1)/2;
 return VAR_2;
}
