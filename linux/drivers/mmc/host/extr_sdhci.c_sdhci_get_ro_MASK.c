
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int quirks; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sdhci_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_3(struct mmc_host *VAR_2)
{
 struct sdhci_host *VAR_3 = FUNC_0(VAR_2);
 int VAR_4, VAR_5;

 if (!(VAR_3->quirks & VAR_1))
  return FUNC_2(VAR_3);

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (FUNC_2(VAR_3)) {
   if (++VAR_5 > VAR_0 / 2)
    return 1;
  }
  FUNC_1(30);
 }
 return 0;
}
