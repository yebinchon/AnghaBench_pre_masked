
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct urb {TYPE_1__* ep; } ;
struct TYPE_2__ {int desc; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_hcd*,struct urb*) ;
 int FUNC_1 (struct usb_hcd*,struct urb*) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4 (struct usb_hcd *VAR_1, struct urb *VAR_2)
{
 if (FUNC_3(&VAR_2->ep->desc))
  return FUNC_1 (VAR_1, VAR_2);
 if (FUNC_2(&VAR_2->ep->desc))
  return FUNC_0 (VAR_1, VAR_2);
 return -VAR_0;
}
