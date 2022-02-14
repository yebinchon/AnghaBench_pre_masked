
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdhci_tegra_soc_data {int nvquirks; } ;
struct sdhci_tegra {struct sdhci_tegra_soc_data* soc_data; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {scalar_t__ ioaddr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 struct sdhci_tegra* FUNC_1 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_2 (struct sdhci_host*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct sdhci_host *VAR_7, u32 VAR_8, int VAR_9)
{
 struct sdhci_pltfm_host *VAR_10 = FUNC_2(VAR_7);
 struct sdhci_tegra *VAR_11 = FUNC_1(VAR_10);
 const struct sdhci_tegra_soc_data *VAR_12 = VAR_11->soc_data;





 if (FUNC_3(VAR_9 == VAR_6))
  VAR_8 &= ~(VAR_5|VAR_3);

 FUNC_5(VAR_8, VAR_7->ioaddr + VAR_9);

 if (FUNC_3((VAR_12->nvquirks & VAR_0) &&
   (VAR_9 == VAR_4))) {

  u8 VAR_13 = FUNC_0(VAR_7->ioaddr + VAR_1);
  if (VAR_8 & VAR_2)
   VAR_13 |= 0x8;
  else
   VAR_13 &= ~0x8;
  FUNC_4(VAR_13, VAR_7->ioaddr + VAR_1);
 }
}
