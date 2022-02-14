
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct rcar_gen3_usb3 {int usb3s_clk; int usb_extal; struct phy_provider* phy; int ssc_range; struct phy_provider* base; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
typedef struct phy_provider clk ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct phy_provider*) ;
 int FUNC_1 (struct phy_provider*) ;
 int FUNC_2 (struct phy_provider*) ;
 int FUNC_3 (struct phy_provider*) ;
 int FUNC_4 (struct phy_provider*) ;
 int FUNC_5 (struct device*,char*) ;
 struct phy_provider* FUNC_6 (struct device*,char*) ;
 struct phy_provider* FUNC_7 (struct device*,struct resource*) ;
 struct rcar_gen3_usb3* FUNC_8 (struct device*,int,int ) ;
 struct phy_provider* FUNC_9 (struct device*,int ) ;
 struct phy_provider* FUNC_10 (struct device*,int *,int *) ;
 int VAR_4 ;
 int FUNC_11 (int ,char*,int *) ;
 int FUNC_12 (struct phy_provider*,struct rcar_gen3_usb3*) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct rcar_gen3_usb3*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_6)
{
 struct device *VAR_7 = &VAR_6->dev;
 struct rcar_gen3_usb3 *VAR_8;
 struct phy_provider *VAR_9;
 struct resource *VAR_10;
 int VAR_11 = 0;
 struct clk *VAR_12;

 if (!VAR_7->of_node) {
  FUNC_5(VAR_7, "This driver needs device tree\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_8(VAR_7, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_13(VAR_6, VAR_3, 0);
 VAR_8->base = FUNC_7(VAR_7, VAR_10);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 VAR_12 = FUNC_6(VAR_7, "usb3s_clk");
 if (!FUNC_0(VAR_12) && !FUNC_4(VAR_12)) {
  VAR_8->usb3s_clk = !!FUNC_3(VAR_12);
  FUNC_2(VAR_12);
 }
 VAR_12 = FUNC_6(VAR_7, "usb_extal");
 if (!FUNC_0(VAR_12) && !FUNC_4(VAR_12)) {
  VAR_8->usb_extal = !!FUNC_3(VAR_12);
  FUNC_2(VAR_12);
 }

 if (!VAR_8->usb3s_clk && !VAR_8->usb_extal) {
  FUNC_5(VAR_7, "This driver needs usb3s_clk and/or usb_extal\n");
  VAR_11 = -VAR_0;
  goto error;
 }





 FUNC_16(VAR_7);

 VAR_8->phy = FUNC_10(VAR_7, ((void*)0), &VAR_5);
 if (FUNC_0(VAR_8->phy)) {
  FUNC_5(VAR_7, "Failed to create USB3 PHY\n");
  VAR_11 = FUNC_1(VAR_8->phy);
  goto error;
 }

 FUNC_11(VAR_7->of_node, "renesas,ssc-range", &VAR_8->ssc_range);

 FUNC_14(VAR_6, VAR_8);
 FUNC_12(VAR_8->phy, VAR_8);

 VAR_9 = FUNC_9(VAR_7, VAR_4);
 if (FUNC_0(VAR_9)) {
  FUNC_5(VAR_7, "Failed to register PHY provider\n");
  VAR_11 = FUNC_1(VAR_9);
  goto error;
 }

 return 0;

error:
 FUNC_15(VAR_7);

 return VAR_11;
}
