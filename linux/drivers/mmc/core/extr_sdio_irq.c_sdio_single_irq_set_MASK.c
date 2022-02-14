
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdio_func {scalar_t__ irq_handler; } ;
struct mmc_card {int sdio_funcs; struct sdio_func* sdio_single_irq; struct sdio_func** sdio_func; TYPE_1__* host; } ;
struct TYPE_2__ {int caps; int sdio_irqs; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct mmc_card *VAR_1)
{
 struct sdio_func *VAR_2;
 int VAR_3;

 VAR_1->sdio_single_irq = ((void*)0);
 if ((VAR_1->host->caps & VAR_0) &&
     VAR_1->host->sdio_irqs == 1)
  for (VAR_3 = 0; VAR_3 < VAR_1->sdio_funcs; VAR_3++) {
         VAR_2 = VAR_1->sdio_func[VAR_3];
         if (VAR_2 && VAR_2->irq_handler) {
          VAR_1->sdio_single_irq = VAR_2;
          break;
         }
        }
}
