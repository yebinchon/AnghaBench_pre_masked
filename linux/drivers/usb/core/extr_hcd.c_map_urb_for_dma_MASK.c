
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {TYPE_1__* driver; } ;
struct urb {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {int (* map_urb_for_dma ) (struct usb_hcd*,struct urb*,int ) ;} ;


 int FUNC_0 (struct usb_hcd*,struct urb*,int ) ;
 int FUNC_1 (struct usb_hcd*,struct urb*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_hcd *VAR_0, struct urb *VAR_1,
      gfp_t VAR_2)
{
 if (VAR_0->driver->map_urb_for_dma)
  return VAR_0->driver->map_urb_for_dma(VAR_0, VAR_1, VAR_2);
 else
  return FUNC_1(VAR_0, VAR_1, VAR_2);
}
