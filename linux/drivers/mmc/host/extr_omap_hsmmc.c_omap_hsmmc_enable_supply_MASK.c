
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hsmmc_host {int vqmmc_enabled; } ;
struct mmc_ios {int vdd; } ;
struct TYPE_2__ {int vmmc; int vqmmc; } ;
struct mmc_host {TYPE_1__ supply; struct mmc_ios ios; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mmc_host*) ;
 struct omap_hsmmc_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,int ,int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct mmc_host *VAR_0)
{
 int VAR_1;
 struct omap_hsmmc_host *VAR_2 = FUNC_3(VAR_0);
 struct mmc_ios *VAR_3 = &VAR_0->ios;

 if (!FUNC_0(VAR_0->supply.vmmc)) {
  VAR_1 = FUNC_4(VAR_0, VAR_0->supply.vmmc, VAR_3->vdd);
  if (VAR_1)
   return VAR_1;
 }


 if (!FUNC_0(VAR_0->supply.vqmmc) && !VAR_2->vqmmc_enabled) {
  VAR_1 = FUNC_5(VAR_0->supply.vqmmc);
  if (VAR_1) {
   FUNC_1(FUNC_2(VAR_0), "vmmc_aux reg enable failed\n");
   goto err_vqmmc;
  }
  VAR_2->vqmmc_enabled = 1;
 }

 return 0;

err_vqmmc:
 if (!FUNC_0(VAR_0->supply.vmmc))
  FUNC_4(VAR_0, VAR_0->supply.vmmc, 0);

 return VAR_1;
}
