
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdhci_host {TYPE_1__* mmc; } ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sdhci_host*,int ) ;
 int FUNC_1 (struct sdhci_host*,int ,int ) ;

void FUNC_2(struct sdhci_host *VAR_6, int VAR_7)
{
 u8 VAR_8;

 VAR_8 = FUNC_0(VAR_6, VAR_5);
 if (VAR_7 == VAR_1) {
  VAR_8 &= ~VAR_3;
  VAR_8 |= VAR_4;
 } else {
  if (VAR_6->mmc->caps & VAR_2)
   VAR_8 &= ~VAR_4;
  if (VAR_7 == VAR_0)
   VAR_8 |= VAR_3;
  else
   VAR_8 &= ~VAR_3;
 }
 FUNC_1(VAR_6, VAR_8, VAR_5);
}
