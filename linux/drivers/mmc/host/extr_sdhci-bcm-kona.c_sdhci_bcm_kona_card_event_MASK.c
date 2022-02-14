
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_host {int mmc; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sdhci_host*,int) ;

__attribute__((used)) static void FUNC_4(struct sdhci_host *VAR_0)
{
 if (FUNC_2(VAR_0->mmc) > 0) {
  FUNC_0(FUNC_1(VAR_0->mmc),
   "card inserted\n");
  FUNC_3(VAR_0, 1);
 } else {
  FUNC_0(FUNC_1(VAR_0->mmc),
   "card removed\n");
  FUNC_3(VAR_0, 0);
 }
}
