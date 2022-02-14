
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mmc_host {int caps; int caps2; int pm_flags; int sdio_irq_work; int sdio_irq_thread; scalar_t__ sdio_irqs; TYPE_1__* card; } ;
struct TYPE_3__ {int dev; int ocr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct mmc_host*) ;
 scalar_t__ FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,int ) ;
 int FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *,int ) ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct mmc_host *VAR_5)
{
 int VAR_6 = 0;


 FUNC_3(VAR_5);






 if (!FUNC_1(VAR_5)) {
  FUNC_4(VAR_5, VAR_5->card->ocr);






  if (VAR_5->caps & VAR_1) {
   FUNC_7(&VAR_5->card->dev);
   FUNC_9(&VAR_5->card->dev);
   FUNC_8(&VAR_5->card->dev);
  }
  VAR_6 = FUNC_6(VAR_5);
 } else if (FUNC_2(VAR_5)) {

  VAR_6 = FUNC_11(VAR_5->card);
 }

 if (VAR_6)
  goto out;


 FUNC_0(VAR_5->card);

 if (VAR_5->sdio_irqs) {
  if (!(VAR_5->caps2 & VAR_0))
   FUNC_12(VAR_5->sdio_irq_thread);
  else if (VAR_5->caps & VAR_2)
   FUNC_10(VAR_4, &VAR_5->sdio_irq_work, 0);
 }

out:
 FUNC_5(VAR_5);

 VAR_5->pm_flags &= ~VAR_3;
 return VAR_6;
}
