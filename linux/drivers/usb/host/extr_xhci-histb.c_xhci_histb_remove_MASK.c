
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd_histb {struct usb_hcd* hcd; } ;
struct xhci_hcd {struct usb_hcd* shared_hcd; int xhc_state; } ;
struct usb_hcd {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct xhci_hcd* FUNC_1 (struct usb_hcd*) ;
 struct xhci_hcd_histb* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 (struct xhci_hcd_histb*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct xhci_hcd_histb *VAR_2 = FUNC_2(VAR_1);
 struct usb_hcd *VAR_3 = VAR_2->hcd;
 struct xhci_hcd *VAR_4 = FUNC_1(VAR_3);
 struct usb_hcd *VAR_5 = VAR_4->shared_hcd;

 VAR_4->xhc_state |= VAR_0;

 FUNC_6(VAR_5);
 VAR_4->shared_hcd = ((void*)0);
 FUNC_0(&VAR_1->dev);

 FUNC_6(VAR_3);
 FUNC_5(VAR_5);

 FUNC_7(VAR_2);
 FUNC_5(VAR_3);
 FUNC_4(&VAR_1->dev);
 FUNC_3(&VAR_1->dev);

 return 0;
}
