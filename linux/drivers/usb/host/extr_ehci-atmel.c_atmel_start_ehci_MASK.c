
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct platform_device {int dev; } ;
struct atmel_ehci_priv {int dummy; } ;


 int FUNC_0 (struct atmel_ehci_priv*) ;
 int FUNC_1 (int *,char*) ;
 struct atmel_ehci_priv* FUNC_2 (struct usb_hcd*) ;
 struct usb_hcd* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static void FUNC_4(struct platform_device *VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_3(VAR_0);
 struct atmel_ehci_priv *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(&VAR_0->dev, "start\n");
 FUNC_0(VAR_2);
}
