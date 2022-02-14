
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spear13xx_pcie {scalar_t__ is_gen1; struct pcie_app_reg* app_base; struct dw_pcie* pci; } ;
struct pcie_port {int dummy; } ;
struct pcie_app_reg {int app_ctrl_0; } ;
struct dw_pcie {int dbi_base; int dev; struct pcie_port pp; } ;


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
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct dw_pcie*) ;
 int FUNC_2 (int,int,int*) ;
 int FUNC_3 (struct pcie_port*) ;
 int FUNC_4 (struct dw_pcie*) ;
 int FUNC_5 (int,int,int) ;
 int FUNC_6 (int,int *) ;

__attribute__((used)) static int FUNC_7(struct spear13xx_pcie *VAR_13)
{
 struct dw_pcie *VAR_14 = VAR_13->pci;
 struct pcie_port *VAR_15 = &VAR_14->pp;
 struct pcie_app_reg *VAR_16 = VAR_13->app_base;
 u32 VAR_17;
 u32 VAR_18 = VAR_2;

 if (FUNC_1(VAR_14)) {
  FUNC_0(VAR_14->dev, "link already up\n");
  return 0;
 }

 FUNC_3(VAR_15);






 FUNC_2(VAR_14->dbi_base + VAR_18 + VAR_5, 2, &VAR_17);
 VAR_17 &= ~VAR_6;
 FUNC_5(VAR_14->dbi_base + VAR_18 + VAR_5, 2, VAR_17);

 FUNC_5(VAR_14->dbi_base + VAR_11, 2, 0x104A);
 FUNC_5(VAR_14->dbi_base + VAR_4, 2, 0xCD80);





 if (VAR_13->is_gen1) {
  FUNC_2(VAR_14->dbi_base + VAR_18 + VAR_7,
        4, &VAR_17);
  if ((VAR_17 & VAR_8) != VAR_9) {
   VAR_17 &= ~((u32)VAR_8);
   VAR_17 |= VAR_9;
   FUNC_5(VAR_14->dbi_base + VAR_18 +
          VAR_7, 4, VAR_17);
  }

  FUNC_2(VAR_14->dbi_base + VAR_18 + VAR_10,
        2, &VAR_17);
  if ((VAR_17 & VAR_8) != VAR_9) {
   VAR_17 &= ~((u32)VAR_8);
   VAR_17 |= VAR_9;
   FUNC_5(VAR_14->dbi_base + VAR_18 +
          VAR_10, 2, VAR_17);
  }
 }


 FUNC_6(VAR_1 | (1 << VAR_3)
   | (1 << VAR_0)
   | ((u32)1 << VAR_12),
   &VAR_16->app_ctrl_0);

 return FUNC_4(VAR_14);
}
