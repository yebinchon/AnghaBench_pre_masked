
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct urb {TYPE_1__* ep; } ;
struct max3421_hcd {struct urb* curr_urb; } ;
struct max3421_ep {int retransmit; } ;
struct TYPE_2__ {struct max3421_ep* hcpriv; } ;


 struct max3421_hcd* FUNC_0 (struct usb_hcd*) ;

__attribute__((used)) static void
FUNC_1(struct usb_hcd *VAR_0)
{
 struct max3421_hcd *VAR_1 = FUNC_0(VAR_0);
 struct urb *VAR_2 = VAR_1->curr_urb;
 struct max3421_ep *VAR_3;

 VAR_3 = VAR_2->ep->hcpriv;
 VAR_3->retransmit = 1;
 VAR_1->curr_urb = ((void*)0);
}
