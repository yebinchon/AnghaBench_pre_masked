
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sdhci_host {TYPE_1__* mmc; } ;
struct TYPE_2__ {int caps; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdhci_host*) ;
 int FUNC_1 (struct sdhci_host*,int ) ;

__attribute__((used)) static void FUNC_2(struct sdhci_host *VAR_1, u8 VAR_2)
{
 FUNC_1(VAR_1, VAR_2);

 if (VAR_1->mmc->caps & VAR_0)
  FUNC_0(VAR_1);
}
