
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_3__* endpoint; TYPE_2__ desc; } ;
struct usb_endpoint_descriptor {scalar_t__ bEndpointAddress; } ;
struct kvaser_usb {struct usb_endpoint_descriptor* bulk_out; struct usb_endpoint_descriptor* bulk_in; TYPE_1__* intf; } ;
struct TYPE_6__ {struct usb_endpoint_descriptor desc; } ;
struct TYPE_4__ {struct usb_host_interface* altsetting; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_1 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static int FUNC_2(struct kvaser_usb *VAR_3)
{
 const struct usb_host_interface *VAR_4;
 struct usb_endpoint_descriptor *VAR_5;
 int VAR_6;

 VAR_4 = &VAR_3->intf->altsetting[0];

 for (VAR_6 = 0; VAR_6 < VAR_4->desc.bNumEndpoints; ++VAR_6) {
  VAR_5 = &VAR_4->endpoint[VAR_6].desc;

  if (!VAR_3->bulk_in && FUNC_0(VAR_5) &&
      VAR_5->bEndpointAddress == VAR_1)
   VAR_3->bulk_in = VAR_5;

  if (!VAR_3->bulk_out && FUNC_1(VAR_5) &&
      VAR_5->bEndpointAddress == VAR_2)
   VAR_3->bulk_out = VAR_5;

  if (VAR_3->bulk_in && VAR_3->bulk_out)
   return 0;
 }

 return -VAR_0;
}
