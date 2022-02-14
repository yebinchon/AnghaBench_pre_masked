
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sdhci_host {int mmc; int tuning_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sdhci_host*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct sdhci_host*,int ) ;
 int FUNC_4 (struct sdhci_host*,int ) ;
 int FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (struct sdhci_host*,int ) ;
 int FUNC_7 (struct sdhci_host*) ;

__attribute__((used)) static int FUNC_8(struct sdhci_host *VAR_6, u32 VAR_7)
{
 int VAR_8;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  FUNC_0(VAR_6, !!VAR_9);
  FUNC_7(VAR_6);

  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   u16 VAR_10;

   FUNC_6(VAR_6, VAR_7);

   if (!VAR_6->tuning_done) {
    FUNC_3(VAR_6, VAR_7);
    break;
   }

   VAR_10 = FUNC_4(VAR_6, VAR_5);
   if (!(VAR_10 & VAR_3)) {
    if (VAR_10 & VAR_4)
     return 0;
    break;
   }
  }
 }
 if (!VAR_6->tuning_done) {
  FUNC_2("%s: Tuning timeout, falling back to fixed sampling clock\n",
   FUNC_1(VAR_6->mmc));
  return -VAR_1;
 }

 FUNC_2("%s: Tuning failed, falling back to fixed sampling clock\n",
  FUNC_1(VAR_6->mmc));
 FUNC_5(VAR_6);

 return -VAR_0;
}
