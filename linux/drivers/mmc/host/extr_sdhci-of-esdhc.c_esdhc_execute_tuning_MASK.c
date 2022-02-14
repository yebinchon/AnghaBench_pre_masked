
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {unsigned int clock; int flags; int tuning_err; } ;
struct sdhci_esdhc {int peripheral_clock; int div_ratio; scalar_t__ quirk_fixup_tuning; scalar_t__ quirk_limited_clk_division; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sdhci_host*,unsigned int) ;
 int FUNC_1 (struct sdhci_host*,int) ;
 struct sdhci_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*,int) ;
 struct sdhci_esdhc* FUNC_4 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (struct sdhci_host*,int ) ;
 int FUNC_7 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static int FUNC_8(struct mmc_host *VAR_6, u32 VAR_7)
{
 struct sdhci_host *VAR_8 = FUNC_2(VAR_6);
 struct sdhci_pltfm_host *VAR_9 = FUNC_5(VAR_8);
 struct sdhci_esdhc *VAR_10 = FUNC_4(VAR_9);
 bool VAR_11;
 unsigned int VAR_12;
 u32 VAR_13;
 int VAR_14;




 VAR_12 = VAR_10->peripheral_clock / 3;
 if (VAR_8->clock > VAR_12)
  FUNC_0(VAR_8, VAR_12);

 if (VAR_10->quirk_limited_clk_division &&
     VAR_8->flags & VAR_5)
  FUNC_0(VAR_8, VAR_8->clock);

 FUNC_1(VAR_8, 1);

 VAR_11 = VAR_8->flags & VAR_5;
 VAR_14 = FUNC_3(VAR_6, VAR_7);

 if (VAR_11) {
  VAR_13 = FUNC_6(VAR_8, VAR_2);
  VAR_13 |= VAR_1;
  FUNC_7(VAR_8, VAR_13, VAR_2);
 }

 if (VAR_8->tuning_err == -VAR_0 && VAR_10->quirk_fixup_tuning) {




  VAR_13 = FUNC_6(VAR_8, VAR_4);
  VAR_13 = (VAR_13 & ~((0x7f << 8) | 0x7f)) |
  (3 * VAR_10->div_ratio) | ((5 * VAR_10->div_ratio) << 8);
  FUNC_7(VAR_8, VAR_13, VAR_4);




  VAR_13 = FUNC_6(VAR_8, VAR_3);
  VAR_13 |= 0x3;
  FUNC_7(VAR_8, VAR_13, VAR_3);
  FUNC_3(VAR_6, VAR_7);
 }
 return VAR_14;
}
