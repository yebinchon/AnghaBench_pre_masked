
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bNumEndpoints; } ;
struct usb_host_interface {struct usb_host_endpoint* endpoint; TYPE_1__ desc; } ;
struct TYPE_4__ {int bmAttributes; scalar_t__ wMaxPacketSize; int bEndpointAddress; } ;
struct usb_host_endpoint {TYPE_2__ desc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static struct usb_host_endpoint *FUNC_1(struct usb_host_interface *VAR_1,
       int VAR_2, int VAR_3)
{
 struct usb_host_endpoint *VAR_4;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1->desc.bNumEndpoints; VAR_5++) {
  VAR_4 = &VAR_1->endpoint[VAR_5];
  VAR_6 = VAR_4->desc.bmAttributes & VAR_0;
  if (VAR_6 == VAR_2
      && VAR_4->desc.wMaxPacketSize != 0
      && FUNC_0(&VAR_4->desc)
      && (VAR_3 < 0 || VAR_4->desc.bEndpointAddress == VAR_3))
   return VAR_4;
 }
 return ((void*)0);
}
