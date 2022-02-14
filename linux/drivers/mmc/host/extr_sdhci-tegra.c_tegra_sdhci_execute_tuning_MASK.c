
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {int mmc; } ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (struct sdhci_host*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct sdhci_host *VAR_0, u32 VAR_1)
{
 unsigned int VAR_2, VAR_3;






 VAR_2 = 10;
 while (VAR_2 < 255) {
  FUNC_1(VAR_0, VAR_2);
  if (!FUNC_0(VAR_0->mmc, VAR_1, ((void*)0)))
   break;
  VAR_2++;
 }


 VAR_3 = VAR_2 + 1;
 while (VAR_3 < 255) {
  FUNC_1(VAR_0, VAR_3);
  if (FUNC_0(VAR_0->mmc, VAR_1, ((void*)0))) {
   VAR_3--;
   break;
  }
  VAR_3++;
 }


 FUNC_1(VAR_0, VAR_2 + ((VAR_3 - VAR_2) * 3 / 4));

 return FUNC_0(VAR_0->mmc, VAR_1, ((void*)0));
}
