
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdio_func {TYPE_1__* card; } ;
struct mmc_host {int pm_caps; int pm_flags; } ;
typedef int mmc_pm_flag_t ;
struct TYPE_2__ {struct mmc_host* host; } ;


 int VAR_0 ;

int FUNC_0(struct sdio_func *VAR_1, mmc_pm_flag_t VAR_2)
{
 struct mmc_host *VAR_3;

 if (!VAR_1)
  return -VAR_0;

 VAR_3 = VAR_1->card->host;

 if (VAR_2 & ~VAR_3->pm_caps)
  return -VAR_0;


 VAR_3->pm_flags |= VAR_2;
 return 0;
}
