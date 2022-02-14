
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imx6_pcie {int gpio_active_high; scalar_t__ vpcie; int pcie_phy; int pcie_bus; int pcie; int iomuxc_gpr; scalar_t__ phy_base; int pciephy_reset; TYPE_1__* drvdata; int reset_gpio; struct dw_pcie* pci; } ;
struct dw_pcie {struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int variant; } ;




 int VAR_0 ;

 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct imx6_pcie*) ;
 int FUNC_7 (struct imx6_pcie*) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int,int) ;
 int FUNC_16 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_17(struct imx6_pcie *VAR_11)
{
 struct dw_pcie *VAR_12 = VAR_11->pci;
 struct device *VAR_13 = VAR_12->dev;
 int VAR_14;

 if (VAR_11->vpcie && !FUNC_13(VAR_11->vpcie)) {
  VAR_14 = FUNC_12(VAR_11->vpcie);
  if (VAR_14) {
   FUNC_2(VAR_13, "failed to enable vpcie regulator: %d\n",
    VAR_14);
   return;
  }
 }

 VAR_14 = FUNC_1(VAR_11->pcie_phy);
 if (VAR_14) {
  FUNC_2(VAR_13, "unable to enable pcie_phy clock\n");
  goto err_pcie_phy;
 }

 VAR_14 = FUNC_1(VAR_11->pcie_bus);
 if (VAR_14) {
  FUNC_2(VAR_13, "unable to enable pcie_bus clock\n");
  goto err_pcie_bus;
 }

 VAR_14 = FUNC_1(VAR_11->pcie);
 if (VAR_14) {
  FUNC_2(VAR_13, "unable to enable pcie clock\n");
  goto err_pcie;
 }

 VAR_14 = FUNC_6(VAR_11);
 if (VAR_14) {
  FUNC_2(VAR_13, "unable to enable pcie ref clock\n");
  goto err_ref_clk;
 }


 FUNC_15(200, 500);


 if (FUNC_4(VAR_11->reset_gpio)) {
  FUNC_5(VAR_11->reset_gpio,
     VAR_11->gpio_active_high);
  FUNC_9(100);
  FUNC_5(VAR_11->reset_gpio,
     !VAR_11->gpio_active_high);
 }

 switch (VAR_11->drvdata->variant) {
 case 128:
  FUNC_14(VAR_11->pciephy_reset);
  break;
 case 129:
  FUNC_14(VAR_11->pciephy_reset);





  if (FUNC_8(VAR_11->phy_base)) {

   FUNC_16(VAR_10,
          VAR_11->phy_base + VAR_9);

   FUNC_16(VAR_6
    | VAR_5,
          VAR_11->phy_base + VAR_4);

   FUNC_16(VAR_8,
          VAR_11->phy_base + VAR_7);
  } else {
   FUNC_3(VAR_13, "Unable to apply ERR010728 workaround. DT missing fsl,imx7d-pcie-phy phandle ?\n");
  }

  FUNC_7(VAR_11);
  break;
 case 130:
  FUNC_10(VAR_11->iomuxc_gpr, VAR_3,
       VAR_1, 0);
  break;
 case 131:
  FUNC_10(VAR_11->iomuxc_gpr, VAR_2,
       VAR_0, 0);

  FUNC_15(200, 500);
  break;
 case 132:
  break;
 }

 return;

err_ref_clk:
 FUNC_0(VAR_11->pcie);
err_pcie:
 FUNC_0(VAR_11->pcie_bus);
err_pcie_bus:
 FUNC_0(VAR_11->pcie_phy);
err_pcie_phy:
 if (VAR_11->vpcie && FUNC_13(VAR_11->vpcie) > 0) {
  VAR_14 = FUNC_11(VAR_11->vpcie);
  if (VAR_14)
   FUNC_2(VAR_13, "failed to disable vpcie regulator: %d\n",
    VAR_14);
 }
}
