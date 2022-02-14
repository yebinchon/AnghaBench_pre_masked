
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pcie_port {int dummy; } ;
struct dw_pcie {int dev; struct pcie_port pp; } ;
struct tegra_pcie_dw {scalar_t__ pcie_cap_base; struct dw_pcie pci; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (struct tegra_pcie_dw*,int ) ;
 int FUNC_1 (struct tegra_pcie_dw*,int,int ) ;
 int FUNC_2 (struct pcie_port*) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct dw_pcie*,int ) ;
 int FUNC_7 (struct dw_pcie*,scalar_t__) ;
 int FUNC_8 (struct dw_pcie*,int ,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static irqreturn_t FUNC_10(struct tegra_pcie_dw *VAR_25)
{
 struct dw_pcie *VAR_26 = &VAR_25->pci;
 struct pcie_port *VAR_27 = &VAR_26->pp;
 u32 VAR_28, VAR_29;
 u16 VAR_30;

 VAR_28 = FUNC_0(VAR_25, VAR_2);
 if (VAR_28 & VAR_5) {
  VAR_28 = FUNC_0(VAR_25, VAR_6);
  if (VAR_28 & VAR_7) {
   FUNC_1(VAR_25, VAR_28, VAR_6);


   VAR_28 = FUNC_0(VAR_25, VAR_0);
   VAR_28 &= ~VAR_1;
   FUNC_1(VAR_25, VAR_28, VAR_0);
   FUNC_9(1);
   VAR_28 = FUNC_0(VAR_25, VAR_0);
   VAR_28 |= VAR_1;
   FUNC_1(VAR_25, VAR_28, VAR_0);

   VAR_28 = FUNC_6(VAR_26, VAR_23);
   VAR_28 |= VAR_24;
   FUNC_8(VAR_26, VAR_23, VAR_28);
  }
 }

 if (VAR_28 & VAR_4) {
  VAR_28 = FUNC_0(VAR_25, VAR_12);
  if (VAR_28 & VAR_13) {
   FUNC_1(VAR_25,
        VAR_13,
        VAR_12);
   FUNC_2(VAR_27);
  }
  if (VAR_28 & VAR_14) {
   FUNC_1(VAR_25,
        VAR_14,
        VAR_12);

   VAR_30 = FUNC_7(VAR_26, VAR_25->pcie_cap_base +
        VAR_21);
   FUNC_3(VAR_26->dev, "Link Speed : Gen-%u\n", VAR_30 &
    VAR_22);
  }
 }

 VAR_28 = FUNC_0(VAR_25, VAR_2);
 if (VAR_28 & VAR_3) {
  VAR_28 = FUNC_0(VAR_25, VAR_8);
  VAR_29 = FUNC_6(VAR_26, VAR_19);
  if (VAR_28 & VAR_9) {
   FUNC_5(VAR_26->dev, "CDM check complete\n");
   VAR_29 |= VAR_17;
  }
  if (VAR_28 & VAR_10) {
   FUNC_4(VAR_26->dev, "CDM comparison mismatch\n");
   VAR_29 |= VAR_16;
  }
  if (VAR_28 & VAR_11) {
   FUNC_4(VAR_26->dev, "CDM Logic error\n");
   VAR_29 |= VAR_18;
  }
  FUNC_8(VAR_26, VAR_19, VAR_29);
  VAR_29 = FUNC_6(VAR_26, VAR_20);
  FUNC_4(VAR_26->dev, "CDM Error Address Offset = 0x%08X\n", VAR_29);
 }

 return VAR_15;
}
