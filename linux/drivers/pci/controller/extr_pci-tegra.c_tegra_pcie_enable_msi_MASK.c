
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pcie_soc {int msi_base_shift; } ;
struct tegra_msi {int phys; } ;
struct tegra_pcie {struct tegra_msi msi; struct tegra_pcie_soc* soc; } ;


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
 int FUNC_0 (struct tegra_pcie*,int ) ;
 int FUNC_1 (struct tegra_pcie*,int,int ) ;

__attribute__((used)) static void FUNC_2(struct tegra_pcie *VAR_13)
{
 const struct tegra_pcie_soc *VAR_14 = VAR_13->soc;
 struct tegra_msi *VAR_15 = &VAR_13->msi;
 u32 VAR_16;

 FUNC_1(VAR_13, VAR_15->phys >> VAR_14->msi_base_shift, VAR_12);
 FUNC_1(VAR_13, VAR_15->phys, VAR_2);

 FUNC_1(VAR_13, 1, VAR_3);


 FUNC_1(VAR_13, 0xffffffff, VAR_4);
 FUNC_1(VAR_13, 0xffffffff, VAR_5);
 FUNC_1(VAR_13, 0xffffffff, VAR_6);
 FUNC_1(VAR_13, 0xffffffff, VAR_7);
 FUNC_1(VAR_13, 0xffffffff, VAR_8);
 FUNC_1(VAR_13, 0xffffffff, VAR_9);
 FUNC_1(VAR_13, 0xffffffff, VAR_10);
 FUNC_1(VAR_13, 0xffffffff, VAR_11);


 VAR_16 = FUNC_0(VAR_13, VAR_0);
 VAR_16 |= VAR_1;
 FUNC_1(VAR_13, VAR_16, VAR_0);
}
