
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sdio_func {TYPE_2__* card; } ;
typedef int mmc_pm_flag_t ;
struct TYPE_4__ {TYPE_1__* host; } ;
struct TYPE_3__ {int pm_caps; } ;



mmc_pm_flag_t FUNC_0(struct sdio_func *VAR_0)
{
 if (!VAR_0)
  return 0;

 return VAR_0->card->host->pm_caps;
}
