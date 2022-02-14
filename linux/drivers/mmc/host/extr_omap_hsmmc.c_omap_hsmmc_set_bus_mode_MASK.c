
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_hsmmc_host {int base; TYPE_1__* mmc; } ;
struct mmc_ios {scalar_t__ bus_mode; } ;
struct TYPE_2__ {struct mmc_ios ios; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct omap_hsmmc_host *VAR_3)
{
 struct mmc_ios *VAR_4 = &VAR_3->mmc->ios;
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_3->base, VAR_0);
 if (VAR_4->bus_mode == VAR_1)
  FUNC_1(VAR_3->base, VAR_0, VAR_5 | VAR_2);
 else
  FUNC_1(VAR_3->base, VAR_0, VAR_5 & ~VAR_2);
}
