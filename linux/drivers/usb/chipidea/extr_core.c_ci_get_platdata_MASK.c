
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pinctrl_state {int dummy; } ;
typedef struct pinctrl_state extcon_dev ;
struct device {int fwnode; int of_node; } ;
struct TYPE_4__ {void* notifier_call; } ;
struct ci_hdrc_cable {int connected; struct pinctrl_state* edev; TYPE_1__ nb; } ;
struct TYPE_5__ {int otg_rev; int hnp_support; int srp_support; } ;
struct ci_hdrc_platform_data {scalar_t__ dr_mode; int phy_clkgate_delay_us; int itc_setting; int ahb_burst_config; int tx_burst_size; int rx_burst_size; struct pinctrl_state* pins_device; struct pinctrl_state* pctl; struct pinctrl_state* pins_host; struct pinctrl_state* pins_default; struct ci_hdrc_cable id_extcon; struct ci_hdrc_cable vbus_extcon; int flags; TYPE_2__ ci_otg_caps; scalar_t__ tpl_support; struct pinctrl_state* reg_vbus; scalar_t__ phy_mode; } ;
struct TYPE_6__ {int fwnode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct pinctrl_state* FUNC_0 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (struct pinctrl_state*) ;
 int FUNC_2 (struct pinctrl_state*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 void* VAR_14 ;
 TYPE_3__ VAR_15 ;
 int FUNC_3 (struct device*,char*,...) ;
 scalar_t__ FUNC_4 (struct device*,char*) ;
 struct pinctrl_state* FUNC_5 (struct device*) ;
 struct pinctrl_state* FUNC_6 (struct device*,char*) ;
 struct pinctrl_state* FUNC_7 (struct device*,int) ;
 int FUNC_8 (struct pinctrl_state*,int ) ;
 scalar_t__ FUNC_9 (int ,char*,int *) ;
 scalar_t__ FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,char*,int*) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,TYPE_2__*) ;
 struct pinctrl_state* FUNC_15 (struct pinctrl_state*,char*) ;
 scalar_t__ FUNC_16 (struct device*) ;
 scalar_t__ FUNC_17 (struct device*) ;

__attribute__((used)) static int FUNC_18(struct device *VAR_16,
  struct ci_hdrc_platform_data *VAR_17)
{
 struct extcon_dev *VAR_18, *VAR_19;
 struct ci_hdrc_cable *VAR_20;
 int VAR_21;

 if (!VAR_17->phy_mode)
  VAR_17->phy_mode = FUNC_12(VAR_16->of_node);

 if (!VAR_17->dr_mode)
  VAR_17->dr_mode = FUNC_16(VAR_16);

 if (VAR_17->dr_mode == VAR_12)
  VAR_17->dr_mode = VAR_10;

 if (VAR_17->dr_mode != VAR_11) {

  VAR_17->reg_vbus = FUNC_6(VAR_16, "vbus");
  if (FUNC_2(VAR_17->reg_vbus) == -VAR_7) {
   return -VAR_7;
  } else if (FUNC_2(VAR_17->reg_vbus) == -VAR_6) {

   VAR_17->reg_vbus = ((void*)0);
  } else if (FUNC_1(VAR_17->reg_vbus)) {
   FUNC_3(VAR_16, "Getting regulator error: %ld\n",
    FUNC_2(VAR_17->reg_vbus));
   return FUNC_2(VAR_17->reg_vbus);
  }

  if (!VAR_17->tpl_support)
   VAR_17->tpl_support =
    FUNC_13(VAR_16->of_node);
 }

 if (VAR_17->dr_mode == VAR_10) {

  VAR_17->ci_otg_caps.otg_rev = 0x0200;
  VAR_17->ci_otg_caps.hnp_support = 1;
  VAR_17->ci_otg_caps.srp_support = 1;


  VAR_21 = FUNC_14(VAR_16->of_node,
     &VAR_17->ci_otg_caps);
  if (VAR_21)
   return VAR_21;
 }

