
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tegra_pcie_dw {int pex_ctl_supply; int core_clk; int core_apb_rst; int supports_clkreq; int pci; int pcie_cap_base; int core_rst; TYPE_2__* atu_dma_res; TYPE_1__* dbi_res; int dev; int cid; } ;
struct TYPE_4__ {int start; } ;
struct TYPE_3__ {int start; } ;


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
 int FUNC_0 (struct tegra_pcie_dw*,int ) ;
 int FUNC_1 (struct tegra_pcie_dw*,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int,...) ;
 int FUNC_5 (struct tegra_pcie_dw*) ;
 int FUNC_6 (struct tegra_pcie_dw*) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct tegra_pcie_dw*,int) ;
 int FUNC_13 (struct tegra_pcie_dw*) ;
 int FUNC_14 (struct tegra_pcie_dw*) ;
 int FUNC_15 (struct tegra_pcie_dw*) ;

__attribute__((used)) static int FUNC_16(struct tegra_pcie_dw *VAR_19,
     bool VAR_20)
{
 int VAR_21;
 u32 VAR_22;

 VAR_21 = FUNC_12(VAR_19, 1);
 if (VAR_21) {
  FUNC_4(VAR_19->dev,
   "Failed to enable controller %u: %d\n", VAR_19->cid, VAR_21);
  return VAR_21;
 }

 VAR_21 = FUNC_15(VAR_19);
 if (VAR_21 < 0)
  goto fail_slot_reg_en;

 VAR_21 = FUNC_9(VAR_19->pex_ctl_supply);
 if (VAR_21 < 0) {
  FUNC_4(VAR_19->dev, "Failed to enable regulator: %d\n", VAR_21);
  goto fail_reg_en;
 }

 VAR_21 = FUNC_3(VAR_19->core_clk);
 if (VAR_21) {
  FUNC_4(VAR_19->dev, "Failed to enable core clock: %d\n", VAR_21);
  goto fail_core_clk;
 }

 VAR_21 = FUNC_11(VAR_19->core_apb_rst);
 if (VAR_21) {
  FUNC_4(VAR_19->dev, "Failed to deassert core APB reset: %d\n",
   VAR_21);
  goto fail_core_apb_rst;
 }

 if (VAR_20) {

  VAR_22 = FUNC_0(VAR_19, VAR_8);
  VAR_22 &= ~(VAR_10 <<
    VAR_11);
  VAR_22 |= VAR_9;
  FUNC_1(VAR_19, VAR_22, VAR_8);
 }

 VAR_21 = FUNC_14(VAR_19);
 if (VAR_21) {
  FUNC_4(VAR_19->dev, "Failed to enable PHY: %d\n", VAR_21);
  goto fail_phy;
 }


 FUNC_1(VAR_19, VAR_19->dbi_res->start & VAR_1,
      VAR_0);


 FUNC_1(VAR_19, VAR_14, VAR_13);

 FUNC_1(VAR_19, 0x0, VAR_7);

 VAR_22 = FUNC_0(VAR_19, VAR_8);
 FUNC_1(VAR_19, VAR_22 | VAR_12, VAR_8);

 VAR_22 = FUNC_0(VAR_19, VAR_4);
 VAR_22 |= (VAR_6 << VAR_5);
 FUNC_1(VAR_19, VAR_22, VAR_4);

 if (!VAR_19->supports_clkreq) {
  VAR_22 = FUNC_0(VAR_19, VAR_15);
  VAR_22 |= VAR_17;
  VAR_22 |= VAR_16;
  FUNC_1(VAR_19, VAR_22, VAR_15);
 }


 FUNC_1(VAR_19,
      VAR_19->atu_dma_res->start & VAR_3,
      VAR_2);

 FUNC_11(VAR_19->core_rst);

 VAR_19->pcie_cap_base = FUNC_7(&VAR_19->pci,
            VAR_18);


 if (!VAR_19->supports_clkreq) {
  FUNC_5(VAR_19);
  FUNC_6(VAR_19);
 }

 return VAR_21;

fail_phy:
 FUNC_10(VAR_19->core_apb_rst);
fail_core_apb_rst:
 FUNC_2(VAR_19->core_clk);
fail_core_clk:
 FUNC_8(VAR_19->pex_ctl_supply);
fail_reg_en:
 FUNC_13(VAR_19);
fail_slot_reg_en:
 FUNC_12(VAR_19, 0);

 return VAR_21;
}
