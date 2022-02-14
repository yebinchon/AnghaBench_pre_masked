
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdhci_host {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int FUNC_0 (struct sdhci_host*,int,int*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct sdhci_host *VAR_1, u32 VAR_2, u32 VAR_3)
{
 int VAR_4;
 ktime_t VAR_5 = FUNC_1(FUNC_3(), 100);
 bool VAR_6;
 u8 VAR_7 = 0;

 while (1) {
  VAR_6 = FUNC_2(FUNC_3(), VAR_5);
  VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_7);
  if (VAR_4)
   return -VAR_0;
  else if (VAR_7 & VAR_3)
   return 0;
  if (VAR_6)
   return -VAR_0;
 }
}
