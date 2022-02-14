
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct sdhci_tegra_soc_data {int nvquirks; } ;
struct sdhci_tegra {struct sdhci_tegra_soc_data* soc_data; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sdhci_tegra* FUNC_0 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_1 (struct sdhci_host*) ;
 unsigned int FUNC_2 (struct sdhci_host*,int ) ;
 int FUNC_3 (struct sdhci_host*,int) ;
 int FUNC_4 (struct sdhci_host*,unsigned int,int ) ;
 int FUNC_5 (struct sdhci_host*,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct sdhci_host *VAR_6, unsigned int VAR_7)
{
 struct sdhci_pltfm_host *VAR_8 = FUNC_1(VAR_6);
 struct sdhci_tegra *VAR_9 = FUNC_0(VAR_8);
 const struct sdhci_tegra_soc_data *VAR_10 = VAR_9->soc_data;
 bool VAR_11 = 0;
 u32 VAR_12;







 if (VAR_10->nvquirks & VAR_0)
  VAR_11 = FUNC_5(VAR_6, 0);

 VAR_12 = FUNC_2(VAR_6, VAR_5);
 VAR_12 &= ~VAR_1;
 VAR_12 |= VAR_7 << VAR_2;
 FUNC_4(VAR_6, VAR_12, VAR_5);

 if (VAR_10->nvquirks & VAR_0 &&
     VAR_11) {
  FUNC_6(1);
  FUNC_3(VAR_6, VAR_3 | VAR_4);
  FUNC_5(VAR_6, VAR_11);
 }
}
