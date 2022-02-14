
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int ep_devs_created; int dev; scalar_t__ unregistering; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_2__ {int bNumEndpoints; } ;
struct usb_host_interface {int * endpoint; TYPE_1__ desc; } ;
struct usb_device {int dummy; } ;


 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (int *,int *,struct usb_device*) ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_0)
{
 struct usb_device *VAR_1 = FUNC_0(VAR_0);
 struct usb_host_interface *VAR_2 = VAR_0->cur_altsetting;
 int VAR_3;

 if (VAR_0->ep_devs_created || VAR_0->unregistering)
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->desc.bNumEndpoints; ++VAR_3)
  (void) FUNC_1(&VAR_0->dev, &VAR_2->endpoint[VAR_3], VAR_1);
 VAR_0->ep_devs_created = 1;
 return 0;
}
