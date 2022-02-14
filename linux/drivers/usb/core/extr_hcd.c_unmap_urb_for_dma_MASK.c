
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {TYPE_1__* driver; } ;
struct urb {int dummy; } ;
struct TYPE_2__ {int (* unmap_urb_for_dma ) (struct usb_hcd*,struct urb*) ;} ;


 int FUNC_0 (struct usb_hcd*,struct urb*) ;
 int FUNC_1 (struct usb_hcd*,struct urb*) ;

__attribute__((used)) static void FUNC_2(struct usb_hcd *VAR_0, struct urb *VAR_1)
{
 if (VAR_0->driver->unmap_urb_for_dma)
  VAR_0->driver->unmap_urb_for_dma(VAR_0, VAR_1);
 else
  FUNC_1(VAR_0, VAR_1);
}
