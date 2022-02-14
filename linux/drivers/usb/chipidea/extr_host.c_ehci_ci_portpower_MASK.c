
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device* controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct ehci_hcd {int hcs_params; scalar_t__ priv; } ;
struct ehci_ci_priv {scalar_t__ reg_vbus; } ;
struct device {int dummy; } ;
struct ci_hdrc {TYPE_2__* platdata; } ;
struct TYPE_4__ {scalar_t__ phy_mode; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct device*,char*,char*,int) ;
 struct ci_hdrc* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 struct ehci_hcd* FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (struct ci_hdrc*,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct usb_hcd *VAR_1, int VAR_2, bool VAR_3)
{
 struct ehci_hcd *VAR_4 = FUNC_4(VAR_1);
 struct ehci_ci_priv *VAR_5 = (struct ehci_ci_priv *)VAR_4->priv;
 struct device *VAR_6 = VAR_1->self.controller;
 struct ci_hdrc *VAR_7 = FUNC_2(VAR_6);
 int VAR_8 = 0;
 int VAR_9 = FUNC_0(VAR_4->hcs_params);

 if (VAR_5->reg_vbus) {
  if (VAR_9 > 1) {
   FUNC_3(VAR_6,
    "Not support multi-port regulator control\n");
   return 0;
  }
  if (VAR_3)
   VAR_8 = FUNC_7(VAR_5->reg_vbus);
  else
   VAR_8 = FUNC_6(VAR_5->reg_vbus);
  if (VAR_8) {
   FUNC_1(VAR_6,
    "Failed to %s vbus regulator, ret=%d\n",
    VAR_3 ? "enable" : "disable", VAR_8);
   return VAR_8;
  }
 }

 if (VAR_3 && (VAR_7->platdata->phy_mode == VAR_0)) {




  FUNC_5(VAR_7, 5);
  FUNC_5(VAR_7, 0);
 }
 return 0;
}
