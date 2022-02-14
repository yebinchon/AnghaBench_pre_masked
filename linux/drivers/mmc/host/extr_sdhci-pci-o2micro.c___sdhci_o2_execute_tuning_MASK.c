
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sdhci_host {int tuning_done; int mmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct sdhci_host*,int ) ;
 int FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (struct sdhci_host*,int ) ;

__attribute__((used)) static void FUNC_7(struct sdhci_host *VAR_4, u32 VAR_5)
{
 int VAR_6;

 FUNC_6(VAR_4, VAR_0);

 for (VAR_6 = 0; VAR_6 < 150; VAR_6++) {
  u16 VAR_7 = FUNC_4(VAR_4, VAR_3);

  if (!(VAR_7 & VAR_1)) {
   if (VAR_7 & VAR_2) {
    VAR_4->tuning_done = 1;
    return;
   }
   FUNC_3("%s: HW tuning failed !\n",
    FUNC_1(VAR_4->mmc));
   break;
  }

  FUNC_0(1);
 }

 FUNC_2("%s: Tuning failed, falling back to fixed sampling clock\n",
  FUNC_1(VAR_4->mmc));
 FUNC_5(VAR_4);
}
