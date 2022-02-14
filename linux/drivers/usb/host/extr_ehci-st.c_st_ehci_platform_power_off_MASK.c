
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct st_ehci_platform_priv {scalar_t__* clks; int phy; int rst; int pwr; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct st_ehci_platform_priv* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct usb_hcd* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct platform_device *VAR_1)
{
 struct usb_hcd *VAR_2 = FUNC_4(VAR_1);
 struct st_ehci_platform_priv *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 FUNC_5(VAR_3->pwr);

 FUNC_5(VAR_3->rst);

 FUNC_3(VAR_3->phy);

 FUNC_2(VAR_3->phy);

 for (VAR_4 = VAR_0 - 1; VAR_4 >= 0; VAR_4--)
  if (VAR_3->clks[VAR_4])
   FUNC_0(VAR_3->clks[VAR_4]);

}
