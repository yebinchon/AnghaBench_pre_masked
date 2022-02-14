
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pcie_dw {int dummy; } ;
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
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct tegra_pcie_dw*,int ) ;
 int FUNC_2 (struct tegra_pcie_dw*,int ,int ) ;
 struct dw_pcie* FUNC_3 (struct pcie_port*) ;
 struct tegra_pcie_dw* FUNC_4 (struct dw_pcie*) ;

__attribute__((used)) static void FUNC_5(struct pcie_port *VAR_9)
{
 struct dw_pcie *VAR_10 = FUNC_3(VAR_9);
 struct tegra_pcie_dw *VAR_11 = FUNC_4(VAR_10);
 u32 VAR_12;


 VAR_12 = FUNC_1(VAR_11, VAR_0);
 VAR_12 |= VAR_2;
 VAR_12 |= VAR_1;
 FUNC_2(VAR_11, VAR_12, VAR_0);

 VAR_12 = FUNC_1(VAR_11, VAR_3);
 VAR_12 |= VAR_7;
 VAR_12 |= VAR_5;
 VAR_12 |= VAR_6;
 if (FUNC_0(VAR_8))
  VAR_12 |= VAR_4;
 FUNC_2(VAR_11, VAR_12, VAR_3);
}
