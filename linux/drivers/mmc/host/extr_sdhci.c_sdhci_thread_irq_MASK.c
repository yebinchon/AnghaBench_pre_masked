
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sdhci_host {int thread_isr; struct mmc_host* mmc; int lock; } ;
struct mmc_host {TYPE_1__* ops; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* card_event ) (struct mmc_host*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mmc_host*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sdhci_host*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct mmc_host*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct sdhci_host *VAR_5 = VAR_4;
 unsigned long VAR_6;
 u32 VAR_7;

 while (!FUNC_2(VAR_5))
  ;

 FUNC_3(&VAR_5->lock, VAR_6);
 VAR_7 = VAR_5->thread_isr;
 VAR_5->thread_isr = 0;
 FUNC_4(&VAR_5->lock, VAR_6);

 if (VAR_7 & (VAR_1 | VAR_2)) {
  struct mmc_host *VAR_8 = VAR_5->mmc;

  VAR_8->ops->card_event(VAR_8);
  FUNC_0(VAR_8, FUNC_1(200));
 }

 return VAR_0;
}
