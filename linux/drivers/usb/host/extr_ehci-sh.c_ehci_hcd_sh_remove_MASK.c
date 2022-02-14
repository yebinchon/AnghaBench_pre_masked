
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct platform_device {int dummy; } ;
struct ehci_sh_priv {int iclk; int fclk; struct usb_hcd* hcd; } ;


 int FUNC_0 (int ) ;
 struct ehci_sh_priv* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct ehci_sh_priv *VAR_1 = FUNC_1(VAR_0);
 struct usb_hcd *VAR_2 = VAR_1->hcd;

 FUNC_3(VAR_2);
 FUNC_2(VAR_2);

 FUNC_0(VAR_1->fclk);
 FUNC_0(VAR_1->iclk);

 return 0;
}
