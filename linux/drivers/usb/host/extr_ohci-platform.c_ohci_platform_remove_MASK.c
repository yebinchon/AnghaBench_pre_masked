
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct usb_ohci_pdata {int (* power_off ) (struct platform_device*) ;} ;
struct usb_hcd {int dummy; } ;
struct TYPE_5__ {int * platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct ohci_platform_priv {scalar_t__* clks; int resets; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct usb_ohci_pdata* FUNC_1 (TYPE_1__*) ;
 struct ohci_platform_priv* FUNC_2 (struct usb_hcd*) ;
 struct usb_ohci_pdata VAR_1 ;
 struct usb_hcd* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct platform_device*) ;
 int FUNC_9 (struct usb_hcd*) ;
 int FUNC_10 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_2)
{
 struct usb_hcd *VAR_3 = FUNC_3(VAR_2);
 struct usb_ohci_pdata *VAR_4 = FUNC_1(&VAR_2->dev);
 struct ohci_platform_priv *VAR_5 = FUNC_2(VAR_3);
 int VAR_6;

 FUNC_5(&VAR_2->dev);
 FUNC_10(VAR_3);

 if (VAR_4->power_off)
  VAR_4->power_off(VAR_2);

 FUNC_7(VAR_5->resets);

 for (VAR_6 = 0; VAR_6 < VAR_0 && VAR_5->clks[VAR_6]; VAR_6++)
  FUNC_0(VAR_5->clks[VAR_6]);

 FUNC_9(VAR_3);

 FUNC_6(&VAR_2->dev);
 FUNC_4(&VAR_2->dev);

 if (VAR_4 == &VAR_1)
  VAR_2->dev.platform_data = ((void*)0);

 return 0;
}
