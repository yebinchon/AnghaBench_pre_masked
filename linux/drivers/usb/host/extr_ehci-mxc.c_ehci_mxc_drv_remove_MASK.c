
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct platform_device {int dev; } ;
struct mxc_usbh_platform_data {scalar_t__ otg; int (* exit ) (struct platform_device*) ;} ;
struct ehci_mxc_priv {scalar_t__ phyclk; scalar_t__ ahbclk; scalar_t__ usbclk; } ;
struct ehci_hcd {scalar_t__ priv; } ;


 int FUNC_0 (scalar_t__) ;
 struct mxc_usbh_platform_data* FUNC_1 (int *) ;
 struct ehci_hcd* FUNC_2 (struct usb_hcd*) ;
 struct usb_hcd* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct mxc_usbh_platform_data *VAR_1 = FUNC_1(&VAR_0->dev);
 struct usb_hcd *VAR_2 = FUNC_3(VAR_0);
 struct ehci_hcd *VAR_3 = FUNC_2(VAR_2);
 struct ehci_mxc_priv *VAR_4 = (struct ehci_mxc_priv *) VAR_3->priv;

 FUNC_7(VAR_2);

 if (VAR_1 && VAR_1->exit)
  VAR_1->exit(VAR_0);

 if (VAR_1 && VAR_1->otg)
  FUNC_5(VAR_1->otg);

 FUNC_0(VAR_4->usbclk);
 FUNC_0(VAR_4->ahbclk);

 if (VAR_4->phyclk)
  FUNC_0(VAR_4->phyclk);

 FUNC_6(VAR_2);
 return 0;
}
