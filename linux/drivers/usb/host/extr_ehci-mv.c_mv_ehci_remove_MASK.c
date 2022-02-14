
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {scalar_t__ rh_registered; } ;
struct platform_device {int dummy; } ;
struct ehci_hcd_mv {scalar_t__ mode; int (* set_vbus ) (int ) ;TYPE_1__* otg; } ;
struct TYPE_2__ {int otg; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 struct ehci_hcd_mv* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct ehci_hcd_mv*) ;
 int FUNC_3 (int ,int *) ;
 struct usb_hcd* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct usb_hcd *VAR_2 = FUNC_4(VAR_1);
 struct ehci_hcd_mv *VAR_3 = FUNC_1(VAR_2);

 if (VAR_2->rh_registered)
  FUNC_7(VAR_2);

 if (!FUNC_0(VAR_3->otg))
  FUNC_3(VAR_3->otg->otg, ((void*)0));

 if (VAR_3->mode == VAR_0) {
  if (VAR_3->set_vbus)
   VAR_3->set_vbus(0);

  FUNC_2(VAR_3);
 }

 FUNC_6(VAR_2);

 return 0;
}
