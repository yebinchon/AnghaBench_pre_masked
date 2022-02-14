
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct kvaser_usb {struct usb_endpoint_descriptor* bulk_out; struct usb_endpoint_descriptor* bulk_in; TYPE_3__* intf; } ;
struct TYPE_6__ {struct usb_host_interface* altsetting; } ;
struct TYPE_5__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_1 (struct usb_endpoint_descriptor*) ;

__attribute__((used)) static int FUNC_2(struct kvaser_usb *VAR_1)
{
 const struct usb_host_interface *VAR_2;
 struct usb_endpoint_descriptor *VAR_3;
 int VAR_4;

 VAR_2 = &VAR_1->intf->altsetting[0];

 for (VAR_4 = 0; VAR_4 < VAR_2->desc.bNumEndpoints; ++VAR_4) {
  VAR_3 = &VAR_2->endpoint[VAR_4].desc;

  if (!VAR_1->bulk_in && FUNC_0(VAR_3))
   VAR_1->bulk_in = VAR_3;

  if (!VAR_1->bulk_out && FUNC_1(VAR_3))
   VAR_1->bulk_out = VAR_3;


  if (VAR_1->bulk_in && VAR_1->bulk_out)
   return 0;
 }

 return -VAR_0;
}
