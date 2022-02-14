
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
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
 int FUNC_5 (struct sdhci_host*,int ) ;
 int FUNC_6 (struct sdhci_host*,int,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct sdhci_host *VAR_4, bool VAR_5)
{
 u32 VAR_6;
 ktime_t VAR_7;

 VAR_6 = FUNC_5(VAR_4, VAR_3);

 if (VAR_5)
  VAR_6 |= VAR_0;
 else
  VAR_6 &= ~VAR_0;

 FUNC_6(VAR_4, VAR_6, VAR_3);


 VAR_7 = FUNC_0(FUNC_2(), 20);
 VAR_6 = VAR_1;
 while (1) {
  bool VAR_8 = FUNC_1(FUNC_2(), VAR_7);

  if (FUNC_5(VAR_4, VAR_2) & VAR_6)
   break;
  if (VAR_8) {
   FUNC_4("%s: Internal clock never stabilised.\n",
    FUNC_3(VAR_4->mmc));
   break;
  }
  FUNC_7(10);
 }
}
