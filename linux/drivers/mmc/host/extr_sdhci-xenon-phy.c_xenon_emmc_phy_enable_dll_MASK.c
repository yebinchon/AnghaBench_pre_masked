
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xenon_priv {scalar_t__ phy_type; struct xenon_emmc_phy_regs* emmc_phy_regs; } ;
struct xenon_emmc_phy_regs {int dll_update; int dll_ctrl; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {scalar_t__ clock; int mmc; } ;
typedef int ktime_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
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
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 struct xenon_priv* FUNC_6 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_7 (struct sdhci_host*) ;
 int FUNC_8 (struct sdhci_host*,int ) ;
 int FUNC_9 (struct sdhci_host*,int ) ;
 int FUNC_10 (struct sdhci_host*,int,int ) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct sdhci_host *VAR_14)
{
 u32 VAR_15;
 struct sdhci_pltfm_host *VAR_16 = FUNC_7(VAR_14);
 struct xenon_priv *VAR_17 = FUNC_6(VAR_16);
 struct xenon_emmc_phy_regs *VAR_18 = VAR_17->emmc_phy_regs;
 ktime_t VAR_19;

 if (FUNC_0(VAR_14->clock <= VAR_3))
  return -VAR_0;

 VAR_15 = FUNC_8(VAR_14, VAR_18->dll_ctrl);
 if (VAR_15 & VAR_5)
  return 0;


 VAR_15 = FUNC_8(VAR_14, VAR_18->dll_ctrl);
 VAR_15 |= (VAR_5 | VAR_6);






 VAR_15 &= ~((VAR_9 << VAR_10) |
   (VAR_9 << VAR_11));
 VAR_15 |= ((VAR_8 << VAR_10) |
  (VAR_8 << VAR_11));

 VAR_15 &= ~VAR_4;
 VAR_15 |= VAR_18->dll_update;
 if (VAR_17->phy_type == VAR_1)
  VAR_15 &= ~VAR_12;
 FUNC_10(VAR_14, VAR_15, VAR_18->dll_ctrl);


 VAR_19 = FUNC_2(FUNC_4(), 32);
 while (1) {
  bool VAR_20 = FUNC_3(FUNC_4(), VAR_19);

  if (FUNC_9(VAR_14, VAR_13) &
      VAR_7)
   break;
  if (VAR_20) {
   FUNC_1(FUNC_5(VAR_14->mmc), "Wait for DLL Lock time-out\n");
   return -VAR_2;
  }
  FUNC_11(100);
 }
 return 0;
}
