
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdhci_sprd_host {int flags; } ;
struct sdhci_host {int flags; scalar_t__ version; } ;
struct mmc_request {TYPE_1__* sbc; } ;
struct mmc_host {int dummy; } ;
struct TYPE_2__ {int arg; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct sdhci_sprd_host* FUNC_0 (struct sdhci_host*) ;
 struct sdhci_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_host*,struct mmc_request*) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_3, struct mmc_request *VAR_4)
{
 struct sdhci_host *VAR_5 = FUNC_1(VAR_3);
 struct sdhci_sprd_host *VAR_6 = FUNC_0(VAR_5);

 VAR_5->flags |= VAR_6->flags & VAR_0;






 if (VAR_5->version >= VAR_1 &&
     VAR_4->sbc && (VAR_4->sbc->arg & VAR_2) &&
     (VAR_5->flags & VAR_0))
  VAR_5->flags &= ~VAR_0;

 FUNC_2(VAR_3, VAR_4);
}
