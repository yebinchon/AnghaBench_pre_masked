
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_tegra {int default_tap; int default_trim; int dqs_trim; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {TYPE_1__* mmc; } ;
struct TYPE_2__ {int parent; } ;


 int FUNC_0 (int ,char*,int*) ;
 struct sdhci_tegra* FUNC_1 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_2 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_0)
{
 struct sdhci_pltfm_host *VAR_1 = FUNC_2(VAR_0);
 struct sdhci_tegra *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0->mmc->parent, "nvidia,default-tap",
           &VAR_2->default_tap);
 if (VAR_3)
  VAR_2->default_tap = 0;

 VAR_3 = FUNC_0(VAR_0->mmc->parent, "nvidia,default-trim",
           &VAR_2->default_trim);
 if (VAR_3)
  VAR_2->default_trim = 0;

 VAR_3 = FUNC_0(VAR_0->mmc->parent, "nvidia,dqs-trim",
           &VAR_2->dqs_trim);
 if (VAR_3)
  VAR_2->dqs_trim = 0x11;
}
