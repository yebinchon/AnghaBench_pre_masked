
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct histb_combphy_mode {void* mask; void* shift; void* reg; int fixed; } ;
struct histb_combphy_priv {int phy; int por_rst; int ref_clk; struct histb_combphy_mode mode; int syscon; int mmio; } ;
struct device_node {int parent; } ;


 int FUNC_0 (void**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct phy_provider*) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,struct histb_combphy_priv*) ;
 int FUNC_7 (struct device*,int *) ;
 int FUNC_8 (struct device*,struct resource*) ;
 struct histb_combphy_priv* FUNC_9 (struct device*,int,int ) ;
 struct phy_provider* FUNC_10 (struct device*,int ) ;
 int FUNC_11 (struct device*,int *,int *) ;
 int FUNC_12 (struct device*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_13 (struct histb_combphy_mode*) ;
 int FUNC_14 (struct device_node*,char*,int *) ;
 int FUNC_15 (struct device_node*,char*,void**,int ) ;
 int FUNC_16 (int ,struct histb_combphy_priv*) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_8)
{
 struct phy_provider *VAR_9;
 struct device *VAR_10 = &VAR_8->dev;
 struct histb_combphy_priv *VAR_11;
 struct device_node *VAR_12 = VAR_10->of_node;
 struct histb_combphy_mode *VAR_13;
 struct resource *VAR_14;
 u32 VAR_15[3];
 int VAR_16;

 VAR_11 = FUNC_9(VAR_10, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_14 = FUNC_17(VAR_8, VAR_4, 0);
 VAR_11->mmio = FUNC_8(VAR_10, VAR_14);
 if (FUNC_1(VAR_11->mmio)) {
  VAR_16 = FUNC_2(VAR_11->mmio);
  return VAR_16;
 }

 VAR_11->syscon = FUNC_18(VAR_12->parent);
 if (FUNC_1(VAR_11->syscon)) {
  FUNC_5(VAR_10, "failed to find peri_ctrl syscon regmap\n");
  return FUNC_2(VAR_11->syscon);
 }

 VAR_13 = &VAR_11->mode;
 VAR_13->fixed = VAR_5;

 VAR_16 = FUNC_14(VAR_12, "hisilicon,fixed-mode", &VAR_13->fixed);
 if (VAR_16 == 0)
  FUNC_4(VAR_10, "found fixed phy mode %d\n", VAR_13->fixed);

 VAR_16 = FUNC_15(VAR_12, "hisilicon,mode-select-bits",
      VAR_15, FUNC_0(VAR_15));
 if (VAR_16 == 0) {
  if (FUNC_13(VAR_13)) {
   FUNC_5(VAR_10, "found select bits for fixed mode phy\n");
   return -VAR_0;
  }

  VAR_13->reg = VAR_15[0];
  VAR_13->shift = VAR_15[1];
  VAR_13->mask = VAR_15[2];
  FUNC_4(VAR_10, "found mode select bits\n");
 } else {
  if (!FUNC_13(VAR_13)) {
   FUNC_5(VAR_10, "no valid select bits found for non-fixed phy\n");
   return -VAR_1;
  }
 }

 VAR_11->ref_clk = FUNC_7(VAR_10, ((void*)0));
 if (FUNC_1(VAR_11->ref_clk)) {
  FUNC_5(VAR_10, "failed to find ref clock\n");
  return FUNC_2(VAR_11->ref_clk);
 }

 VAR_11->por_rst = FUNC_12(VAR_10, ((void*)0));
 if (FUNC_1(VAR_11->por_rst)) {
  FUNC_5(VAR_10, "failed to get poweron reset\n");
  return FUNC_2(VAR_11->por_rst);
 }

 VAR_11->phy = FUNC_11(VAR_10, ((void*)0), &VAR_6);
 if (FUNC_1(VAR_11->phy)) {
  FUNC_5(VAR_10, "failed to create combphy\n");
  return FUNC_2(VAR_11->phy);
 }

 FUNC_6(VAR_10, VAR_11);
 FUNC_16(VAR_11->phy, VAR_11);

 VAR_9 = FUNC_10(VAR_10, VAR_7);
 return FUNC_3(VAR_9);
}
