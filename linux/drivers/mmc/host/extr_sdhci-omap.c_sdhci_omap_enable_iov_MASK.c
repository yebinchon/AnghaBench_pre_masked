
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_omap_host {struct sdhci_host* host; } ;
struct sdhci_host {struct mmc_host* mmc; } ;
struct TYPE_2__ {int vqmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (int ,unsigned int,unsigned int) ;
 int FUNC_4 (struct sdhci_omap_host*,int,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct sdhci_omap_host *VAR_0,
     unsigned int VAR_1)
{
 int VAR_2;
 struct sdhci_host *VAR_3 = VAR_0->host;
 struct mmc_host *VAR_4 = VAR_3->mmc;

 VAR_2 = FUNC_4(VAR_0, 0, 0);
 if (VAR_2)
  return VAR_2;

 if (!FUNC_0(VAR_4->supply.vqmmc)) {
  VAR_2 = FUNC_3(VAR_4->supply.vqmmc, VAR_1, VAR_1);
  if (VAR_2) {
   FUNC_1(FUNC_2(VAR_4), "vqmmc set voltage failed\n");
   return VAR_2;
  }
 }

 VAR_2 = FUNC_4(VAR_0, 1, VAR_1);
 if (VAR_2)
  return VAR_2;

 return 0;
}
