
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_3__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int bEndpointAddress; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static struct usb_endpoint_descriptor *FUNC_1(struct usb_interface *VAR_1,
        int VAR_2, int VAR_3)
{
 int VAR_4;
 struct usb_host_interface *VAR_5 = VAR_1->cur_altsetting;
 struct usb_endpoint_descriptor *VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_5->desc.bNumEndpoints; VAR_4++) {
  VAR_6 = &VAR_5->endpoint[VAR_4].desc;
  if (((VAR_6->bEndpointAddress & VAR_0) == VAR_3) &&
      (FUNC_0(VAR_6) == VAR_2))
   return VAR_6;
 }

 return ((void*)0);
}
