
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xenon_priv {struct xenon_emmc_phy_regs* emmc_phy_regs; } ;
struct xenon_emmc_phy_regs {int timing_adj; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int clock; int mmc; } ;


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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 struct xenon_priv* FUNC_2 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*,int ) ;
 int FUNC_5 (struct sdhci_host*,int,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct sdhci_host *VAR_11)
{
 u32 VAR_12;
 u32 VAR_13, VAR_14;
 struct sdhci_pltfm_host *VAR_15 = FUNC_3(VAR_11);
 struct xenon_priv *VAR_16 = FUNC_2(VAR_15);
 struct xenon_emmc_phy_regs *VAR_17 = VAR_16->emmc_phy_regs;

 VAR_12 = FUNC_4(VAR_11, VAR_17->timing_adj);
 VAR_12 |= VAR_8;
 FUNC_5(VAR_11, VAR_12, VAR_17->timing_adj);


 VAR_13 = ((VAR_12 >> VAR_4) &
   VAR_3);

 VAR_13 += ((VAR_12 >> VAR_6) &
   VAR_5);

 VAR_13 += ((VAR_12 >> VAR_2) &
   VAR_1);

 VAR_13 += ((VAR_12 >> VAR_10) &
   VAR_9);

 VAR_13 += 8;
 VAR_13 <<= 20;

 VAR_14 = VAR_11->clock;
 if (!VAR_14)

  VAR_14 = VAR_7;

 VAR_13 /= VAR_14;
 VAR_13++;

 FUNC_6(VAR_13);

 VAR_12 = FUNC_4(VAR_11, VAR_17->timing_adj);
 VAR_12 &= VAR_8;
 if (VAR_12) {
  FUNC_0(FUNC_1(VAR_11->mmc), "eMMC PHY init cannot complete after %d us\n",
   VAR_13);
  return -VAR_0;
 }

 return 0;
}
