
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct omap_hcd {int nports; scalar_t__* phy; } ;
struct TYPE_2__ {scalar_t__ priv; } ;


 struct usb_hcd* FUNC_0 (struct device*) ;
 TYPE_1__* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct usb_hcd *VAR_2 = FUNC_0(VAR_1);
 struct omap_hcd *VAR_3 = (struct omap_hcd *)FUNC_1(VAR_2)->priv;
 int VAR_4;

 FUNC_6(VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_3->nports; VAR_4++) {
  if (VAR_3->phy[VAR_4])
   FUNC_4(VAR_3->phy[VAR_4]);
 }

 FUNC_5(VAR_2);
 FUNC_3(VAR_1);
 FUNC_2(VAR_1);

 return 0;
}
