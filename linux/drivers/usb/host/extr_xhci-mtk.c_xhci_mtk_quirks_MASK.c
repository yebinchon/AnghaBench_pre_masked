
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd_mtk {scalar_t__ lpm_support; } ;
struct xhci_hcd {int quirks; } ;
struct usb_hcd {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct xhci_hcd_mtk* FUNC_0 (struct usb_hcd*) ;
 struct usb_hcd* FUNC_1 (struct xhci_hcd*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_4, struct xhci_hcd *VAR_5)
{
 struct usb_hcd *VAR_6 = FUNC_1(VAR_5);
 struct xhci_hcd_mtk *VAR_7 = FUNC_0(VAR_6);






 VAR_5->quirks |= VAR_2;
 VAR_5->quirks |= VAR_1;




 VAR_5->quirks |= VAR_3;
 if (VAR_7->lpm_support)
  VAR_5->quirks |= VAR_0;
}
