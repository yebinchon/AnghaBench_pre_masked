
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_host {scalar_t__ retune_period; int card; int sdio_irq_work; scalar_t__ sdio_irqs; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (struct mmc_host*) ;
 int FUNC_8 (struct mmc_host*) ;
 int FUNC_9 (struct mmc_host*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct mmc_host *VAR_0)
{
 FUNC_0(VAR_0->sdio_irqs && !FUNC_2(VAR_0));


 FUNC_3(VAR_0->card);
 FUNC_1(&VAR_0->sdio_irq_work);

 FUNC_5(VAR_0);

 if (FUNC_2(VAR_0) && FUNC_4(VAR_0))
  FUNC_10(VAR_0->card);

 if (!FUNC_2(VAR_0)) {
  FUNC_6(VAR_0);
 } else if (VAR_0->retune_period) {
  FUNC_9(VAR_0);
  FUNC_8(VAR_0);
 }

 FUNC_7(VAR_0);

 return 0;
}
