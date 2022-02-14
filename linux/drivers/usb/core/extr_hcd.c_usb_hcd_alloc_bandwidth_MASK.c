
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* altsetting; scalar_t__ resetting_device; } ;
struct TYPE_7__ {int bInterfaceNumber; int bNumEndpoints; } ;
struct usb_host_interface {struct usb_host_endpoint* endpoint; TYPE_3__ desc; } ;
struct usb_host_endpoint {int dummy; } ;
struct TYPE_5__ {int bNumInterfaces; } ;
struct usb_host_config {TYPE_2__** intf_cache; TYPE_1__ desc; } ;
struct usb_hcd {TYPE_4__* driver; } ;
struct usb_device {struct usb_host_endpoint** ep_in; struct usb_host_endpoint** ep_out; int bus; } ;
struct TYPE_8__ {int (* check_bandwidth ) (struct usb_hcd*,struct usb_device*) ;int (* drop_endpoint ) (struct usb_hcd*,struct usb_device*,struct usb_host_endpoint*) ;int (* add_endpoint ) (struct usb_hcd*,struct usb_device*,struct usb_host_endpoint*) ;int (* reset_bandwidth ) (struct usb_hcd*,struct usb_device*) ;} ;
struct TYPE_6__ {struct usb_host_interface* altsetting; } ;


 int VAR_0 ;
 struct usb_hcd* FUNC_0 (int ) ;
 int FUNC_1 (struct usb_hcd*,struct usb_device*,struct usb_host_endpoint*) ;
 int FUNC_2 (struct usb_hcd*,struct usb_device*) ;
 int FUNC_3 (struct usb_hcd*,struct usb_device*,struct usb_host_endpoint*) ;
 int FUNC_4 (struct usb_hcd*,struct usb_device*) ;
 int FUNC_5 (struct usb_hcd*,struct usb_device*,struct usb_host_endpoint*) ;
 int FUNC_6 (struct usb_hcd*,struct usb_device*,struct usb_host_endpoint*) ;
 int FUNC_7 (struct usb_hcd*,struct usb_device*,struct usb_host_endpoint*) ;
 int FUNC_8 (struct usb_hcd*,struct usb_device*,struct usb_host_endpoint*) ;
 int FUNC_9 (struct usb_hcd*,struct usb_device*,struct usb_host_endpoint*) ;
 int FUNC_10 (struct usb_hcd*,struct usb_device*) ;
 struct usb_host_interface* FUNC_11 (struct usb_interface*,int ) ;
 struct usb_host_interface* FUNC_12 (struct usb_host_config*,int,int ) ;
 struct usb_interface* FUNC_13 (struct usb_device*,int) ;

int FUNC_14(struct usb_device *VAR_1,
  struct usb_host_config *VAR_2,
  struct usb_host_interface *VAR_3,
  struct usb_host_interface *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 struct usb_host_interface *VAR_8 = ((void*)0);
 int VAR_9 = 0;
 struct usb_hcd *VAR_10;
 struct usb_host_endpoint *VAR_11;

 VAR_10 = FUNC_0(VAR_1->bus);
 if (!VAR_10->driver->check_bandwidth)
  return 0;


 if (!VAR_2 && !VAR_3) {
  for (VAR_6 = 1; VAR_6 < 16; ++VAR_6) {
   VAR_11 = VAR_1->ep_out[VAR_6];
   if (VAR_11)
    VAR_10->driver->drop_endpoint(VAR_10, VAR_1, VAR_11);
   VAR_11 = VAR_1->ep_in[VAR_6];
   if (VAR_11)
    VAR_10->driver->drop_endpoint(VAR_10, VAR_1, VAR_11);
  }
  VAR_10->driver->check_bandwidth(VAR_10, VAR_1);
  return 0;
 }





 if (VAR_2) {
  VAR_5 = VAR_2->desc.bNumInterfaces;



  for (VAR_6 = 1; VAR_6 < 16; ++VAR_6) {
   VAR_11 = VAR_1->ep_out[VAR_6];
   if (VAR_11) {
    VAR_9 = VAR_10->driver->drop_endpoint(VAR_10, VAR_1, VAR_11);
    if (VAR_9 < 0)
     goto reset;
   }
   VAR_11 = VAR_1->ep_in[VAR_6];
   if (VAR_11) {
    VAR_9 = VAR_10->driver->drop_endpoint(VAR_10, VAR_1, VAR_11);
    if (VAR_9 < 0)
     goto reset;
   }
  }
  for (VAR_6 = 0; VAR_6 < VAR_5; ++VAR_6) {
   struct usb_host_interface *VAR_12;
   int VAR_13;

   VAR_12 = &VAR_2->intf_cache[VAR_6]->altsetting[0];
   VAR_13 = VAR_12->desc.bInterfaceNumber;

   VAR_8 = FUNC_12(VAR_2, VAR_13, 0);
   if (!VAR_8)

    VAR_8 = VAR_12;

   for (VAR_7 = 0; VAR_7 < VAR_8->desc.bNumEndpoints; VAR_7++) {
    VAR_9 = VAR_10->driver->add_endpoint(VAR_10, VAR_1, &VAR_8->endpoint[VAR_7]);
    if (VAR_9 < 0)
     goto reset;
   }
  }
 }
 if (VAR_3 && VAR_4) {
  struct usb_interface *VAR_14 = FUNC_13(VAR_1,
    VAR_3->desc.bInterfaceNumber);

  if (!VAR_14)
   return -VAR_0;
  if (VAR_14->resetting_device) {
   VAR_3 = FUNC_11(VAR_14, 0);
   if (!VAR_3)
    VAR_3 = &VAR_14->altsetting[0];
  }


  for (VAR_6 = 0; VAR_6 < VAR_3->desc.bNumEndpoints; VAR_6++) {
   VAR_9 = VAR_10->driver->drop_endpoint(VAR_10, VAR_1,
     &VAR_3->endpoint[VAR_6]);
   if (VAR_9 < 0)
    goto reset;
  }

  for (VAR_6 = 0; VAR_6 < VAR_4->desc.bNumEndpoints; VAR_6++) {
   VAR_9 = VAR_10->driver->add_endpoint(VAR_10, VAR_1,
     &VAR_4->endpoint[VAR_6]);
   if (VAR_9 < 0)
    goto reset;
  }
 }
 VAR_9 = VAR_10->driver->check_bandwidth(VAR_10, VAR_1);
reset:
 if (VAR_9 < 0)
  VAR_10->driver->reset_bandwidth(VAR_10, VAR_1);
 return VAR_9;
}
