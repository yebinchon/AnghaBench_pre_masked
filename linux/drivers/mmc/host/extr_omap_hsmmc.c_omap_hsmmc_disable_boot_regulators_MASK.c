
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hsmmc_host {int dev; int pbias; struct mmc_host* mmc; } ;
struct TYPE_2__ {int vqmmc; int vmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct omap_hsmmc_host *VAR_0)
{
 struct mmc_host *VAR_1 = VAR_0->mmc;
 int VAR_2;






 VAR_2 = FUNC_1(VAR_1->supply.vmmc);
 if (VAR_2) {
  FUNC_0(VAR_0->dev, "fail to disable boot enabled vmmc reg\n");
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_1->supply.vqmmc);
 if (VAR_2) {
  FUNC_0(VAR_0->dev,
   "fail to disable boot enabled vmmc_aux reg\n");
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_0->pbias);
 if (VAR_2) {
  FUNC_0(VAR_0->dev,
   "failed to disable boot enabled pbias reg\n");
  return VAR_2;
 }

 return 0;
}