 if (FUNC_17(VAR_16) == VAR_13)
  VAR_17->flags |= VAR_0;

 FUNC_11(VAR_16->of_node, "phy-clkgate-delay-us",
         &VAR_17->phy_clkgate_delay_us);

 VAR_17->itc_setting = 1;

 FUNC_11(VAR_16->of_node, "itc-setting",
     &VAR_17->itc_setting);

 VAR_21 = FUNC_11(VAR_16->of_node, "ahb-burst-config",
    &VAR_17->ahb_burst_config);
 if (!VAR_21) {
  VAR_17->flags |= VAR_1;
 } else if (VAR_21 != -VAR_5) {
  FUNC_3(VAR_16, "failed to get ahb-burst-config\n");
  return VAR_21;
 }

 VAR_21 = FUNC_11(VAR_16->of_node, "tx-burst-size-dword",
    &VAR_17->tx_burst_size);
 if (!VAR_21) {
  VAR_17->flags |= VAR_3;
 } else if (VAR_21 != -VAR_5) {
  FUNC_3(VAR_16, "failed to get tx-burst-size-dword\n");
  return VAR_21;
 }

 VAR_21 = FUNC_11(VAR_16->of_node, "rx-burst-size-dword",
    &VAR_17->rx_burst_size);
 if (!VAR_21) {
  VAR_17->flags |= VAR_2;
 } else if (VAR_21 != -VAR_5) {
  FUNC_3(VAR_16, "failed to get rx-burst-size-dword\n");
  return VAR_21;
 }

 if (FUNC_9(VAR_16->of_node, "non-zero-ttctrl-ttha", ((void*)0)))
  VAR_17->flags |= VAR_4;

 VAR_19 = FUNC_0(-VAR_6);
 VAR_18 = FUNC_0(-VAR_6);
 if (FUNC_10(VAR_16->of_node, "extcon")) {

  VAR_18 = FUNC_7(VAR_16, 0);
  if (FUNC_1(VAR_18) && FUNC_2(VAR_18) != -VAR_6)
   return FUNC_2(VAR_18);

  VAR_19 = FUNC_7(VAR_16, 1);
  if (FUNC_1(VAR_19) && FUNC_2(VAR_19) != -VAR_6)
   return FUNC_2(VAR_19);
 }

 VAR_20 = &VAR_17->vbus_extcon;
 VAR_20->nb.notifier_call = VAR_14;
 VAR_20->edev = VAR_18;

 if (!FUNC_1(VAR_18)) {
  VAR_21 = FUNC_8(VAR_20->edev, VAR_8);
  if (VAR_21)
   VAR_20->connected = 1;
  else
   VAR_20->connected = 0;
 }

 VAR_20 = &VAR_17->id_extcon;
 VAR_20->nb.notifier_call = VAR_14;
 VAR_20->edev = VAR_19;

 if (!FUNC_1(VAR_19)) {
  VAR_21 = FUNC_8(VAR_20->edev, VAR_9);
  if (VAR_21)
   VAR_20->connected = 1;
  else
   VAR_20->connected = 0;
 }

 if (FUNC_4(VAR_16, "usb-role-switch"))
  VAR_15.fwnode = VAR_16->fwnode;

 VAR_17->pctl = FUNC_5(VAR_16);
 if (!FUNC_1(VAR_17->pctl)) {
  struct pinctrl_state *VAR_22;

  VAR_22 = FUNC_15(VAR_17->pctl, "default");
  if (!FUNC_1(VAR_22))
   VAR_17->pins_default = VAR_22;

  VAR_22 = FUNC_15(VAR_17->pctl, "host");
  if (!FUNC_1(VAR_22))
   VAR_17->pins_host = VAR_22;

  VAR_22 = FUNC_15(VAR_17->pctl, "device");
  if (!FUNC_1(VAR_22))
   VAR_17->pins_device = VAR_22;
 }

 return 0;
}
