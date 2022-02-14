
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int chip_select; } ;
struct mmc_host {TYPE_1__ ios; } ;


 int FUNC_0 (struct mmc_host*) ;

void FUNC_1(struct mmc_host *VAR_0, int VAR_1)
{
 VAR_0->ios.chip_select = VAR_1;
 FUNC_0(VAR_0);
}
