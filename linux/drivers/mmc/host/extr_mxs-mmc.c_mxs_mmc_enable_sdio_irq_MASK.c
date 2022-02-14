
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_ssp {scalar_t__ base; } ;
struct mxs_mmc_host {int sdio_irq_en; int mmc; int lock; struct mxs_ssp ssp; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct mxs_ssp*) ;
 scalar_t__ FUNC_1 (struct mxs_ssp*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct mxs_mmc_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct mmc_host *VAR_6, int VAR_7)
{
 struct mxs_mmc_host *VAR_8 = FUNC_2(VAR_6);
 struct mxs_ssp *VAR_9 = &VAR_8->ssp;
 unsigned long VAR_10;

 FUNC_5(&VAR_8->lock, VAR_10);

 VAR_8->sdio_irq_en = VAR_7;

 if (VAR_7) {
  FUNC_7(VAR_0,
         VAR_9->base + VAR_3 + VAR_5);
  FUNC_7(VAR_1,
         VAR_9->base + FUNC_0(VAR_9) + VAR_5);
 } else {
  FUNC_7(VAR_0,
         VAR_9->base + VAR_3 + VAR_4);
  FUNC_7(VAR_1,
         VAR_9->base + FUNC_0(VAR_9) + VAR_4);
 }

 FUNC_6(&VAR_8->lock, VAR_10);

 if (VAR_7 && FUNC_4(VAR_9->base + FUNC_1(VAR_9)) &
   VAR_2)
  FUNC_3(VAR_8->mmc);

}
