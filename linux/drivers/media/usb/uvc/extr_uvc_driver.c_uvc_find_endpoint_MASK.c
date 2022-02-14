
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_3__ {unsigned int bNumEndpoints; } ;
struct usb_host_interface {struct usb_host_endpoint* endpoint; TYPE_1__ desc; } ;
struct TYPE_4__ {scalar_t__ bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_2__ desc; } ;



struct usb_host_endpoint *FUNC_0(struct usb_host_interface *VAR_0,
  u8 VAR_1)
{
 struct usb_host_endpoint *VAR_2;
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->desc.bNumEndpoints; ++VAR_3) {
  VAR_2 = &VAR_0->endpoint[VAR_3];
  if (VAR_2->desc.bEndpointAddress == VAR_1)
   return VAR_2;
 }

 return ((void*)0);
}
