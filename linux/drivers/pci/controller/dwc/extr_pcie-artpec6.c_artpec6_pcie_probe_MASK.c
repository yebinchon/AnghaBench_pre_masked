
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct dw_pcie {void* dbi_base; int * ops; struct device* dev; } ;
struct artpec_pcie_of_data {scalar_t__ mode; scalar_t__ variant; } ;
struct artpec6_pcie {int variant; int mode; void* regmap; void* phy_base; struct dw_pcie* pci; } ;
typedef enum dw_pcie_device_mode { ____Placeholder_dw_pcie_device_mode } dw_pcie_device_mode ;
typedef enum artpec_pcie_variants { ____Placeholder_artpec_pcie_variants } artpec_pcie_variants ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct artpec6_pcie*,struct platform_device*) ;
 int FUNC_4 (struct artpec6_pcie*,struct platform_device*) ;
 int VAR_9 ;
 int FUNC_5 (struct artpec6_pcie*,int ) ;
 int FUNC_6 (struct artpec6_pcie*,int ,int ) ;
 int FUNC_7 (struct device*,char*,int) ;
 void* FUNC_8 (struct device*,struct resource*) ;
 void* FUNC_9 (struct device*,int,int ) ;
 int VAR_10 ;
 struct of_device_id* FUNC_10 (int ,struct device*) ;
 struct resource* FUNC_11 (struct platform_device*,int ,char*) ;
 int FUNC_12 (struct platform_device*,struct artpec6_pcie*) ;
 void* FUNC_13 (int ,char*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_11)
{
 struct device *VAR_12 = &VAR_11->dev;
 struct dw_pcie *VAR_13;
 struct artpec6_pcie *VAR_14;
 struct resource *VAR_15;
 struct resource *VAR_16;
 int VAR_17;
 const struct of_device_id *VAR_18;
 const struct artpec_pcie_of_data *VAR_19;
 enum artpec_pcie_variants VAR_20;
 enum dw_pcie_device_mode VAR_21;

 VAR_18 = FUNC_10(VAR_9, VAR_12);
 if (!VAR_18)
  return -VAR_2;

 VAR_19 = (struct artpec_pcie_of_data *)VAR_18->data;
 VAR_20 = (enum artpec_pcie_variants)VAR_19->variant;
 VAR_21 = (enum dw_pcie_device_mode)VAR_19->mode;

 VAR_14 = FUNC_9(VAR_12, sizeof(*VAR_14), VAR_5);
 if (!VAR_14)
  return -VAR_4;

 VAR_13 = FUNC_9(VAR_12, sizeof(*VAR_13), VAR_5);
 if (!VAR_13)
  return -VAR_4;

 VAR_13->dev = VAR_12;
 VAR_13->ops = &VAR_10;

 VAR_14->pci = VAR_13;
 VAR_14->variant = VAR_20;
 VAR_14->mode = VAR_21;

 VAR_15 = FUNC_11(VAR_11, VAR_6, "dbi");
 VAR_13->dbi_base = FUNC_8(VAR_12, VAR_15);
 if (FUNC_1(VAR_13->dbi_base))
  return FUNC_2(VAR_13->dbi_base);

 VAR_16 = FUNC_11(VAR_11, VAR_6, "phy");
 VAR_14->phy_base = FUNC_8(VAR_12, VAR_16);
 if (FUNC_1(VAR_14->phy_base))
  return FUNC_2(VAR_14->phy_base);

 VAR_14->regmap =
  FUNC_13(VAR_12->of_node,
      "axis,syscon-pcie");
 if (FUNC_1(VAR_14->regmap))
  return FUNC_2(VAR_14->regmap);

 FUNC_12(VAR_11, VAR_14);

 switch (VAR_14->mode) {
 case 128:
  if (!FUNC_0(VAR_1))
   return -VAR_3;

  VAR_17 = FUNC_4(VAR_14, VAR_11);
  if (VAR_17 < 0)
   return VAR_17;
  break;
 case 129: {
  u32 VAR_22;

  if (!FUNC_0(VAR_0))
   return -VAR_3;

  VAR_22 = FUNC_5(VAR_14, VAR_7);
  VAR_22 &= ~VAR_8;
  FUNC_6(VAR_14, VAR_7, VAR_22);
  VAR_17 = FUNC_3(VAR_14, VAR_11);
  if (VAR_17 < 0)
   return VAR_17;
  break;
 }
 default:
  FUNC_7(VAR_12, "INVALID device type %d\n", VAR_14->mode);
 }

 return 0;
}
