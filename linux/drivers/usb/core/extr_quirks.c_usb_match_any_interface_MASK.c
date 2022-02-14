
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface_cache {scalar_t__ num_altsetting; struct usb_host_interface* altsetting; } ;
struct usb_host_interface {int dummy; } ;
struct TYPE_3__ {unsigned int bNumInterfaces; } ;
struct usb_host_config {struct usb_interface_cache** intf_cache; TYPE_1__ desc; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_4__ {unsigned int bNumConfigurations; } ;
struct usb_device {struct usb_host_config* config; TYPE_2__ descriptor; } ;


 scalar_t__ FUNC_0 (struct usb_device*,struct usb_host_interface*,struct usb_device_id const*) ;

__attribute__((used)) static bool FUNC_1(struct usb_device *VAR_0,
        const struct usb_device_id *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->descriptor.bNumConfigurations; ++VAR_2) {
  struct usb_host_config *VAR_3 = &VAR_0->config[VAR_2];
  unsigned int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_3->desc.bNumInterfaces; ++VAR_4) {
   struct usb_interface_cache *VAR_5;
   struct usb_host_interface *VAR_6;

   VAR_5 = VAR_3->intf_cache[VAR_4];
   if (VAR_5->num_altsetting == 0)
    continue;

   VAR_6 = &VAR_5->altsetting[0];
   if (FUNC_0(VAR_0, VAR_6, VAR_1))
    return 1;
  }
 }

 return 0;
}
