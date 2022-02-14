
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sr_pcie_phy_core {struct sr_pcie_phy* phys; int pipemux; struct device* dev; struct phy_provider* mhb; struct phy_provider* cdru; struct phy_provider* base; } ;
struct sr_pcie_phy {unsigned int index; struct phy_provider* phy; struct sr_pcie_phy_core* core; } ;
struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct phy_provider {int dummy; } ;
struct phy_ops {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct phy_provider*) ;
 int FUNC_1 (struct phy_provider*) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,struct sr_pcie_phy_core*) ;
 struct phy_provider* FUNC_5 (struct device*,struct resource*) ;
 struct sr_pcie_phy_core* FUNC_6 (struct device*,int,int ) ;
 struct phy_provider* FUNC_7 (struct device*,int ) ;
 struct phy_provider* FUNC_8 (struct device*,int *,struct phy_ops const*) ;
 int FUNC_9 (struct phy_provider*,struct sr_pcie_phy*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct sr_pcie_phy_core*) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 struct phy_ops VAR_6 ;
 struct phy_ops VAR_7 ;
 int VAR_8 ;
 void* FUNC_13 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct device_node *VAR_11 = VAR_10->of_node;
 struct sr_pcie_phy_core *VAR_12;
 struct resource *VAR_13;
 struct phy_provider *VAR_14;
 unsigned int VAR_15 = 0;

 VAR_12 = FUNC_6(VAR_10, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->dev = VAR_10;

 VAR_13 = FUNC_12(VAR_9, VAR_3, 0);
 VAR_12->base = FUNC_5(VAR_12->dev, VAR_13);
 if (FUNC_0(VAR_12->base))
  return FUNC_1(VAR_12->base);

 VAR_12->cdru = FUNC_13(VAR_11, "brcm,sr-cdru");
 if (FUNC_0(VAR_12->cdru)) {
  FUNC_2(VAR_12->dev, "unable to find CDRU device\n");
  return FUNC_1(VAR_12->cdru);
 }

 VAR_12->mhb = FUNC_13(VAR_11, "brcm,sr-mhb");
 if (FUNC_0(VAR_12->mhb)) {
  FUNC_2(VAR_12->dev, "unable to find MHB device\n");
  return FUNC_1(VAR_12->mhb);
 }


 VAR_12->pipemux = FUNC_11(VAR_12);
 if (!FUNC_10(VAR_12->pipemux)) {
  FUNC_2(VAR_12->dev, "invalid PCIe PIPEMUX strap %u\n",
   VAR_12->pipemux);
  return -VAR_0;
 }

 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  struct sr_pcie_phy *VAR_16 = &VAR_12->phys[VAR_15];
  const struct phy_ops *VAR_17;

  if (VAR_15 == VAR_5)
   VAR_17 = &VAR_6;
  else
   VAR_17 = &VAR_7;

  VAR_16->phy = FUNC_8(VAR_10, ((void*)0), VAR_17);
  if (FUNC_0(VAR_16->phy)) {
   FUNC_2(VAR_10, "failed to create PCIe PHY\n");
   return FUNC_1(VAR_16->phy);
  }

  VAR_16->core = VAR_12;
  VAR_16->index = VAR_15;
  FUNC_9(VAR_16->phy, VAR_16);
 }

 FUNC_4(VAR_10, VAR_12);

 VAR_14 = FUNC_7(VAR_10, VAR_8);
 if (FUNC_0(VAR_14)) {
  FUNC_2(VAR_10, "failed to register PHY provider\n");
  return FUNC_1(VAR_14);
 }

 FUNC_3(VAR_10, "Stingray PCIe PHY driver initialized\n");

 return 0;
}
