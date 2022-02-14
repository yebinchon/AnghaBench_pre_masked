
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sdhci_host {int quirks2; int mmc; scalar_t__ clock; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (struct sdhci_host*,int ) ;
 int FUNC_7 (struct sdhci_host*) ;
 int FUNC_8 (struct sdhci_host*,int,int ) ;
 int FUNC_9 (int) ;

void FUNC_10(struct sdhci_host *VAR_3, u8 VAR_4)
{
 ktime_t VAR_5;

 FUNC_8(VAR_3, VAR_4, VAR_2);

 if (VAR_4 & VAR_1) {
  VAR_3->clock = 0;

  if (VAR_3->quirks2 & VAR_0)
   FUNC_7(VAR_3);
 }


 VAR_5 = FUNC_0(FUNC_2(), 100);


 while (1) {
  bool VAR_6 = FUNC_1(FUNC_2(), VAR_5);

  if (!(FUNC_6(VAR_3, VAR_2) & VAR_4))
   break;
  if (VAR_6) {
   FUNC_4("%s: Reset 0x%x never completed.\n",
    FUNC_3(VAR_3->mmc), (int)VAR_4);
   FUNC_5(VAR_3);
   return;
  }
  FUNC_9(10);
 }
}
