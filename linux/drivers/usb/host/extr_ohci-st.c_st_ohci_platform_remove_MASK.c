
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ohci_pdata {int (* power_off ) (struct platform_device*) ;} ;
struct usb_hcd {int dummy; } ;
struct st_ohci_platform_priv {scalar_t__* clks; } ;
struct TYPE_2__ {int * platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct usb_ohci_pdata* FUNC_1 (TYPE_1__*) ;
 struct st_ohci_platform_priv* FUNC_2 (struct usb_hcd*) ;
 struct usb_ohci_pdata VAR_1 ;
 struct usb_hcd* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct usb_hcd *VAR_3 = FUNC_3(VAR_2);
 struct usb_ohci_pdata *VAR_4 = FUNC_1(&VAR_2->dev);
 struct st_ohci_platform_priv *VAR_5 = FUNC_2(VAR_3);
 int VAR_6;

 FUNC_6(VAR_3);

 if (VAR_4->power_off)
  VAR_4->power_off(VAR_2);


 for (VAR_6 = 0; VAR_6 < VAR_0 && VAR_5->clks[VAR_6]; VAR_6++)
  FUNC_0(VAR_5->clks[VAR_6]);

 FUNC_5(VAR_3);

 if (VAR_4 == &VAR_1)
  VAR_2->dev.platform_data = ((void*)0);

 return 0;
}
