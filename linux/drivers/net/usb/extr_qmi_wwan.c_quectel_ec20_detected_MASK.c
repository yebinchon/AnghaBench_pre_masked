
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct TYPE_4__ {int idProduct; int idVendor; } ;
struct usb_device {TYPE_3__* actconfig; TYPE_1__ descriptor; } ;
struct TYPE_5__ {int bNumInterfaces; } ;
struct TYPE_6__ {TYPE_2__ desc; } ;


 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct usb_interface *VAR_0)
{
 struct usb_device *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->actconfig &&
     FUNC_1(VAR_1->descriptor.idVendor) == 0x05c6 &&
     FUNC_1(VAR_1->descriptor.idProduct) == 0x9215 &&
     VAR_1->actconfig->desc.bNumInterfaces == 5)
  return 1;

 return 0;
}
