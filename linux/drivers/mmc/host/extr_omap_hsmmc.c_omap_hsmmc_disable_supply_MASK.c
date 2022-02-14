
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hsmmc_host {scalar_t__ vqmmc_enabled; } ;
struct TYPE_2__ {int vqmmc; int vmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct mmc_host*) ;
 struct omap_hsmmc_host* FUNC_3 (struct mmc_host*) ;
 int FUNC_4 (struct mmc_host*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct mmc_host *VAR_0)
{
 int VAR_1;
 int VAR_2;
 struct omap_hsmmc_host *VAR_3 = FUNC_3(VAR_0);

 if (!FUNC_0(VAR_0->supply.vqmmc) && VAR_3->vqmmc_enabled) {
  VAR_1 = FUNC_5(VAR_0->supply.vqmmc);
  if (VAR_1) {
   FUNC_1(FUNC_2(VAR_0), "vmmc_aux reg disable failed\n");
   return VAR_1;
  }
  VAR_3->vqmmc_enabled = 0;
 }

 if (!FUNC_0(VAR_0->supply.vmmc)) {
  VAR_1 = FUNC_4(VAR_0, VAR_0->supply.vmmc, 0);
  if (VAR_1)
   goto err_set_ocr;
 }

 return 0;

err_set_ocr:
 if (!FUNC_0(VAR_0->supply.vqmmc)) {
  VAR_2 = FUNC_6(VAR_0->supply.vqmmc);
  if (VAR_2)
   FUNC_1(FUNC_2(VAR_0), "vmmc_aux re-enable failed\n");
 }

 return VAR_1;
}
