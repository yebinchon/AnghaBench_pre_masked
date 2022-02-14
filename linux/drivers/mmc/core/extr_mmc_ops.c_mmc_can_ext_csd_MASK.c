
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ mmca_vsn; } ;
struct mmc_card {TYPE_1__ csd; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(struct mmc_card *VAR_1)
{
 return (VAR_1 && VAR_1->csd.mmca_vsn > VAR_0);
}
