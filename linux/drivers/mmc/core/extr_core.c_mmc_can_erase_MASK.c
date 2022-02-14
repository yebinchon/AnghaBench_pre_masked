
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cmdclass; } ;
struct mmc_card {scalar_t__ erase_size; TYPE_2__ csd; TYPE_1__* host; } ;
struct TYPE_3__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct mmc_card *VAR_2)
{
 if ((VAR_2->host->caps & VAR_1) &&
     (VAR_2->csd.cmdclass & VAR_0) && VAR_2->erase_size)
  return 1;
 return 0;
}
