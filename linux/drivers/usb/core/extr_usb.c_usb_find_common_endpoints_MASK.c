
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct usb_endpoint_descriptor*,struct usb_endpoint_descriptor**,struct usb_endpoint_descriptor**,struct usb_endpoint_descriptor**,struct usb_endpoint_descriptor**) ;

int FUNC_1(struct usb_host_interface *VAR_1,
  struct usb_endpoint_descriptor **VAR_2,
  struct usb_endpoint_descriptor **VAR_3,
  struct usb_endpoint_descriptor **VAR_4,
  struct usb_endpoint_descriptor **VAR_5)
{
 struct usb_endpoint_descriptor *VAR_6;
 int VAR_7;

 if (VAR_2)
  *VAR_2 = ((void*)0);
 if (VAR_3)
  *VAR_3 = ((void*)0);
 if (VAR_4)
  *VAR_4 = ((void*)0);
 if (VAR_5)
  *VAR_5 = ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_1->desc.bNumEndpoints; ++VAR_7) {
  VAR_6 = &VAR_1->endpoint[VAR_7].desc;

  if (FUNC_0(VAR_6, VAR_2, VAR_3, VAR_4, VAR_5))
   return 0;
 }

 return -VAR_0;
}
