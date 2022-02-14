
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int quirks; } ;
struct usb_hcd {int dummy; } ;


 int VAR_0 ;
 struct xhci_hcd* FUNC_0 (struct usb_hcd*) ;

int FUNC_1(struct usb_hcd *VAR_1)
{
 struct xhci_hcd *VAR_2 = FUNC_0(VAR_1);


 VAR_2->quirks |= VAR_0;

 return 0;
}
