
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_serial {TYPE_1__* interface; } ;
struct TYPE_5__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_3__* endpoint; TYPE_2__ desc; } ;
typedef struct usb_endpoint_descriptor {int bEndpointAddress; } const usb_endpoint_descriptor ;
struct TYPE_6__ {struct usb_endpoint_descriptor const desc; } ;
struct TYPE_4__ {int dev; struct usb_host_interface* cur_altsetting; } ;


 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static struct usb_endpoint_descriptor const *FUNC_1(struct usb_serial const *VAR_0,
           int VAR_1)
{
 struct usb_host_interface *VAR_2;
 struct usb_endpoint_descriptor *VAR_3;
 int VAR_4;

 VAR_2 = VAR_0->interface->cur_altsetting;
 for (VAR_4 = 0; VAR_4 < VAR_2->desc.bNumEndpoints; ++VAR_4) {
  VAR_3 = &VAR_2->endpoint[VAR_4].desc;
  if (VAR_3->bEndpointAddress == VAR_1)
   return VAR_3;
 }
 FUNC_0(&VAR_0->interface->dev, "found no endpoint descriptor for endpoint %x\n",
   VAR_1);
 return ((void*)0);
}
