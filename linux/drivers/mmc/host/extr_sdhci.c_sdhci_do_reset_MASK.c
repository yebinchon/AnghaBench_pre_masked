
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sdhci_host {int quirks; int flags; int preset_enabled; TYPE_2__* ops; struct mmc_host* mmc; } ;
struct mmc_host {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* enable_dma ) (struct sdhci_host*) ;int (* reset ) (struct sdhci_host*,int) ;} ;
struct TYPE_3__ {int (* get_cd ) (struct mmc_host*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (struct sdhci_host*,int) ;
 int FUNC_2 (struct sdhci_host*) ;

__attribute__((used)) static void FUNC_3(struct sdhci_host *VAR_4, u8 VAR_5)
{
 if (VAR_4->quirks & VAR_0) {
  struct mmc_host *VAR_6 = VAR_4->mmc;

  if (!VAR_6->ops->get_cd(VAR_6))
   return;
 }

 VAR_4->ops->reset(VAR_4, VAR_5);

 if (VAR_5 & VAR_1) {
  if (VAR_4->flags & (VAR_3 | VAR_2)) {
   if (VAR_4->ops->enable_dma)
    VAR_4->ops->enable_dma(VAR_4);
  }


  VAR_4->preset_enabled = 0;
 }
}
