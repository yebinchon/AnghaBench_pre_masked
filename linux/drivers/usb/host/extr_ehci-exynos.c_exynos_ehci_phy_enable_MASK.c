
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct exynos_ehci_hcd {int * phy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct usb_hcd* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct exynos_ehci_hcd* FUNC_4 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1)
{
 struct usb_hcd *VAR_2 = FUNC_1(VAR_1);
 struct exynos_ehci_hcd *VAR_3 = FUNC_4(VAR_2);
 int VAR_4;
 int VAR_5 = 0;

 for (VAR_4 = 0; VAR_5 == 0 && VAR_4 < VAR_0; VAR_4++)
  if (!FUNC_0(VAR_3->phy[VAR_4]))
   VAR_5 = FUNC_3(VAR_3->phy[VAR_4]);
 if (VAR_5)
  for (VAR_4--; VAR_4 >= 0; VAR_4--)
   if (!FUNC_0(VAR_3->phy[VAR_4]))
    FUNC_2(VAR_3->phy[VAR_4]);

 return VAR_5;
}
