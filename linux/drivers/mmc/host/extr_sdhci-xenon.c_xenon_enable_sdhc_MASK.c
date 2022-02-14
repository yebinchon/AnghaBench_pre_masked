
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_host {TYPE_1__* mmc; } ;
struct TYPE_2__ {int caps; } ;


 int FUNC_0 (unsigned char) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct sdhci_host*,int ) ;
 int FUNC_2 (struct sdhci_host*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_4,
         unsigned char VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_4, VAR_3);
 VAR_6 |= (FUNC_0(VAR_5) << VAR_2);
 FUNC_2(VAR_4, VAR_6, VAR_3);

 VAR_4->mmc->caps |= VAR_1;




 VAR_4->mmc->caps &= ~VAR_0;
}
