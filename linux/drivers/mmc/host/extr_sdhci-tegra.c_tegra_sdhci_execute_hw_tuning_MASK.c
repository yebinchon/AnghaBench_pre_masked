
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int tuning_err; } ;
struct mmc_host {int dummy; } ;


 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*,int ) ;
 int FUNC_2 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_3(struct mmc_host *VAR_0, u32 VAR_1)
{
 struct sdhci_host *VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_3 && !VAR_2->tuning_err)
  FUNC_2(VAR_2);

 return VAR_3;
}
