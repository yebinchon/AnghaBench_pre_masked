
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int quirks2; } ;
struct mmc_command {int* resp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sdhci_host*,int) ;

__attribute__((used)) static void FUNC_1(struct sdhci_host *VAR_2, struct mmc_command *VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  VAR_5 = VAR_1 + (3 - VAR_4) * 4;
  VAR_3->resp[VAR_4] = FUNC_0(VAR_2, VAR_5);
 }

 if (VAR_2->quirks2 & VAR_0)
  return;


 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  VAR_3->resp[VAR_4] <<= 8;
  if (VAR_4 != 3)
   VAR_3->resp[VAR_4] |= VAR_3->resp[VAR_4 + 1] >> 24;
 }
}
