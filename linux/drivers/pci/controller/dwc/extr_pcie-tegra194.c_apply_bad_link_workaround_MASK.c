
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tegra_pcie_dw {int init_link_width; scalar_t__ pcie_cap_base; } ;
struct pcie_port {int dummy; } ;
struct dw_pcie {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct dw_pcie*,scalar_t__) ;
 int FUNC_2 (struct dw_pcie*,scalar_t__,int) ;
 struct dw_pcie* FUNC_3 (struct pcie_port*) ;
 struct tegra_pcie_dw* FUNC_4 (struct dw_pcie*) ;

__attribute__((used)) static void FUNC_5(struct pcie_port *VAR_9)
{
 struct dw_pcie *VAR_10 = FUNC_3(VAR_9);
 struct tegra_pcie_dw *VAR_11 = FUNC_4(VAR_10);
 u32 VAR_12;
 u16 VAR_13;






 VAR_13 = FUNC_1(VAR_10, VAR_11->pcie_cap_base + VAR_5);
 if (VAR_13 & VAR_6) {
  VAR_12 = (VAR_13 & VAR_7) >>
         VAR_8;
  if (VAR_11->init_link_width > VAR_12) {
   FUNC_0(VAR_10->dev, "PCIe link is bad, width reduced\n");
   VAR_13 = FUNC_1(VAR_10, VAR_11->pcie_cap_base +
      VAR_1);
   VAR_13 &= ~VAR_2;
   VAR_13 |= VAR_3;
   FUNC_2(VAR_10, VAR_11->pcie_cap_base +
        VAR_1, VAR_13);

   VAR_13 = FUNC_1(VAR_10, VAR_11->pcie_cap_base +
      VAR_0);
   VAR_13 |= VAR_4;
   FUNC_2(VAR_10, VAR_11->pcie_cap_base +
        VAR_0, VAR_13);
  }
 }
}
