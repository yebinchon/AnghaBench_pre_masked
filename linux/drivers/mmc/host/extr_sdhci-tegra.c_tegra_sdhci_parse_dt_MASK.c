
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_tegra {int enable_hwcq; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {TYPE_1__* mmc; } ;
struct TYPE_2__ {int parent; } ;


 scalar_t__ FUNC_0 (int ,char*) ;
 struct sdhci_tegra* FUNC_1 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (struct sdhci_host*) ;
 int FUNC_4 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_5(struct sdhci_host *VAR_0)
{
 struct sdhci_pltfm_host *VAR_1 = FUNC_2(VAR_0);
 struct sdhci_tegra *VAR_2 = FUNC_1(VAR_1);

 if (FUNC_0(VAR_0->mmc->parent, "supports-cqe"))
  VAR_2->enable_hwcq = 1;
 else
  VAR_2->enable_hwcq = 0;

 FUNC_3(VAR_0);
 FUNC_4(VAR_0);
}
