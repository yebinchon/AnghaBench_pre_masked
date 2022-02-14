
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int dummy; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct mmc_host*,int ) ;
 int FUNC_2 (struct sdhci_host*,int ) ;

__attribute__((used)) static int FUNC_3(struct mmc_host *VAR_1, u32 VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1, VAR_2);
 struct sdhci_host *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3)
  return VAR_3;






 FUNC_2(VAR_4, VAR_0);

 return 0;
}
