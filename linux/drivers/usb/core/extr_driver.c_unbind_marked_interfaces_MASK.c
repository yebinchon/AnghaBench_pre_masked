
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ driver; } ;
struct usb_interface {scalar_t__ needs_binding; TYPE_2__ dev; } ;
struct TYPE_3__ {int bNumInterfaces; } ;
struct usb_host_config {struct usb_interface** interface; TYPE_1__ desc; } ;
struct usb_device {struct usb_host_config* actconfig; } ;


 int FUNC_0 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_1(struct usb_device *VAR_0)
{
 struct usb_host_config *VAR_1;
 int VAR_2;
 struct usb_interface *VAR_3;

 VAR_1 = VAR_0->actconfig;
 if (VAR_1) {
  for (VAR_2 = 0; VAR_2 < VAR_1->desc.bNumInterfaces; ++VAR_2) {
   VAR_3 = VAR_1->interface[VAR_2];
   if (VAR_3->dev.driver && VAR_3->needs_binding)
    FUNC_0(VAR_3);
  }
 }
}
