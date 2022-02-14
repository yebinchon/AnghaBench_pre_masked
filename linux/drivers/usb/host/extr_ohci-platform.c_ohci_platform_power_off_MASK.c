
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct platform_device {int dummy; } ;
struct ohci_platform_priv {scalar_t__* clks; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct ohci_platform_priv* FUNC_1 (struct usb_hcd*) ;
 struct usb_hcd* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static void FUNC_3(struct platform_device *VAR_1)
{
 struct usb_hcd *VAR_2 = FUNC_2(VAR_1);
 struct ohci_platform_priv *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 for (VAR_4 = VAR_0 - 1; VAR_4 >= 0; VAR_4--)
  if (VAR_3->clks[VAR_4])
   FUNC_0(VAR_3->clks[VAR_4]);
}
