
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_host {scalar_t__ timing; int mmc; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 struct sdhci_host* FUNC_3 (struct mmc_host*) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (struct sdhci_host*,int) ;
 int FUNC_6 (struct mmc_host*,int ) ;

__attribute__((used)) static int FUNC_7(struct mmc_host *VAR_5, u32 VAR_6)
{
 struct sdhci_host *VAR_7 = FUNC_3(VAR_5);
 int VAR_8 = 0;
 int VAR_9 = 0;
 int VAR_10 = 0;
 int VAR_11;





 if (VAR_7->timing != VAR_3)
  return FUNC_6(VAR_5, VAR_6);

 if (FUNC_0(VAR_6 != VAR_2))
  return -VAR_0;

 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  if (FUNC_5(VAR_7, VAR_11) ||
      FUNC_4(VAR_7->mmc, VAR_6, ((void*)0))) {
   VAR_8 = 0;
  } else {
   VAR_8++;
   if (VAR_8 > VAR_9) {
    VAR_9 = VAR_8;
    VAR_10 = VAR_11;
   }
  }
 }

 if (!VAR_9) {
  FUNC_1(FUNC_2(VAR_7->mmc), "no tuning point found\n");
  return -VAR_1;
 }

 return FUNC_5(VAR_7, VAR_10 - VAR_9 / 2);
}
