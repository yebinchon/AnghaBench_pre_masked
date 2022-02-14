
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int dummy; } ;
struct usb_hcd {scalar_t__ hcd_priv; struct usb_hcd* primary_hcd; } ;


 scalar_t__ FUNC_0 (struct usb_hcd*) ;

__attribute__((used)) static inline struct xhci_hcd *FUNC_1(struct usb_hcd *VAR_0)
{
 struct usb_hcd *VAR_1;

 if (FUNC_0(VAR_0))
  VAR_1 = VAR_0;
 else
  VAR_1 = VAR_0->primary_hcd;

 return (struct xhci_hcd *) (VAR_1->hcd_priv);
}
