
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* altsetting; } ;
struct TYPE_3__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;





__attribute__((used)) static int FUNC_0(struct usb_interface *VAR_1)
{
 struct usb_host_interface *VAR_2;
 int VAR_3;

 VAR_2 = VAR_1->altsetting;


 for (VAR_3 = 0; VAR_3 < VAR_2->desc.bNumEndpoints; VAR_3++) {
  struct usb_endpoint_descriptor *VAR_4 = &VAR_2->endpoint[VAR_3].desc;

  switch (VAR_4->bEndpointAddress) {
  case 130:
  case 131:
  case 128:
  case 129:
   break;
  default:
   return -VAR_0;
  }
 }

 return 0;
}
