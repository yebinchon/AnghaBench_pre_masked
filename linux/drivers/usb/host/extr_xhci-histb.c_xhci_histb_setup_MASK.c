
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd_histb {int dummy; } ;
struct usb_hcd {int dummy; } ;


 struct xhci_hcd_histb* FUNC_0 (struct usb_hcd*) ;
 scalar_t__ FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct usb_hcd*,int ) ;
 int FUNC_3 (struct xhci_hcd_histb*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct usb_hcd *VAR_1)
{
 struct xhci_hcd_histb *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 if (FUNC_1(VAR_1)) {
  VAR_3 = FUNC_3(VAR_2);
  if (VAR_3)
   return VAR_3;
 }

 return FUNC_2(VAR_1, VAR_0);
}
