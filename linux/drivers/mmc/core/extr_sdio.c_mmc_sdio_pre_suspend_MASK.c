
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* driver; } ;
struct sdio_func {TYPE_2__ dev; } ;
struct mmc_host {TYPE_3__* card; } ;
struct dev_pm_ops {int resume; int suspend; } ;
struct TYPE_6__ {int sdio_funcs; struct sdio_func** sdio_func; } ;
struct TYPE_4__ {struct dev_pm_ops* pm; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sdio_func*) ;

__attribute__((used)) static int FUNC_1(struct mmc_host *VAR_1)
{
 int VAR_2, VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1->card->sdio_funcs; VAR_2++) {
  struct sdio_func *VAR_4 = VAR_1->card->sdio_func[VAR_2];
  if (VAR_4 && FUNC_0(VAR_4) && VAR_4->dev.driver) {
   const struct dev_pm_ops *VAR_5 = VAR_4->dev.driver->pm;
   if (!VAR_5 || !VAR_5->suspend || !VAR_5->resume) {

    VAR_3 = -VAR_0;
    break;
   }
  }
 }

 return VAR_3;
}
