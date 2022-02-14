
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd_mtk {int dummy; } ;
struct usb_hcd {int dummy; } ;


 struct xhci_hcd_mtk* FUNC_0 (struct usb_hcd*) ;
 scalar_t__ FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct usb_hcd*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct xhci_hcd_mtk*) ;
 int FUNC_4 (struct xhci_hcd_mtk*) ;

__attribute__((used)) static int FUNC_5(struct usb_hcd *VAR_1)
{
 struct xhci_hcd_mtk *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 if (FUNC_1(VAR_1)) {
  VAR_3 = FUNC_4(VAR_2);
  if (VAR_3)
   return VAR_3;
 }

 VAR_3 = FUNC_2(VAR_1, VAR_0);
 if (VAR_3)
  return VAR_3;

 if (FUNC_1(VAR_1)) {
  VAR_3 = FUNC_3(VAR_2);
  if (VAR_3)
   return VAR_3;
 }

 return VAR_3;
}
