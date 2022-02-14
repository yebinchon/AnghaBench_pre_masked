
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct rcar_gen3_chan {scalar_t__ dr_mode; int is_otg_channel; int uses_otg_pins; struct device* dev; struct phy_provider* vbus; TYPE_1__* rphys; int lock; struct phy_provider* extcon; int work; struct phy_provider* base; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct phy_ops {int dummy; } ;
struct TYPE_2__ {struct phy_provider* phy; int int_enable_bits; struct rcar_gen3_chan* ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct phy_provider*) ;
 int VAR_6 ;
 int FUNC_2 (struct phy_provider*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int *) ;
 struct phy_provider* FUNC_6 (struct device*,int ) ;
 int FUNC_7 (struct device*,struct phy_provider*) ;
 struct phy_provider* FUNC_8 (struct device*,struct resource*) ;
 struct rcar_gen3_chan* FUNC_9 (struct device*,int,int ) ;
 struct phy_provider* FUNC_10 (struct device*,int ) ;
 struct phy_provider* FUNC_11 (struct device*,int *,struct phy_ops const*) ;
 struct phy_provider* FUNC_12 (struct device*,char*) ;
 int FUNC_13 (struct device*,int,int ,int ,int ,struct rcar_gen3_chan*) ;
 int FUNC_14 (int *) ;
 struct phy_ops* FUNC_15 (struct device*) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (struct phy_provider*,TYPE_1__*) ;
 int FUNC_18 (struct platform_device*,int ) ;
 struct resource* FUNC_19 (struct platform_device*,int ,int ) ;
 int FUNC_20 (struct platform_device*,struct rcar_gen3_chan*) ;
 int FUNC_21 (struct device*) ;
 int FUNC_22 (struct device*) ;
 scalar_t__ FUNC_23 (int ) ;
 int * VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_24(struct platform_device *VAR_14)
{
 struct device *VAR_15 = &VAR_14->dev;
 struct rcar_gen3_chan *VAR_16;
 struct phy_provider *VAR_17;
 struct resource *VAR_18;
 const struct phy_ops *VAR_19;
 int VAR_20, VAR_21 = 0, VAR_22;

 if (!VAR_15->of_node) {
  FUNC_3(VAR_15, "This driver needs device tree\n");
  return -VAR_0;
 }

 VAR_16 = FUNC_9(VAR_15, sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return -VAR_1;

 VAR_18 = FUNC_19(VAR_14, VAR_4, 0);
 VAR_16->base = FUNC_8(VAR_15, VAR_18);
 if (FUNC_1(VAR_16->base))
  return FUNC_2(VAR_16->base);


 VAR_20 = FUNC_18(VAR_14, 0);
 if (VAR_20 >= 0) {
  FUNC_0(&VAR_16->work, VAR_12);
  VAR_20 = FUNC_13(VAR_15, VAR_20, VAR_11,
           VAR_5, FUNC_4(VAR_15), VAR_16);
  if (VAR_20 < 0)
   FUNC_3(VAR_15, "No irq handler (%d)\n", VAR_20);
 }

 VAR_16->dr_mode = FUNC_23(VAR_15->of_node);
 if (VAR_16->dr_mode != VAR_7) {
  int VAR_23;

  VAR_16->is_otg_channel = 1;
  VAR_16->uses_otg_pins = !FUNC_16(VAR_15->of_node,
       "renesas,no-otg-pins");
  VAR_16->extcon = FUNC_6(VAR_15,
       VAR_10);
  if (FUNC_1(VAR_16->extcon))
   return FUNC_2(VAR_16->extcon);

  VAR_23 = FUNC_7(VAR_15, VAR_16->extcon);
  if (VAR_23 < 0) {
   FUNC_3(VAR_15, "Failed to register extcon\n");
   return VAR_23;
  }
 }





 FUNC_22(VAR_15);
 VAR_19 = FUNC_15(VAR_15);
 if (!VAR_19)
  return -VAR_0;

 FUNC_14(&VAR_16->lock);
 for (VAR_22 = 0; VAR_22 < VAR_6; VAR_22++) {
  VAR_16->rphys[VAR_22].phy = FUNC_11(VAR_15, ((void*)0),
       VAR_19);
  if (FUNC_1(VAR_16->rphys[VAR_22].phy)) {
   FUNC_3(VAR_15, "Failed to create USB2 PHY\n");
   VAR_21 = FUNC_2(VAR_16->rphys[VAR_22].phy);
   goto error;
  }
  VAR_16->rphys[VAR_22].ch = VAR_16;
  VAR_16->rphys[VAR_22].int_enable_bits = VAR_9[VAR_22];
  FUNC_17(VAR_16->rphys[VAR_22].phy, &VAR_16->rphys[VAR_22]);
 }

 VAR_16->vbus = FUNC_12(VAR_15, "vbus");
 if (FUNC_1(VAR_16->vbus)) {
  if (FUNC_2(VAR_16->vbus) == -VAR_2) {
   VAR_21 = FUNC_2(VAR_16->vbus);
   goto error;
  }
  VAR_16->vbus = ((void*)0);
 }

 FUNC_20(VAR_14, VAR_16);
 VAR_16->dev = VAR_15;

 VAR_17 = FUNC_10(VAR_15, VAR_13);
 if (FUNC_1(VAR_17)) {
  FUNC_3(VAR_15, "Failed to register PHY provider\n");
  VAR_21 = FUNC_2(VAR_17);
  goto error;
 } else if (VAR_16->is_otg_channel) {
  int VAR_24;

  VAR_24 = FUNC_5(VAR_15, &VAR_8);
  if (VAR_24 < 0)
   goto error;
 }

 return 0;

error:
 FUNC_21(VAR_15);

 return VAR_21;
}
