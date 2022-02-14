
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_omap_host {struct device* dev; } ;
struct sdhci_host {int dummy; } ;
struct mmc_ios {int signal_voltage; } ;
struct mmc_host {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device*,char*,unsigned int) ;
 int FUNC_1 (struct device*,char*,unsigned int) ;
 struct sdhci_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct sdhci_omap_host*,int ) ;
 int FUNC_4 (struct sdhci_omap_host*,unsigned int) ;
 int FUNC_5 (struct sdhci_omap_host*,int ) ;
 int FUNC_6 (struct sdhci_omap_host*,int ,int) ;
 struct sdhci_omap_host* FUNC_7 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_8 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_9(struct mmc_host *VAR_10,
        struct mmc_ios *VAR_11)
{
 u32 VAR_12;
 int VAR_13;
 unsigned int VAR_14;
 struct sdhci_host *VAR_15 = FUNC_2(VAR_10);
 struct sdhci_pltfm_host *VAR_16;
 struct sdhci_omap_host *VAR_17;
 struct device *VAR_18;

 VAR_16 = FUNC_8(VAR_15);
 VAR_17 = FUNC_7(VAR_16);
 VAR_18 = VAR_17->dev;

 if (VAR_11->signal_voltage == VAR_7) {
  VAR_12 = FUNC_5(VAR_17, VAR_9);
  if (!(VAR_12 & VAR_2))
   return -VAR_3;

  FUNC_3(VAR_17, VAR_11->signal_voltage);

  VAR_12 = FUNC_5(VAR_17, VAR_8);
  VAR_12 &= ~VAR_0;
  FUNC_6(VAR_17, VAR_8, VAR_12);

  VAR_14 = VAR_5;
 } else if (VAR_11->signal_voltage == VAR_6) {
  VAR_12 = FUNC_5(VAR_17, VAR_9);
  if (!(VAR_12 & VAR_1))
   return -VAR_3;

  FUNC_3(VAR_17, VAR_11->signal_voltage);

  VAR_12 = FUNC_5(VAR_17, VAR_8);
  VAR_12 |= VAR_0;
  FUNC_6(VAR_17, VAR_8, VAR_12);

  VAR_14 = VAR_4;
 } else {
  return -VAR_3;
 }

 VAR_13 = FUNC_4(VAR_17, VAR_14);
 if (VAR_13) {
  FUNC_1(VAR_18, "failed to switch IO voltage to %dmV\n", VAR_14);
  return VAR_13;
 }

 FUNC_0(VAR_18, "IO voltage switched to %dmV\n", VAR_14);
 return 0;
}
