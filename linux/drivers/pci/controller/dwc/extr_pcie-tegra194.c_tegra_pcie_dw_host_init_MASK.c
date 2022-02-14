
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_pcie_dw {int core_clk; scalar_t__ pcie_cap_base; int core_rst; } ;
struct pcie_port {int dummy; } ;
struct dw_pcie {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct tegra_pcie_dw*,int ) ;
 int FUNC_1 (struct tegra_pcie_dw*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct dw_pcie*,int ) ;
 int FUNC_5 (struct dw_pcie*,int) ;
 int FUNC_6 (struct dw_pcie*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct dw_pcie*) ;
 int FUNC_8 (struct dw_pcie*,int,int) ;
 int * VAR_12 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct pcie_port*) ;
 int FUNC_12 (struct pcie_port*) ;
 struct dw_pcie* FUNC_13 (struct pcie_port*) ;
 struct tegra_pcie_dw* FUNC_14 (struct dw_pcie*) ;

__attribute__((used)) static int FUNC_15(struct pcie_port *VAR_13)
{
 struct dw_pcie *VAR_14 = FUNC_13(VAR_13);
 struct tegra_pcie_dw *VAR_15 = FUNC_14(VAR_14);
 u32 VAR_16, VAR_17, VAR_18, VAR_19;

 FUNC_12(VAR_13);

 if (FUNC_7(VAR_14)) {
  VAR_16 = FUNC_0(VAR_15, VAR_2);
  VAR_16 &= VAR_3;
  VAR_16 >>= VAR_4;
  VAR_17 = FUNC_0(VAR_15, VAR_5);
  VAR_17 &= VAR_6;
  if (!(VAR_16 == 0x11 && !VAR_17)) {

   return 0;
  }

  FUNC_3(VAR_14->dev, "Link is down in DLL");
  FUNC_3(VAR_14->dev, "Trying again with DLFE disabled\n");

  VAR_16 = FUNC_0(VAR_15, VAR_0);
  VAR_16 &= ~VAR_1;
  FUNC_1(VAR_15, VAR_16, VAR_0);

  FUNC_9(VAR_15->core_rst);
  FUNC_10(VAR_15->core_rst);

  VAR_18 = FUNC_4(VAR_14, VAR_11);
  VAR_16 = FUNC_5(VAR_14, VAR_18 + VAR_7);
  VAR_16 &= ~VAR_8;
  FUNC_8(VAR_14, VAR_18, VAR_16);

  FUNC_12(VAR_13);

  if (FUNC_7(VAR_14))
   return 0;
 }

 VAR_19 = FUNC_6(VAR_14, VAR_15->pcie_cap_base + VAR_9) &
  VAR_10;
 FUNC_2(VAR_15->core_clk, VAR_12[VAR_19 - 1]);

 FUNC_11(VAR_13);

 return 0;
}
