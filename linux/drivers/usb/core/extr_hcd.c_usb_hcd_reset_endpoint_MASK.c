
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_host_endpoint {int desc; } ;
struct usb_hcd {TYPE_1__* driver; } ;
struct usb_device {int bus; } ;
struct TYPE_2__ {int (* endpoint_reset ) (struct usb_hcd*,struct usb_host_endpoint*) ;} ;


 struct usb_hcd* FUNC_0 (int ) ;
 int FUNC_1 (struct usb_hcd*,struct usb_host_endpoint*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usb_device*,int,int,int ) ;

void FUNC_6(struct usb_device *VAR_0,
       struct usb_host_endpoint *VAR_1)
{
 struct usb_hcd *VAR_2 = FUNC_0(VAR_0->bus);

 if (VAR_2->driver->endpoint_reset)
  VAR_2->driver->endpoint_reset(VAR_2, VAR_1);
 else {
  int VAR_3 = FUNC_3(&VAR_1->desc);
  int VAR_4 = FUNC_2(&VAR_1->desc);
  int VAR_5 = FUNC_4(&VAR_1->desc);

  FUNC_5(VAR_0, VAR_3, VAR_4, 0);
  if (VAR_5)
   FUNC_5(VAR_0, VAR_3, !VAR_4, 0);
 }
}
