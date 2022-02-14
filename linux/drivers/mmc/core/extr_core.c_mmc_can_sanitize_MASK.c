
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sec_feature_support; } ;
struct mmc_card {TYPE_1__ ext_csd; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_card*) ;
 int FUNC_1 (struct mmc_card*) ;

int FUNC_2(struct mmc_card *VAR_1)
{
 if (!FUNC_1(VAR_1) && !FUNC_0(VAR_1))
  return 0;
 if (VAR_1->ext_csd.sec_feature_support & VAR_0)
  return 1;
 return 0;
}
