
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {scalar_t__ ep_devs_created; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_2__ {int bNumEndpoints; } ;
struct usb_host_interface {int * endpoint; TYPE_1__ desc; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct usb_interface *VAR_0)
{
 struct usb_host_interface *VAR_1 = VAR_0->cur_altsetting;
 int VAR_2;

 if (!VAR_0->ep_devs_created)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->desc.bNumEndpoints; ++VAR_2)
  FUNC_0(&VAR_1->endpoint[VAR_2]);
 VAR_0->ep_devs_created = 0;
}
