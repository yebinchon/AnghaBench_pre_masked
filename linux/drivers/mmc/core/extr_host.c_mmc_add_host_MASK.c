
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_host {int caps; int led; int class_dev; TYPE_1__* ops; } ;
struct TYPE_2__ {int enable_sdio_irq; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct mmc_host*) ;
 int FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mmc_host*) ;

int FUNC_7(struct mmc_host *VAR_1)
{
 int VAR_2;

 FUNC_0((VAR_1->caps & VAR_0) &&
  !VAR_1->ops->enable_sdio_irq);

 VAR_2 = FUNC_2(&VAR_1->class_dev);
 if (VAR_2)
  return VAR_2;

 FUNC_3(FUNC_1(&VAR_1->class_dev), &VAR_1->led);





 FUNC_6(VAR_1);
 FUNC_5(VAR_1);

 return 0;
}
