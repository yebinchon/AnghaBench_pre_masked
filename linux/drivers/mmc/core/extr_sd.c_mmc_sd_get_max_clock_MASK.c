
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int max_dtr; } ;
struct TYPE_3__ {unsigned int hs_max_dtr; } ;
struct mmc_card {TYPE_2__ csd; TYPE_1__ sw_caps; } ;


 scalar_t__ FUNC_0 (struct mmc_card*) ;

unsigned FUNC_1(struct mmc_card *VAR_0)
{
 unsigned VAR_1 = (unsigned int)-1;

 if (FUNC_0(VAR_0)) {
  if (VAR_1 > VAR_0->sw_caps.hs_max_dtr)
   VAR_1 = VAR_0->sw_caps.hs_max_dtr;
 } else if (VAR_1 > VAR_0->csd.max_dtr) {
  VAR_1 = VAR_0->csd.max_dtr;
 }

 return VAR_1;
}
