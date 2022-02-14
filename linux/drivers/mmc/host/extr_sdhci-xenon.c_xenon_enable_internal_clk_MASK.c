
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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sdhci_host*,int ) ;
 int FUNC_6 (struct sdhci_host*,int ) ;
 int FUNC_7 (struct sdhci_host*,int,int ) ;
 int FUNC_8 (int,int) ;

__attribute__((used)) static int FUNC_9(struct sdhci_host *VAR_4)
{
 u32 VAR_5;
 ktime_t VAR_6;

 VAR_5 = FUNC_5(VAR_4, VAR_1);
 VAR_5 |= VAR_2;
 FUNC_7(VAR_4, VAR_5, VAR_1);

 VAR_6 = FUNC_1(FUNC_3(), 20);
 while (1) {
  bool VAR_7 = FUNC_2(FUNC_3(), VAR_6);

  VAR_5 = FUNC_6(VAR_4, VAR_1);
  if (VAR_5 & VAR_3)
   break;
  if (VAR_7) {
   FUNC_0(FUNC_4(VAR_4->mmc), "Internal clock never stabilised.\n");
   return -VAR_0;
  }
  FUNC_8(900, 1100);
 }

 return 0;
}
