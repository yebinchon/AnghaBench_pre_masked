
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {int mmc; } ;
struct sdhci_arasan_soc_ctl_map {int clockmultiplier; } ;
struct sdhci_arasan_data {int soc_ctl_base; struct sdhci_arasan_soc_ctl_map* soc_ctl_map; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct sdhci_host*,int *,int ) ;
 struct sdhci_arasan_data* FUNC_3 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_4 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_0,
      u32 VAR_1)
{
 struct sdhci_pltfm_host *VAR_2 = FUNC_4(VAR_0);
 struct sdhci_arasan_data *VAR_3 = FUNC_3(VAR_2);
 const struct sdhci_arasan_soc_ctl_map *VAR_4 =
  VAR_3->soc_ctl_map;


 if (!VAR_4)
  return;


 if (!VAR_3->soc_ctl_base) {
  FUNC_1("%s: Have regmap, but no soc-ctl-syscon\n",
   FUNC_0(VAR_0->mmc));
  return;
 }

 FUNC_2(VAR_0, &VAR_4->clockmultiplier, VAR_1);
}
