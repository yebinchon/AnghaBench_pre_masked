
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {int num_resources; int resource; struct device dev; } ;
struct pinctrl_state {int hsic; } ;
struct of_device_id {struct ci_hdrc_imx_platform_flag* data; } ;
struct device_node {int dummy; } ;
struct ci_hdrc_platform_data {int flags; struct pinctrl_state* usb_phy; int notify_event; int capoffset; int name; } ;
struct ci_hdrc_imx_platform_flag {int flags; } ;
struct ci_hdrc_imx_data {int override_phy_control; int supports_runtime_pm; struct pinctrl_state* ci_pdev; int pm_qos_req; struct pinctrl_state* hsic_pad_regulator; struct pinctrl_state* usbmisc_data; struct pinctrl_state* phy; struct pinctrl_state* pinctrl_hsic_active; struct pinctrl_state* pinctrl; struct ci_hdrc_imx_platform_flag const* plat_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct pinctrl_state*) ;
 int VAR_9 ;
 int FUNC_1 (struct pinctrl_state*) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 struct pinctrl_state* FUNC_2 (struct device*,int ,int ,struct ci_hdrc_platform_data*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct pinctrl_state*) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*,int) ;
 struct ci_hdrc_imx_data* FUNC_7 (struct device*,int,int ) ;
 struct pinctrl_state* FUNC_8 (struct device*) ;
 struct pinctrl_state* FUNC_9 (struct device*,char*) ;
 struct pinctrl_state* FUNC_10 (struct device*,char*,int ) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct pinctrl_state*) ;
 int FUNC_15 (struct pinctrl_state*) ;
 scalar_t__ FUNC_16 (struct device_node*,char*) ;
 struct of_device_id* FUNC_17 (int ,struct device*) ;
 scalar_t__ FUNC_18 (struct device_node*) ;
 void* FUNC_19 (struct pinctrl_state*,char*) ;
 int FUNC_20 (struct pinctrl_state*,struct pinctrl_state*) ;
 int FUNC_21 (struct platform_device*,struct ci_hdrc_imx_data*) ;
 int FUNC_22 (int *,int ,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (struct device*) ;
 int FUNC_25 (struct device*) ;
 int FUNC_26 (struct pinctrl_state*) ;
 int FUNC_27 (struct pinctrl_state*) ;
 int FUNC_28 (struct pinctrl_state*) ;
 struct pinctrl_state* FUNC_29 (struct device*) ;

__attribute__((used)) static int FUNC_30(struct platform_device *VAR_14)
{
 struct ci_hdrc_imx_data *VAR_15;
 struct ci_hdrc_platform_data VAR_16 = {
  .name = FUNC_5(&VAR_14->dev),
  .capoffset = VAR_4,
  .notify_event = VAR_13,
 };
 int VAR_17;
 const struct of_device_id *VAR_18;
 const struct ci_hdrc_imx_platform_flag *VAR_19;
 struct device_node *VAR_20 = VAR_14->dev.of_node;
 struct device *VAR_21 = &VAR_14->dev;
 struct pinctrl_state *VAR_22;

 VAR_18 = FUNC_17(VAR_12, VAR_21);
 if (!VAR_18)
  return -VAR_5;

 VAR_19 = VAR_18->data;

 VAR_15 = FUNC_7(&VAR_14->dev, sizeof(*VAR_15), VAR_8);
 if (!VAR_15)
  return -VAR_6;

 VAR_15->plat_data = VAR_19;
 VAR_16.flags |= VAR_19->flags;
 FUNC_21(VAR_14, VAR_15);
 VAR_15->usbmisc_data = FUNC_29(VAR_21);
 if (FUNC_0(VAR_15->usbmisc_data))
  return FUNC_1(VAR_15->usbmisc_data);

 if ((FUNC_18(VAR_21->of_node) == VAR_10)
  && VAR_15->usbmisc_data) {
  VAR_16.flags |= VAR_0;
  VAR_15->usbmisc_data->hsic = 1;
  VAR_15->pinctrl = FUNC_8(VAR_21);
  if (FUNC_0(VAR_15->pinctrl)) {
   FUNC_4(VAR_21, "pinctrl get failed, err=%ld\n",
     FUNC_1(VAR_15->pinctrl));
   return FUNC_1(VAR_15->pinctrl);
  }

  VAR_22 = FUNC_19(VAR_15->pinctrl, "idle");
  if (FUNC_0(VAR_22)) {
   FUNC_4(VAR_21,
    "pinctrl_hsic_idle lookup failed, err=%ld\n",
     FUNC_1(VAR_22));
   return FUNC_1(VAR_22);
  }

  VAR_17 = FUNC_20(VAR_15->pinctrl, VAR_22);
  if (VAR_17) {
   FUNC_4(VAR_21, "hsic_idle select failed, err=%d\n", VAR_17);
   return VAR_17;
  }

  VAR_15->pinctrl_hsic_active = FUNC_19(VAR_15->pinctrl,
        "active");
  if (FUNC_0(VAR_15->pinctrl_hsic_active)) {
   FUNC_4(VAR_21,
    "pinctrl_hsic_active lookup failed, err=%ld\n",
     FUNC_1(VAR_15->pinctrl_hsic_active));
   return FUNC_1(VAR_15->pinctrl_hsic_active);
  }

  VAR_15->hsic_pad_regulator = FUNC_9(VAR_21, "hsic");
  if (FUNC_1(VAR_15->hsic_pad_regulator) == -VAR_7) {
   return -VAR_7;
  } else if (FUNC_1(VAR_15->hsic_pad_regulator) == -VAR_5) {

   VAR_15->hsic_pad_regulator = ((void*)0);
  } else if (FUNC_0(VAR_15->hsic_pad_regulator)) {
   FUNC_4(VAR_21, "Get HSIC pad regulator error: %ld\n",
     FUNC_1(VAR_15->hsic_pad_regulator));
   return FUNC_1(VAR_15->hsic_pad_regulator);
  }

  if (VAR_15->hsic_pad_regulator) {
   VAR_17 = FUNC_27(VAR_15->hsic_pad_regulator);
   if (VAR_17) {
    FUNC_4(VAR_21,
     "Failed to enable HSIC pad regulator\n");
    return VAR_17;
   }
  }
 }

 if (VAR_16.flags & VAR_2)
  FUNC_22(&VAR_15->pm_qos_req,
   VAR_9, 0);

 VAR_17 = FUNC_12(VAR_21);
 if (VAR_17)
  goto disable_hsic_regulator;

 VAR_17 = FUNC_13(VAR_21);
 if (VAR_17)
  goto disable_hsic_regulator;

 VAR_15->phy = FUNC_10(VAR_21, "fsl,usbphy", 0);
 if (FUNC_0(VAR_15->phy)) {
  VAR_17 = FUNC_1(VAR_15->phy);

  if (VAR_17 == -VAR_5)
   VAR_15->phy = ((void*)0);
  else
   goto err_clk;
 }

 VAR_16.usb_phy = VAR_15->phy;

 if ((FUNC_16(VAR_20, "fsl,imx53-usb") ||
      FUNC_16(VAR_20, "fsl,imx51-usb")) && VAR_16.usb_phy &&
     FUNC_18(VAR_20) == VAR_11) {
  VAR_16.flags |= VAR_1;
  VAR_15->override_phy_control = 1;
  FUNC_28(VAR_16.usb_phy);
 }

 if (VAR_16.flags & VAR_3)
  VAR_15->supports_runtime_pm = 1;

 VAR_17 = FUNC_14(VAR_15->usbmisc_data);
 if (VAR_17) {
  FUNC_4(VAR_21, "usbmisc init failed, ret=%d\n", VAR_17);
  goto err_clk;
 }

 VAR_15->ci_pdev = FUNC_2(VAR_21,
    VAR_14->resource, VAR_14->num_resources,
    &VAR_16);
 if (FUNC_0(VAR_15->ci_pdev)) {
  VAR_17 = FUNC_1(VAR_15->ci_pdev);
  if (VAR_17 != -VAR_7)
   FUNC_4(VAR_21, "ci_hdrc_add_device failed, err=%d\n",
     VAR_17);
  goto err_clk;
 }

 VAR_17 = FUNC_15(VAR_15->usbmisc_data);
 if (VAR_17) {
  FUNC_4(VAR_21, "usbmisc post failed, ret=%d\n", VAR_17);
  goto disable_device;
 }

 if (VAR_15->supports_runtime_pm) {
  FUNC_25(VAR_21);
  FUNC_24(VAR_21);
 }

 FUNC_6(VAR_21, 1);

 return 0;

disable_device:
 FUNC_3(VAR_15->ci_pdev);
err_clk:
 FUNC_11(VAR_21);
disable_hsic_regulator:
 if (VAR_15->hsic_pad_regulator)

  FUNC_26(VAR_15->hsic_pad_regulator);
 if (VAR_16.flags & VAR_2)
  FUNC_23(&VAR_15->pm_qos_req);
 VAR_15->ci_pdev = ((void*)0);
 return VAR_17;
}
