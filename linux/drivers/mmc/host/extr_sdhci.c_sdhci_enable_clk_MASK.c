
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sdhci_host {scalar_t__ version; int mmc; scalar_t__ v4_mode; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (struct sdhci_host*,int ) ;
 int FUNC_7 (struct sdhci_host*,int,int ) ;
 int FUNC_8 (int) ;

void FUNC_9(struct sdhci_host *VAR_6, u16 VAR_7)
{
 ktime_t VAR_8;

 VAR_7 |= VAR_2;
 FUNC_7(VAR_6, VAR_7, VAR_1);


 VAR_8 = FUNC_0(FUNC_2(), 150);
 while (1) {
  bool VAR_9 = FUNC_1(FUNC_2(), VAR_8);

  VAR_7 = FUNC_6(VAR_6, VAR_1);
  if (VAR_7 & VAR_3)
   break;
  if (VAR_9) {
   FUNC_4("%s: Internal clock never stabilised.\n",
          FUNC_3(VAR_6->mmc));
   FUNC_5(VAR_6);
   return;
  }
  FUNC_8(10);
 }

 if (VAR_6->version >= VAR_5 && VAR_6->v4_mode) {
  VAR_7 |= VAR_4;
  VAR_7 &= ~VAR_3;
  FUNC_7(VAR_6, VAR_7, VAR_1);


  VAR_8 = FUNC_0(FUNC_2(), 150);
  while (1) {
   bool VAR_10 = FUNC_1(FUNC_2(), VAR_8);

   VAR_7 = FUNC_6(VAR_6, VAR_1);
   if (VAR_7 & VAR_3)
    break;
   if (VAR_10) {
    FUNC_4("%s: PLL clock never stabilised.\n",
           FUNC_3(VAR_6->mmc));
    FUNC_5(VAR_6);
    return;
   }
   FUNC_8(10);
  }
 }

 VAR_7 |= VAR_0;
 FUNC_7(VAR_6, VAR_7, VAR_1);
}
