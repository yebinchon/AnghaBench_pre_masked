
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sunxi_mmc_host {int vqmmc_enabled; int ferror; struct mmc_host* mmc; } ;
struct mmc_ios {int power_mode; int vdd; } ;
struct TYPE_2__ {int vqmmc; int vmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;


 int FUNC_0 (int ) ;


 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct sunxi_mmc_host *VAR_0,
     struct mmc_ios *VAR_1)
{
 struct mmc_host *VAR_2 = VAR_0->mmc;

 switch (VAR_1->power_mode) {
 case 128:
  FUNC_1(FUNC_3(VAR_2), "Powering card up\n");

  if (!FUNC_0(VAR_2->supply.vmmc)) {
   VAR_0->ferror = FUNC_4(VAR_2,
            VAR_2->supply.vmmc,
            VAR_1->vdd);
   if (VAR_0->ferror)
    return;
  }

  if (!FUNC_0(VAR_2->supply.vqmmc)) {
   VAR_0->ferror = FUNC_6(VAR_2->supply.vqmmc);
   if (VAR_0->ferror) {
    FUNC_2(FUNC_3(VAR_2),
     "failed to enable vqmmc\n");
    return;
   }
   VAR_0->vqmmc_enabled = 1;
  }
  break;

 case 129:
  FUNC_1(FUNC_3(VAR_2), "Powering card off\n");

  if (!FUNC_0(VAR_2->supply.vmmc))
   FUNC_4(VAR_2, VAR_2->supply.vmmc, 0);

  if (!FUNC_0(VAR_2->supply.vqmmc) && VAR_0->vqmmc_enabled)
   FUNC_5(VAR_2->supply.vqmmc);

  VAR_0->vqmmc_enabled = 0;
  break;

 default:
  FUNC_1(FUNC_3(VAR_2), "Ignoring unknown card power state\n");
  break;
 }
}
