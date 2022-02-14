
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sdhci_tegra {int pad_control_available; TYPE_1__* soc_data; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_host {TYPE_2__* mmc; } ;
struct TYPE_6__ {int vqmmc; } ;
struct TYPE_5__ {TYPE_3__ supply; } ;
struct TYPE_4__ {int nvquirks; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int) ;
 struct sdhci_tegra* FUNC_2 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_3 (struct sdhci_host*) ;

__attribute__((used)) static bool FUNC_4(struct sdhci_host *VAR_1)
{
 struct sdhci_pltfm_host *VAR_2 = FUNC_3(VAR_1);
 struct sdhci_tegra *VAR_3 = FUNC_2(VAR_2);
 int VAR_4, VAR_5;
 if (!(VAR_3->soc_data->nvquirks & VAR_0))
  return 1;

 if (FUNC_0(VAR_1->mmc->supply.vqmmc))
  return 0;

 VAR_4 = FUNC_1(VAR_1->mmc->supply.vqmmc,
       1700000, 1950000);

 VAR_5 = FUNC_1(VAR_1->mmc->supply.vqmmc,
       2700000, 3600000);

 if (VAR_4 == 1 && VAR_5 == 1)
  return VAR_3->pad_control_available;


 return 1;
}
