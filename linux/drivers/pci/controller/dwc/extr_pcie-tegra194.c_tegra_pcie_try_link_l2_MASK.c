
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pcie_dw {scalar_t__ appl_base; int pci; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tegra_pcie_dw*,int ) ;
 int FUNC_1 (struct tegra_pcie_dw*,int,int ) ;
 int FUNC_2 (scalar_t__,int,int,int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct tegra_pcie_dw *VAR_5)
{
 u32 VAR_6;

 if (!FUNC_3(&VAR_5->pci))
  return 0;

 VAR_6 = FUNC_0(VAR_5, VAR_3);
 VAR_6 |= VAR_2;
 FUNC_1(VAR_5, VAR_6, VAR_3);

 return FUNC_2(VAR_5->appl_base + VAR_0, VAR_6,
     VAR_6 & VAR_1,
     1, VAR_4);
}
