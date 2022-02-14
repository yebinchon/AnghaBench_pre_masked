
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_ios {scalar_t__ signal_voltage; } ;
struct TYPE_2__ {int vqmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct mmc_host*,struct mmc_ios*) ;

__attribute__((used)) static int FUNC_2(struct mmc_host *VAR_2, struct mmc_ios *VAR_3)
{

 if (!FUNC_0(VAR_2->supply.vqmmc)) {







  return FUNC_1(VAR_2, VAR_3);
 }


 if (VAR_3->signal_voltage == VAR_1)
  return 0;

 return -VAR_0;
}
