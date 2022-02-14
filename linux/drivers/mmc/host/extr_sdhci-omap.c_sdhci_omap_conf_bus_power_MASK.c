
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sdhci_omap_host {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct sdhci_omap_host*,int ) ;
 int FUNC_5 (struct sdhci_omap_host*,int ,int) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct sdhci_omap_host *VAR_7,
          unsigned char VAR_8)
{
 u32 VAR_9;
 ktime_t VAR_10;

 VAR_9 = FUNC_4(VAR_7, VAR_5);
 VAR_9 &= ~VAR_3;

 if (VAR_8 == VAR_4)
  VAR_9 |= VAR_2;
 else
  VAR_9 |= VAR_1;

 FUNC_5(VAR_7, VAR_5, VAR_9);

 VAR_9 |= VAR_0;
 FUNC_5(VAR_7, VAR_5, VAR_9);


 VAR_10 = FUNC_1(FUNC_3(), VAR_6);
 while (1) {
  bool VAR_11 = FUNC_2(FUNC_3(), VAR_10);

  if (FUNC_4(VAR_7, VAR_5) & VAR_0)
   break;
  if (FUNC_0(VAR_11))
   return;
  FUNC_6(5, 10);
 }
}
