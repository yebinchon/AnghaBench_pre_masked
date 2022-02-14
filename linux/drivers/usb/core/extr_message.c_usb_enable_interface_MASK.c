
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_2__ {int bNumEndpoints; } ;
struct usb_host_interface {int * endpoint; TYPE_1__ desc; } ;
struct usb_device {int dummy; } ;


 int FUNC_0 (struct usb_device*,int *,int) ;

void FUNC_1(struct usb_device *VAR_0,
  struct usb_interface *VAR_1, bool VAR_2)
{
 struct usb_host_interface *VAR_3 = VAR_1->cur_altsetting;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->desc.bNumEndpoints; ++VAR_4)
  FUNC_0(VAR_0, &VAR_3->endpoint[VAR_4], VAR_2);
}
