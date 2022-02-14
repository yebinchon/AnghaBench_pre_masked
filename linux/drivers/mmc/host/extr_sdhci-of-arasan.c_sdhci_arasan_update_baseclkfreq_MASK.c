
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_pltfm_host {int clk; } ;
struct sdhci_host {int mmc; } ;
struct sdhci_arasan_soc_ctl_map {int baseclkfreq; } ;
struct sdhci_arasan_data {int soc_ctl_base; struct sdhci_arasan_soc_ctl_map* soc_ctl_map; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct sdhci_host*,int *,int ) ;
 struct sdhci_arasan_data* FUNC_5 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_6 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_7(struct sdhci_host *VAR_0)
{
 struct sdhci_pltfm_host *VAR_1 = FUNC_6(VAR_0);
 struct sdhci_arasan_data *VAR_2 = FUNC_5(VAR_1);
 const struct sdhci_arasan_soc_ctl_map *VAR_3 =
  VAR_2->soc_ctl_map;
 u32 VAR_4 = FUNC_0(FUNC_1(VAR_1->clk), 1000000);


 if (!VAR_3)
  return;


 if (!VAR_2->soc_ctl_base) {
  FUNC_3("%s: Have regmap, but no soc-ctl-syscon\n",
   FUNC_2(VAR_0->mmc));
  return;
 }

 FUNC_4(VAR_0, &VAR_3->baseclkfreq, VAR_4);
}
