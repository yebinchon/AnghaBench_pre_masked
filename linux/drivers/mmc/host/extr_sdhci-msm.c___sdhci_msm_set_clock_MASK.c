
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct sdhci_host {TYPE_1__* mmc; } ;
struct TYPE_2__ {scalar_t__ actual_clock; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdhci_host*,int ) ;
 int FUNC_1 (struct sdhci_host*,int ) ;
 int FUNC_2 (struct sdhci_host*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_1, unsigned int VAR_2)
{
 u16 VAR_3;






 VAR_1->mmc->actual_clock = 0;

 FUNC_2(VAR_1, 0, VAR_0);

 if (VAR_2 == 0)
  return;






 VAR_3 = FUNC_1(VAR_1, VAR_0);
 FUNC_0(VAR_1, VAR_3);
}
