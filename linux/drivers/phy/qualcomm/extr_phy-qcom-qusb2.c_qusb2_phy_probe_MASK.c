
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u32 ;
struct resource {int dummy; } ;
struct qusb2_phy {int override_imp_res_offset; int override_hstx_trim; int override_preemphasis; int override_preemphasis_width; struct phy_provider* phy; void* preemphasis_width; void* preemphasis_level; void* hstx_trim_value; void* imp_res_offset_value; struct phy_provider* cell; struct phy_provider* tcsr; int cfg; TYPE_1__* vregs; struct phy_provider* phy_reset; struct phy_provider* iface_clk; struct phy_provider* ref_clk; struct phy_provider* cfg_ahb_clk; struct phy_provider* base; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
typedef struct phy_provider phy ;
struct TYPE_3__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct phy_provider*) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct phy_provider*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct device*,struct qusb2_phy*) ;
 void* FUNC_8 (struct device*,char*) ;
 struct phy_provider* FUNC_9 (struct device*,char*) ;
 struct phy_provider* FUNC_10 (struct device*,struct resource*) ;
 struct qusb2_phy* FUNC_11 (struct device*,int,int ) ;
 struct phy_provider* FUNC_12 (struct device*,int *) ;
 struct phy_provider* FUNC_13 (struct device*,int ) ;
 struct phy_provider* FUNC_14 (struct device*,int *,int *) ;
 int FUNC_15 (struct device*,int,TYPE_1__*) ;
 struct phy_provider* FUNC_16 (struct device*,int ) ;
 int FUNC_17 (struct device*) ;
 int VAR_4 ;
 int FUNC_18 (int ,char*,scalar_t__*) ;
 int FUNC_19 (struct phy_provider*,struct qusb2_phy*) ;
 struct resource* FUNC_20 (struct platform_device*,int ,int ) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*) ;
 int FUNC_23 (struct device*) ;
 int FUNC_24 (struct device*) ;
 int VAR_5 ;
 int * VAR_6 ;
 struct phy_provider* FUNC_25 (int ,char*) ;

__attribute__((used)) static int FUNC_26(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct qusb2_phy *VAR_9;
 struct phy_provider *VAR_10;
 struct phy *VAR_11;
 struct resource *VAR_12;
 int VAR_13, VAR_14;
 int VAR_15;
 u32 VAR_16;

 VAR_9 = FUNC_11(VAR_8, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_0;

 VAR_12 = FUNC_20(VAR_7, VAR_3, 0);
 VAR_9->base = FUNC_10(VAR_8, VAR_12);
 if (FUNC_1(VAR_9->base))
  return FUNC_2(VAR_9->base);

 VAR_9->cfg_ahb_clk = FUNC_8(VAR_8, "cfg_ahb");
 if (FUNC_1(VAR_9->cfg_ahb_clk)) {
  VAR_13 = FUNC_2(VAR_9->cfg_ahb_clk);
  if (VAR_13 != -VAR_1)
   FUNC_5(VAR_8, "failed to get cfg ahb clk, %d\n", VAR_13);
  return VAR_13;
 }

 VAR_9->ref_clk = FUNC_8(VAR_8, "ref");
 if (FUNC_1(VAR_9->ref_clk)) {
  VAR_13 = FUNC_2(VAR_9->ref_clk);
  if (VAR_13 != -VAR_1)
   FUNC_5(VAR_8, "failed to get ref clk, %d\n", VAR_13);
  return VAR_13;
 }

 VAR_9->iface_clk = FUNC_9(VAR_8, "iface");
 if (FUNC_1(VAR_9->iface_clk))
  return FUNC_2(VAR_9->iface_clk);

 VAR_9->phy_reset = FUNC_16(&VAR_7->dev, 0);
 if (FUNC_1(VAR_9->phy_reset)) {
  FUNC_5(VAR_8, "failed to get phy core reset\n");
  return FUNC_2(VAR_9->phy_reset);
 }

 VAR_15 = FUNC_0(VAR_9->vregs);
 for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++)
  VAR_9->vregs[VAR_14].supply = VAR_6[VAR_14];

 VAR_13 = FUNC_15(VAR_8, VAR_15, VAR_9->vregs);
 if (VAR_13) {
  if (VAR_13 != -VAR_1)
   FUNC_5(VAR_8, "failed to get regulator supplies: %d\n",
    VAR_13);
  return VAR_13;
 }


 VAR_9->cfg = FUNC_17(VAR_8);

 VAR_9->tcsr = FUNC_25(VAR_8->of_node,
       "qcom,tcsr-syscon");
 if (FUNC_1(VAR_9->tcsr)) {
  FUNC_4(VAR_8, "failed to lookup TCSR regmap\n");
  VAR_9->tcsr = ((void*)0);
 }

 VAR_9->cell = FUNC_12(VAR_8, ((void*)0));
 if (FUNC_1(VAR_9->cell)) {
  if (FUNC_2(VAR_9->cell) == -VAR_1)
   return -VAR_1;
  VAR_9->cell = ((void*)0);
  FUNC_4(VAR_8, "failed to lookup tune2 hstx trim value\n");
 }

 if (!FUNC_18(VAR_8->of_node, "qcom,imp-res-offset-value",
      &VAR_16)) {
  VAR_9->imp_res_offset_value = (u8)VAR_16;
  VAR_9->override_imp_res_offset = 1;
 }

 if (!FUNC_18(VAR_8->of_node, "qcom,hstx-trim-value",
      &VAR_16)) {
  VAR_9->hstx_trim_value = (u8)VAR_16;
  VAR_9->override_hstx_trim = 1;
 }

 if (!FUNC_18(VAR_8->of_node, "qcom,preemphasis-level",
         &VAR_16)) {
  VAR_9->preemphasis_level = (u8)VAR_16;
  VAR_9->override_preemphasis = 1;
 }

 if (!FUNC_18(VAR_8->of_node, "qcom,preemphasis-width",
         &VAR_16)) {
  VAR_9->preemphasis_width = (u8)VAR_16;
  VAR_9->override_preemphasis_width = 1;
 }

 FUNC_24(VAR_8);
 FUNC_22(VAR_8);




 FUNC_23(VAR_8);

 VAR_11 = FUNC_14(VAR_8, ((void*)0), &VAR_5);
 if (FUNC_1(VAR_11)) {
  VAR_13 = FUNC_2(VAR_11);
  FUNC_5(VAR_8, "failed to create phy, %d\n", VAR_13);
  FUNC_21(VAR_8);
  return VAR_13;
 }
 VAR_9->phy = VAR_11;

 FUNC_7(VAR_8, VAR_9);
 FUNC_19(VAR_11, VAR_9);

 VAR_10 = FUNC_13(VAR_8, VAR_4);
 if (!FUNC_1(VAR_10))
  FUNC_6(VAR_8, "Registered Qcom-QUSB2 phy\n");
 else
  FUNC_21(VAR_8);

 return FUNC_3(VAR_10);
}
