
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct TYPE_2__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct exynos_ohci_hcd {int clk; int of_node; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 struct usb_hcd* FUNC_2 (struct platform_device*) ;
 struct exynos_ohci_hcd* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_2(VAR_0);
 struct exynos_ohci_hcd *VAR_2 = FUNC_3(VAR_1);

 VAR_0->dev.of_node = VAR_2->of_node;

 FUNC_5(VAR_1);

 FUNC_1(&VAR_0->dev);

 FUNC_0(VAR_2->clk);

 FUNC_4(VAR_1);

 return 0;
}
