
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hub {int dummy; } ;
struct xhci_hcd {struct xhci_hub usb2_rhub; struct xhci_hub usb3_rhub; } ;
struct usb_hcd {scalar_t__ speed; } ;


 scalar_t__ VAR_0 ;
 struct xhci_hcd* FUNC_0 (struct usb_hcd*) ;

struct xhci_hub *FUNC_1(struct usb_hcd *VAR_1)
{
 struct xhci_hcd *VAR_2 = FUNC_0(VAR_1);

 if (VAR_1->speed >= VAR_0)
  return &VAR_2->usb3_rhub;
 return &VAR_2->usb2_rhub;
}
