
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd_mtk {struct usb_hcd* hcd; } ;
struct xhci_hcd {struct usb_hcd* shared_hcd; } ;
struct usb_hcd {int dummy; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,int) ;
 struct xhci_hcd* FUNC_1 (struct usb_hcd*) ;
 struct xhci_hcd_mtk* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 (struct xhci_hcd_mtk*) ;
 int FUNC_8 (struct xhci_hcd_mtk*) ;
 int FUNC_9 (struct xhci_hcd_mtk*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_0)
{
 struct xhci_hcd_mtk *VAR_1 = FUNC_2(VAR_0);
 struct usb_hcd *VAR_2 = VAR_1->hcd;
 struct xhci_hcd *VAR_3 = FUNC_1(VAR_2);
 struct usb_hcd *VAR_4 = VAR_3->shared_hcd;

 FUNC_6(VAR_4);
 VAR_3->shared_hcd = ((void*)0);
 FUNC_0(&VAR_0->dev, 0);

 FUNC_6(VAR_2);
 FUNC_5(VAR_4);
 FUNC_5(VAR_2);
 FUNC_9(VAR_1);
 FUNC_7(VAR_1);
 FUNC_8(VAR_1);
 FUNC_4(&VAR_0->dev);
 FUNC_3(&VAR_0->dev);

 return 0;
}
