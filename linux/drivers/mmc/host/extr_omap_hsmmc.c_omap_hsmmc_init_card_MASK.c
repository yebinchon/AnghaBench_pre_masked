
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hsmmc_host {int dummy; } ;
struct mmc_host {int dummy; } ;
struct mmc_card {int dummy; } ;
struct TYPE_2__ {int (* init_card ) (struct mmc_card*) ;} ;


 TYPE_1__* FUNC_0 (struct omap_hsmmc_host*) ;
 struct omap_hsmmc_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (struct mmc_card*) ;

__attribute__((used)) static void FUNC_3(struct mmc_host *VAR_0, struct mmc_card *VAR_1)
{
 struct omap_hsmmc_host *VAR_2 = FUNC_1(VAR_0);

 if (FUNC_0(VAR_2)->init_card)
  FUNC_0(VAR_2)->init_card(VAR_1);
}
