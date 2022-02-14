
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdhci_tegra_soc_data {int nvquirks; } ;
struct sdhci_tegra {int default_trim; int pad_calib_required; int ddr_signaling; int default_tap; struct sdhci_tegra_soc_data* soc_data; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;


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
 struct sdhci_tegra* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;
 int FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (struct sdhci_host*,int) ;
 int FUNC_4 (struct sdhci_host*,int,int ) ;
 scalar_t__ FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (struct sdhci_host*,int ) ;

__attribute__((used)) static void FUNC_7(struct sdhci_host *VAR_19, u8 VAR_20)
{
 struct sdhci_pltfm_host *VAR_21 = FUNC_1(VAR_19);
 struct sdhci_tegra *VAR_22 = FUNC_0(VAR_21);
 const struct sdhci_tegra_soc_data *VAR_23 = VAR_22->soc_data;
 u32 VAR_24, VAR_25, VAR_26;

 FUNC_3(VAR_19, VAR_20);

 if (!(VAR_20 & VAR_13))
  return;

 FUNC_6(VAR_19, VAR_22->default_tap);

 VAR_24 = FUNC_2(VAR_19, VAR_18);
 VAR_25 = FUNC_2(VAR_19, VAR_17);

 VAR_24 &= ~(VAR_10 |
         VAR_12 |
         VAR_9 |
         VAR_11);

 VAR_25 &= ~(VAR_7 |
        VAR_6);

 if (FUNC_5(VAR_19)) {

  if (VAR_23->nvquirks & VAR_1)
   VAR_24 |= VAR_10;

  if (VAR_23->nvquirks & VAR_3)
   VAR_24 |= VAR_12;
  if (VAR_23->nvquirks & VAR_0)
   VAR_24 |= VAR_9;
  if (VAR_23->nvquirks & VAR_2)
   VAR_24 |= VAR_11;
  if (VAR_23->nvquirks & VAR_12)
   VAR_25 |= VAR_5;
 }

 VAR_25 |= VAR_22->default_trim << VAR_8;

 FUNC_4(VAR_19, VAR_24, VAR_18);
 FUNC_4(VAR_19, VAR_25, VAR_17);

 if (VAR_23->nvquirks & VAR_4) {
  VAR_26 = FUNC_2(VAR_19, VAR_14);
  VAR_26 &= ~VAR_15;
  VAR_26 |= VAR_16;
  FUNC_4(VAR_19, VAR_26, VAR_14);

  VAR_22->pad_calib_required = 1;
 }

 VAR_22->ddr_signaling = 0;
}
