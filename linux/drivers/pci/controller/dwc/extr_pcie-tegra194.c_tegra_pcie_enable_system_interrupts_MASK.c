
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct tegra_pcie_dw {int init_link_width; scalar_t__ pcie_cap_base; int pci; scalar_t__ enable_cdm_check; } ;
struct pcie_port {int dummy; } ;
struct dw_pcie {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct tegra_pcie_dw*,int ) ;
 int FUNC_1 (struct tegra_pcie_dw*,int ,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__,int) ;
 struct dw_pcie* FUNC_4 (struct pcie_port*) ;
 struct tegra_pcie_dw* FUNC_5 (struct dw_pcie*) ;

__attribute__((used)) static void FUNC_6(struct pcie_port *VAR_13)
{
 struct dw_pcie *VAR_14 = FUNC_4(VAR_13);
 struct tegra_pcie_dw *VAR_15 = FUNC_5(VAR_14);
 u32 VAR_16;
 u16 VAR_17;

 VAR_16 = FUNC_0(VAR_15, VAR_0);
 VAR_16 |= VAR_2;
 FUNC_1(VAR_15, VAR_16, VAR_0);

 VAR_16 = FUNC_0(VAR_15, VAR_3);
 VAR_16 |= VAR_4;
 FUNC_1(VAR_15, VAR_16, VAR_3);

 if (VAR_15->enable_cdm_check) {
  VAR_16 = FUNC_0(VAR_15, VAR_0);
  VAR_16 |= VAR_1;
  FUNC_1(VAR_15, VAR_16, VAR_0);

  VAR_16 = FUNC_0(VAR_15, VAR_5);
  VAR_16 |= VAR_6;
  VAR_16 |= VAR_7;
  FUNC_1(VAR_15, VAR_16, VAR_5);
 }

 VAR_17 = FUNC_2(&VAR_15->pci, VAR_15->pcie_cap_base +
      VAR_10);
 VAR_15->init_link_width = (VAR_17 & VAR_11) >>
    VAR_12;

 VAR_17 = FUNC_2(&VAR_15->pci, VAR_15->pcie_cap_base +
      VAR_8);
 VAR_17 |= VAR_9;
 FUNC_3(&VAR_15->pci, VAR_15->pcie_cap_base + VAR_8,
      VAR_17);
}
