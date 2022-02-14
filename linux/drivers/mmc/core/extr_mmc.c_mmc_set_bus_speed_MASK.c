
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int max_dtr; } ;
struct TYPE_4__ {unsigned int hs200_max_dtr; unsigned int hs_max_dtr; } ;
struct mmc_card {int host; TYPE_1__ csd; TYPE_2__ ext_csd; } ;


 scalar_t__ FUNC_0 (struct mmc_card*) ;
 scalar_t__ FUNC_1 (struct mmc_card*) ;
 scalar_t__ FUNC_2 (struct mmc_card*) ;
 int FUNC_3 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct mmc_card *VAR_0)
{
 unsigned int VAR_1 = (unsigned int)-1;

 if ((FUNC_1(VAR_0) || FUNC_2(VAR_0)) &&
      VAR_1 > VAR_0->ext_csd.hs200_max_dtr)
  VAR_1 = VAR_0->ext_csd.hs200_max_dtr;
 else if (FUNC_0(VAR_0) && VAR_1 > VAR_0->ext_csd.hs_max_dtr)
  VAR_1 = VAR_0->ext_csd.hs_max_dtr;
 else if (VAR_1 > VAR_0->csd.max_dtr)
  VAR_1 = VAR_0->csd.max_dtr;

 FUNC_3(VAR_0->host, VAR_1);
}
