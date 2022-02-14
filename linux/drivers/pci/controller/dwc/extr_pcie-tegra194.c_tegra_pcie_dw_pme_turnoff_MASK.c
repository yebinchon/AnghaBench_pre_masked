
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pcie_dw {int dev; scalar_t__ appl_base; int pci; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
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
 int FUNC_0 (struct tegra_pcie_dw*,int ) ;
 int FUNC_1 (struct tegra_pcie_dw*,int,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (scalar_t__,int,int,int,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct tegra_pcie_dw*) ;

__attribute__((used)) static void FUNC_7(struct tegra_pcie_dw *VAR_13)
{
 u32 VAR_14;
 int VAR_15;

 if (!FUNC_5(&VAR_13->pci)) {
  FUNC_2(VAR_13->dev, "PCIe link is not up...!\n");
  return;
 }

 if (FUNC_6(VAR_13)) {
  FUNC_3(VAR_13->dev, "Link didn't transition to L2 state\n");






  VAR_14 = FUNC_0(VAR_13, VAR_5);
  VAR_14 &= ~VAR_10;
  FUNC_1(VAR_13, VAR_14, VAR_5);

  VAR_15 = FUNC_4(VAR_13->appl_base + VAR_2,
      VAR_14,
      ((VAR_14 &
      VAR_3) >>
      VAR_4) ==
      VAR_11,
      1, VAR_12);
  if (VAR_15) {
   FUNC_3(VAR_13->dev, "Link didn't go to detect state\n");
  } else {

   VAR_14 = FUNC_0(VAR_13, VAR_0);
   VAR_14 &= ~VAR_1;
   FUNC_1(VAR_13, VAR_14, VAR_0);
  }
 }




 VAR_14 = FUNC_0(VAR_13, VAR_5);
 VAR_14 |= (VAR_7 | VAR_6);

 VAR_14 |= VAR_9;
 VAR_14 &= ~VAR_8;
 FUNC_1(VAR_13, VAR_14, VAR_5);
}
