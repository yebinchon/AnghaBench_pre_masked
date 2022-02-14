
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_host_endpoint {int dummy; } ;
struct usb_hcd {TYPE_1__* driver; } ;
struct usb_device {int bus; } ;
struct TYPE_2__ {int (* endpoint_disable ) (struct usb_hcd*,struct usb_host_endpoint*) ;} ;


 struct usb_hcd* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct usb_hcd*,struct usb_host_endpoint*) ;

void FUNC_3(struct usb_device *VAR_0,
  struct usb_host_endpoint *VAR_1)
{
 struct usb_hcd *VAR_2;

 FUNC_1();
 VAR_2 = FUNC_0(VAR_0->bus);
 if (VAR_2->driver->endpoint_disable)
  VAR_2->driver->endpoint_disable(VAR_2, VAR_1);
}
