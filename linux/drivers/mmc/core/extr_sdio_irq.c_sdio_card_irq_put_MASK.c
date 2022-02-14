
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int sdio_irqs; int caps2; int caps; TYPE_1__* ops; int sdio_irq_thread; int sdio_irq_thread_abort; int claimed; } ;
struct mmc_card {struct mmc_host* host; } ;
struct TYPE_2__ {int (* enable_sdio_irq ) (struct mmc_host*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mmc_host*,int ) ;

__attribute__((used)) static int FUNC_4(struct mmc_card *VAR_3)
{
 struct mmc_host *VAR_4 = VAR_3->host;

 FUNC_0(!VAR_4->claimed);

 if (VAR_4->sdio_irqs < 1)
  return -VAR_0;

 if (!--VAR_4->sdio_irqs) {
  if (!(VAR_4->caps2 & VAR_1)) {
   FUNC_1(&VAR_4->sdio_irq_thread_abort, 1);
   FUNC_2(VAR_4->sdio_irq_thread);
  } else if (VAR_4->caps & VAR_2) {
   VAR_4->ops->enable_sdio_irq(VAR_4, 0);
  }
 }

 return 0;
}
