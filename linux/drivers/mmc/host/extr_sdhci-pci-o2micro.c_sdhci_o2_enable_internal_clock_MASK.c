
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct sdhci_host {int mmc; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (struct sdhci_host*) ;
 int FUNC_7 (struct sdhci_host*,int ) ;
 int FUNC_8 (struct sdhci_host*,int ) ;
 int FUNC_9 (struct sdhci_host*,int ,int ) ;
 int FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct sdhci_host *VAR_4)
{
 ktime_t VAR_5;
 u16 VAR_6;
 u32 VAR_7;


 VAR_7 = FUNC_7(VAR_4, VAR_0);
 VAR_7 |= VAR_3;
 FUNC_9(VAR_4, VAR_7, VAR_0);
 FUNC_10(1);
 VAR_7 &= ~(VAR_3);
 FUNC_9(VAR_4, VAR_7, VAR_0);


 VAR_7 |= VAR_1;
 FUNC_9(VAR_4, VAR_7, VAR_0);


 VAR_5 = FUNC_0(FUNC_2(), 20);
 while (1) {
  bool VAR_8 = FUNC_1(FUNC_2(), VAR_5);

  VAR_6 = FUNC_8(VAR_4, VAR_0);
  if (VAR_6 & VAR_2)
   break;
  if (VAR_8) {
   FUNC_4("%s: Internal clock never stabilised.\n",
          FUNC_3(VAR_4->mmc));
   FUNC_5(VAR_4);
   goto out;
  }
  FUNC_10(10);
 }


 FUNC_10(1);
 FUNC_6(VAR_4);

out:

 VAR_7 = FUNC_7(VAR_4, VAR_0);
 VAR_7 &= ~VAR_1;
 FUNC_9(VAR_4, VAR_7, VAR_0);
}
