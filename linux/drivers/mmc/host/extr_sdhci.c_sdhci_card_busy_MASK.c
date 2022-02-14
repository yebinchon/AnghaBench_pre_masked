
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int dummy; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct sdhci_host*,int ) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_2)
{
 struct sdhci_host *VAR_3 = FUNC_0(VAR_2);
 u32 VAR_4;


 VAR_4 = FUNC_1(VAR_3, VAR_1);

 return !(VAR_4 & VAR_0);
}
