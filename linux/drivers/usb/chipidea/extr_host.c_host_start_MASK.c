
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct usb_otg {TYPE_2__* host; } ;
struct TYPE_9__ {int otg_port; } ;
struct usb_hcd {int has_tt; int skip_phy_initialization; TYPE_2__ self; scalar_t__ usb_phy; int tpl_support; int power_budget; int regs; int rsrc_len; int rsrc_start; } ;
struct ehci_hcd {scalar_t__ priv; int imx28_write_fix; int has_tdi_phy_lpm; int has_hostpc; int caps; } ;
struct ehci_ci_priv {int * reg_vbus; } ;
struct TYPE_8__ {int lpm; int cap; int abs; int size; int phys; } ;
struct ci_hdrc {TYPE_3__* platdata; struct usb_hcd* hcd; struct usb_otg otg; TYPE_4__* dev; int imx28_write_fix; TYPE_1__ hw_bank; scalar_t__ usb_phy; scalar_t__ phy; } ;
struct TYPE_11__ {int parent; } ;
struct TYPE_10__ {int flags; int * reg_vbus; int (* notify_event ) (struct ci_hdrc*,int ) ;scalar_t__ pins_host; int pctl; int tpl_support; int power_budget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct usb_hcd* FUNC_0 (int *,int ,TYPE_4__*,int ,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct ci_hdrc*) ;
 int FUNC_2 (TYPE_4__*,char*,int) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,struct ci_hdrc*) ;
 struct ehci_hcd* FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ci_hdrc*,int ) ;
 int FUNC_10 (struct usb_hcd*,int ,int ) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_13(struct ci_hdrc *VAR_6)
{
 struct usb_hcd *VAR_7;
 struct ehci_hcd *VAR_8;
 struct ehci_ci_priv *VAR_9;
 int VAR_10;

 if (FUNC_11())
  return -VAR_3;

 VAR_7 = FUNC_0(&VAR_5, VAR_6->dev->parent,
          VAR_6->dev, FUNC_3(VAR_6->dev), ((void*)0));
 if (!VAR_7)
  return -VAR_4;

 FUNC_4(VAR_6->dev, VAR_6);
 VAR_7->rsrc_start = VAR_6->hw_bank.phys;
 VAR_7->rsrc_len = VAR_6->hw_bank.size;
 VAR_7->regs = VAR_6->hw_bank.abs;
 VAR_7->has_tt = 1;

 VAR_7->power_budget = VAR_6->platdata->power_budget;
 VAR_7->tpl_support = VAR_6->platdata->tpl_support;
 if (VAR_6->phy || VAR_6->usb_phy) {
  VAR_7->skip_phy_initialization = 1;
  if (VAR_6->usb_phy)
   VAR_7->usb_phy = VAR_6->usb_phy;
 }

 VAR_8 = FUNC_5(VAR_7);
 VAR_8->caps = VAR_6->hw_bank.cap;
 VAR_8->has_hostpc = VAR_6->hw_bank.lpm;
 VAR_8->has_tdi_phy_lpm = VAR_6->hw_bank.lpm;
 VAR_8->imx28_write_fix = VAR_6->imx28_write_fix;

 VAR_9 = (struct ehci_ci_priv *)VAR_8->priv;
 VAR_9->reg_vbus = ((void*)0);

 if (VAR_6->platdata->reg_vbus && !FUNC_1(VAR_6)) {
  if (VAR_6->platdata->flags & VAR_2) {
   VAR_10 = FUNC_8(VAR_6->platdata->reg_vbus);
   if (VAR_10) {
    FUNC_2(VAR_6->dev,
    "Failed to enable vbus regulator, ret=%d\n",
         VAR_10);
    goto put_hcd;
   }
  } else {
   VAR_9->reg_vbus = VAR_6->platdata->reg_vbus;
  }
 }

 if (VAR_6->platdata->pins_host)
  FUNC_6(VAR_6->platdata->pctl,
         VAR_6->platdata->pins_host);

 VAR_10 = FUNC_10(VAR_7, 0, 0);
 if (VAR_10) {
  goto disable_reg;
 } else {
  struct usb_otg *VAR_11 = &VAR_6->otg;

  VAR_6->hcd = VAR_7;

  if (FUNC_1(VAR_6)) {
   VAR_11->host = &VAR_7->self;
   VAR_7->self.otg_port = 1;
  }

  if (VAR_6->platdata->notify_event &&
   (VAR_6->platdata->flags & VAR_1))
   VAR_6->platdata->notify_event
    (VAR_6, VAR_0);
 }

 return VAR_10;

disable_reg:
 if (VAR_6->platdata->reg_vbus && !FUNC_1(VAR_6) &&
   (VAR_6->platdata->flags & VAR_2))
  FUNC_7(VAR_6->platdata->reg_vbus);
put_hcd:
 FUNC_12(VAR_7);

 return VAR_10;
}
