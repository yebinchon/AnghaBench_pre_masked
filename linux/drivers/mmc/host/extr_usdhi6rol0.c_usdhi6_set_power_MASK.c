
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usdhi6_host {struct mmc_host* mmc; } ;
struct mmc_ios {int vdd; scalar_t__ power_mode; } ;
struct TYPE_2__ {int vmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mmc_host*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct usdhi6_host *VAR_0, struct mmc_ios *VAR_1)
{
 struct mmc_host *VAR_2 = VAR_0->mmc;

 if (!FUNC_0(VAR_2->supply.vmmc))

  FUNC_1(VAR_2, VAR_2->supply.vmmc,
          VAR_1->power_mode ? VAR_1->vdd : 0);
}
