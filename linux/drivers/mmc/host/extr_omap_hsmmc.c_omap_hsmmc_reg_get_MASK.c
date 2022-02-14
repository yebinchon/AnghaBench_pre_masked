
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct omap_hsmmc_host {void* pbias; TYPE_3__* dev; struct mmc_host* mmc; } ;
struct TYPE_6__ {void* vqmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;
struct TYPE_8__ {scalar_t__ of_node; } ;
struct TYPE_7__ {scalar_t__ no_regulator_off_init; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 void* FUNC_4 (TYPE_3__*,char*) ;
 TYPE_2__* FUNC_5 (struct omap_hsmmc_host*) ;
 int FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (struct omap_hsmmc_host*) ;

__attribute__((used)) static int FUNC_8(struct omap_hsmmc_host *VAR_1)
{
 int VAR_2;
 struct mmc_host *VAR_3 = VAR_1->mmc;


 VAR_2 = FUNC_6(VAR_3);
 if (VAR_2)
  return VAR_2;


 if (FUNC_0(VAR_3->supply.vqmmc)) {
  VAR_3->supply.vqmmc = FUNC_4(VAR_1->dev,
        "vmmc_aux");
  if (FUNC_0(VAR_3->supply.vqmmc)) {
   VAR_2 = FUNC_1(VAR_3->supply.vqmmc);
   if ((VAR_2 != -VAR_0) && VAR_1->dev->of_node)
    return VAR_2;
   FUNC_2(VAR_1->dev, "unable to get vmmc_aux regulator %ld\n",
    FUNC_1(VAR_3->supply.vqmmc));
  }
 }

 VAR_1->pbias = FUNC_4(VAR_1->dev, "pbias");
 if (FUNC_0(VAR_1->pbias)) {
  VAR_2 = FUNC_1(VAR_1->pbias);
  if ((VAR_2 != -VAR_0) && VAR_1->dev->of_node) {
   FUNC_3(VAR_1->dev,
   "SD card detect fail? enable CONFIG_REGULATOR_PBIAS\n");
   return VAR_2;
  }
  FUNC_2(VAR_1->dev, "unable to get pbias regulator %ld\n",
   FUNC_1(VAR_1->pbias));
 }


 if (FUNC_5(VAR_1)->no_regulator_off_init)
  return 0;

 VAR_2 = FUNC_7(VAR_1);
 if (VAR_2)
  return VAR_2;

 return 0;
}
