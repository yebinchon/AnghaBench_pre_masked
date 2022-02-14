
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int caps2; int caps; TYPE_1__* ops; int sdio_irqs; int sdio_irq_thread; int sdio_irq_thread_abort; int claimed; } ;
struct mmc_card {struct mmc_host* host; } ;
struct TYPE_2__ {int (* enable_sdio_irq ) (struct mmc_host*,int) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,struct mmc_host*,char*,int ) ;
 int FUNC_5 (struct mmc_host*) ;
 int VAR_2 ;
 int FUNC_6 (struct mmc_host*,int) ;

__attribute__((used)) static int FUNC_7(struct mmc_card *VAR_3)
{
 struct mmc_host *VAR_4 = VAR_3->host;

 FUNC_2(!VAR_4->claimed);

 if (!VAR_4->sdio_irqs++) {
  if (!(VAR_4->caps2 & VAR_0)) {
   FUNC_3(&VAR_4->sdio_irq_thread_abort, 0);
   VAR_4->sdio_irq_thread =
    FUNC_4(VAR_2, VAR_4,
         "ksdioirqd/%s", FUNC_5(VAR_4));
   if (FUNC_0(VAR_4->sdio_irq_thread)) {
    int VAR_5 = FUNC_1(VAR_4->sdio_irq_thread);
    VAR_4->sdio_irqs--;
    return VAR_5;
   }
  } else if (VAR_4->caps & VAR_1) {
   VAR_4->ops->enable_sdio_irq(VAR_4, 1);
  }
 }

 return 0;
}
