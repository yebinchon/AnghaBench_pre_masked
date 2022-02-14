
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct resource {int start; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct imx6_pcie {int reset_gpio; int controller_id; int tx_deemph_gen1; int tx_deemph_gen2_3p5db; int tx_deemph_gen2_6db; int tx_swing_full; int tx_swing_low; int link_gen; int * vpcie; int * iomuxc_gpr; int * turnoff_reset; int * apps_reset; int * pciephy_reset; int * pcie_aux; int * pcie_inbound_axi; TYPE_1__* drvdata; int * pcie; int * pcie_bus; int * pcie_phy; scalar_t__ gpio_active_high; int * phy_base; struct dw_pcie* pci; } ;
struct dw_pcie {int * dbi_base; int * ops; struct device* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int variant; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*) ;
 void* FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,int,int ,char*) ;
 void* FUNC_5 (struct device*,struct resource*) ;
 void* FUNC_6 (struct device*,int,int ) ;
 int * FUNC_7 (struct device*,char*) ;
 void* FUNC_8 (struct device*,char*) ;
 int * FUNC_9 (struct device*,char*) ;
 int VAR_11 ;
 int FUNC_10 (struct dw_pcie*,scalar_t__) ;
 int FUNC_11 (struct dw_pcie*,scalar_t__,int ) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct imx6_pcie*,struct platform_device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device_node*,int ,struct resource*) ;
 TYPE_1__* FUNC_16 (struct device*) ;
 int FUNC_17 (struct device_node*,char*,int ) ;
 struct device_node* FUNC_18 (struct device_node*,char*,int ) ;
 scalar_t__ FUNC_19 (struct device_node*,char*) ;
 int FUNC_20 (struct device_node*,char*,int*) ;
 scalar_t__ FUNC_21 () ;
 struct resource* FUNC_22 (struct platform_device*,int ,int ) ;
 int FUNC_23 (struct platform_device*,struct imx6_pcie*) ;
 int * FUNC_24 (char*) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_12)
{
 struct device *VAR_13 = &VAR_12->dev;
 struct dw_pcie *VAR_14;
 struct imx6_pcie *VAR_15;
 struct device_node *VAR_16;
 struct resource *VAR_17;
 struct device_node *VAR_18 = VAR_13->of_node;
 int VAR_19;
 u16 VAR_20;

 VAR_15 = FUNC_6(VAR_13, sizeof(*VAR_15), VAR_3);
 if (!VAR_15)
  return -VAR_1;

 VAR_14 = FUNC_6(VAR_13, sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->dev = VAR_13;
 VAR_14->ops = &VAR_11;

 VAR_15->pci = VAR_14;
 VAR_15->drvdata = FUNC_16(VAR_13);


 VAR_16 = FUNC_18(VAR_18, "fsl,imx7d-pcie-phy", 0);
 if (VAR_16) {
  struct resource VAR_21;

  VAR_19 = FUNC_15(VAR_16, 0, &VAR_21);
  if (VAR_19) {
   FUNC_2(VAR_13, "Unable to map PCIe PHY\n");
   return VAR_19;
  }
  VAR_15->phy_base = FUNC_5(VAR_13, &VAR_21);
  if (FUNC_0(VAR_15->phy_base)) {
   FUNC_2(VAR_13, "Unable to map PCIe PHY\n");
   return FUNC_1(VAR_15->phy_base);
  }
 }

 VAR_17 = FUNC_22(VAR_12, VAR_7, 0);
 VAR_14->dbi_base = FUNC_5(VAR_13, VAR_17);
 if (FUNC_0(VAR_14->dbi_base))
  return FUNC_1(VAR_14->dbi_base);


 VAR_15->reset_gpio = FUNC_17(VAR_18, "reset-gpio", 0);
 VAR_15->gpio_active_high = FUNC_19(VAR_18,
      "reset-gpio-active-high");
 if (FUNC_12(VAR_15->reset_gpio)) {
  VAR_19 = FUNC_4(VAR_13, VAR_15->reset_gpio,
    VAR_15->gpio_active_high ?
     VAR_4 :
     VAR_5,
    "PCIe reset");
  if (VAR_19) {
   FUNC_2(VAR_13, "unable to get reset gpio\n");
   return VAR_19;
  }
 } else if (VAR_15->reset_gpio == -VAR_2) {
  return VAR_15->reset_gpio;
 }


 VAR_15->pcie_phy = FUNC_3(VAR_13, "pcie_phy");
 if (FUNC_0(VAR_15->pcie_phy)) {
  FUNC_2(VAR_13, "pcie_phy clock source missing or invalid\n");
  return FUNC_1(VAR_15->pcie_phy);
 }

 VAR_15->pcie_bus = FUNC_3(VAR_13, "pcie_bus");
 if (FUNC_0(VAR_15->pcie_bus)) {
  FUNC_2(VAR_13, "pcie_bus clock source missing or invalid\n");
  return FUNC_1(VAR_15->pcie_bus);
 }

 VAR_15->pcie = FUNC_3(VAR_13, "pcie");
 if (FUNC_0(VAR_15->pcie)) {
  FUNC_2(VAR_13, "pcie clock source missing or invalid\n");
  return FUNC_1(VAR_15->pcie);
 }

 switch (VAR_15->drvdata->variant) {
 case 130:
  VAR_15->pcie_inbound_axi = FUNC_3(VAR_13,
          "pcie_inbound_axi");
  if (FUNC_0(VAR_15->pcie_inbound_axi)) {
   FUNC_2(VAR_13, "pcie_inbound_axi clock missing or invalid\n");
   return FUNC_1(VAR_15->pcie_inbound_axi);
  }
  break;
 case 128:
  VAR_15->pcie_aux = FUNC_3(VAR_13, "pcie_aux");
  if (FUNC_0(VAR_15->pcie_aux)) {
   FUNC_2(VAR_13, "pcie_aux clock source missing or invalid\n");
   return FUNC_1(VAR_15->pcie_aux);
  }

 case 129:
  if (VAR_17->start == VAR_6)
   VAR_15->controller_id = 1;

  VAR_15->pciephy_reset = FUNC_8(VAR_13,
             "pciephy");
  if (FUNC_0(VAR_15->pciephy_reset)) {
   FUNC_2(VAR_13, "Failed to get PCIEPHY reset control\n");
   return FUNC_1(VAR_15->pciephy_reset);
  }

  VAR_15->apps_reset = FUNC_8(VAR_13,
          "apps");
  if (FUNC_0(VAR_15->apps_reset)) {
   FUNC_2(VAR_13, "Failed to get PCIE APPS reset control\n");
   return FUNC_1(VAR_15->apps_reset);
  }
  break;
 default:
  break;
 }


 VAR_15->turnoff_reset = FUNC_9(VAR_13, "turnoff");
 if (FUNC_0(VAR_15->turnoff_reset)) {
  FUNC_2(VAR_13, "Failed to get TURNOFF reset control\n");
  return FUNC_1(VAR_15->turnoff_reset);
 }


 VAR_15->iomuxc_gpr =
   FUNC_24("fsl,imx6q-iomuxc-gpr");
 if (FUNC_0(VAR_15->iomuxc_gpr)) {
  FUNC_2(VAR_13, "unable to find iomuxc registers\n");
  return FUNC_1(VAR_15->iomuxc_gpr);
 }


 if (FUNC_20(VAR_18, "fsl,tx-deemph-gen1",
     &VAR_15->tx_deemph_gen1))
  VAR_15->tx_deemph_gen1 = 0;

 if (FUNC_20(VAR_18, "fsl,tx-deemph-gen2-3p5db",
     &VAR_15->tx_deemph_gen2_3p5db))
  VAR_15->tx_deemph_gen2_3p5db = 0;

 if (FUNC_20(VAR_18, "fsl,tx-deemph-gen2-6db",
     &VAR_15->tx_deemph_gen2_6db))
  VAR_15->tx_deemph_gen2_6db = 20;

 if (FUNC_20(VAR_18, "fsl,tx-swing-full",
     &VAR_15->tx_swing_full))
  VAR_15->tx_swing_full = 127;

 if (FUNC_20(VAR_18, "fsl,tx-swing-low",
     &VAR_15->tx_swing_low))
  VAR_15->tx_swing_low = 127;


 VAR_19 = FUNC_20(VAR_18, "fsl,max-link-speed",
       &VAR_15->link_gen);
 if (VAR_19)
  VAR_15->link_gen = 1;

 VAR_15->vpcie = FUNC_7(&VAR_12->dev, "vpcie");
 if (FUNC_0(VAR_15->vpcie)) {
  if (FUNC_1(VAR_15->vpcie) != -VAR_0)
   return FUNC_1(VAR_15->vpcie);
  VAR_15->vpcie = ((void*)0);
 }

 FUNC_23(VAR_12, VAR_15);

 VAR_19 = FUNC_14(VAR_13);
 if (VAR_19)
  return VAR_19;

 VAR_19 = FUNC_13(VAR_15, VAR_12);
 if (VAR_19 < 0)
  return VAR_19;

 if (FUNC_21()) {
  VAR_20 = FUNC_10(VAR_14, VAR_8 +
     VAR_9);
  VAR_20 |= VAR_10;
  FUNC_11(VAR_14, VAR_8 + VAR_9,
       VAR_20);
 }

 return 0;
}
