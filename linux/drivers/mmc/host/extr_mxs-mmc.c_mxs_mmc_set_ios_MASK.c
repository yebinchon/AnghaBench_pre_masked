
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_mmc_host {int bus_width; int ssp; } ;
struct mmc_ios {scalar_t__ bus_width; int clock; } ;
struct mmc_host {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct mxs_mmc_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct mmc_host *VAR_2, struct mmc_ios *VAR_3)
{
 struct mxs_mmc_host *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3->bus_width == VAR_1)
  VAR_4->bus_width = 2;
 else if (VAR_3->bus_width == VAR_0)
  VAR_4->bus_width = 1;
 else
  VAR_4->bus_width = 0;

 if (VAR_3->clock)
  FUNC_1(&VAR_4->ssp, VAR_3->clock);
}
