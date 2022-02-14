
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ power_off_notification; } ;
struct mmc_card {TYPE_1__ ext_csd; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct mmc_card const*) ;

__attribute__((used)) static int FUNC_1(const struct mmc_card *VAR_1)
{
 return VAR_1 &&
  FUNC_0(VAR_1) &&
  (VAR_1->ext_csd.power_off_notification == VAR_0);
}
