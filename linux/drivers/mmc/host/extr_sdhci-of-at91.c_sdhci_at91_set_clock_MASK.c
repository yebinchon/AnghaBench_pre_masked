
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sdhci_host {TYPE_1__* mmc; } ;
struct TYPE_2__ {scalar_t__ actual_clock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct sdhci_host*,unsigned int,scalar_t__*) ;
 int FUNC_4 (struct sdhci_host*,int ) ;
 int FUNC_5 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static void FUNC_6(struct sdhci_host *VAR_4, unsigned int VAR_5)
{
 u16 VAR_6;
 unsigned long VAR_7;

 VAR_4->mmc->actual_clock = 0;
 VAR_6 = FUNC_4(VAR_4, VAR_1);
 VAR_6 &= VAR_2;
 FUNC_5(VAR_4, VAR_6, VAR_1);

 if (VAR_5 == 0)
  return;

 VAR_6 = FUNC_3(VAR_4, VAR_5, &VAR_4->mmc->actual_clock);

 VAR_6 |= VAR_2;
 FUNC_5(VAR_4, VAR_6, VAR_1);


 VAR_7 = 20;
 while (!((VAR_6 = FUNC_4(VAR_4, VAR_1))
  & VAR_3)) {
  if (VAR_7 == 0) {
   FUNC_2("%s: Internal clock never stabilised.\n",
          FUNC_1(VAR_4->mmc));
   return;
  }
  VAR_7--;
  FUNC_0(1);
 }

 VAR_6 |= VAR_0;
 FUNC_5(VAR_4, VAR_6, VAR_1);
}
