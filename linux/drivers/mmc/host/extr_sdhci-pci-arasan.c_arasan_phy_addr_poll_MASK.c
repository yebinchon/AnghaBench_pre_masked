
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sdhci_host {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sdhci_host*,int ) ;

__attribute__((used)) static int FUNC_4(struct sdhci_host *VAR_2, u32 VAR_3, u32 VAR_4)
{
 ktime_t VAR_5 = FUNC_0(FUNC_2(), 100);
 bool VAR_6;
 u8 VAR_7 = 0;

 while (1) {
  VAR_6 = FUNC_1(FUNC_2(), VAR_5);
  VAR_7 = FUNC_3(VAR_2, VAR_1);
  if (!(VAR_7 & VAR_4))
   return 0;
  if (VAR_6)
   return -VAR_0;
 }
}
