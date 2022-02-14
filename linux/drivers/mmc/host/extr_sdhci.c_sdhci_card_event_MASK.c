
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdhci_host {int lock; int mmc; TYPE_2__* ops; } ;
struct mmc_host {TYPE_1__* ops; } ;
struct TYPE_4__ {int (* card_event ) (struct sdhci_host*) ;} ;
struct TYPE_3__ {int (* get_cd ) (struct mmc_host*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct sdhci_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct sdhci_host*,int ) ;
 int FUNC_4 (struct sdhci_host*,int ) ;
 scalar_t__ FUNC_5 (struct sdhci_host*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (struct sdhci_host*) ;
 int FUNC_9 (struct mmc_host*) ;

__attribute__((used)) static void FUNC_10(struct mmc_host *VAR_3)
{
 struct sdhci_host *VAR_4 = FUNC_1(VAR_3);
 unsigned long VAR_5;
 int VAR_6;


 if (VAR_4->ops->card_event)
  VAR_4->ops->card_event(VAR_4);

 VAR_6 = VAR_3->ops->get_cd(VAR_3);

 FUNC_6(&VAR_4->lock, VAR_5);


 if (FUNC_5(VAR_4) && !VAR_6) {
  FUNC_2("%s: Card removed during transfer!\n",
   FUNC_0(VAR_4->mmc));
  FUNC_2("%s: Resetting controller.\n",
   FUNC_0(VAR_4->mmc));

  FUNC_3(VAR_4, VAR_1);
  FUNC_3(VAR_4, VAR_2);

  FUNC_4(VAR_4, -VAR_0);
 }

 FUNC_7(&VAR_4->lock, VAR_5);
}
