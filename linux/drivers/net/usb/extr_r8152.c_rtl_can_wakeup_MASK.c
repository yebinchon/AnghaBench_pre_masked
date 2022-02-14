
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {TYPE_2__* actconfig; } ;
struct r8152 {struct usb_device* udev; } ;
struct TYPE_3__ {int bmAttributes; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct r8152 *VAR_1)
{
 struct usb_device *VAR_2 = VAR_1->udev;

 return (VAR_2->actconfig->desc.bmAttributes & VAR_0);
}
