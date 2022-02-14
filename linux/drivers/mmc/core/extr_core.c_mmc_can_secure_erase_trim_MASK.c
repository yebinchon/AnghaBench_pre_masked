
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sec_feature_support; } ;
struct mmc_card {int quirks; TYPE_1__ ext_csd; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct mmc_card *VAR_2)
{
 if ((VAR_2->ext_csd.sec_feature_support & VAR_0) &&
     !(VAR_2->quirks & VAR_1))
  return 1;
 return 0;
}
