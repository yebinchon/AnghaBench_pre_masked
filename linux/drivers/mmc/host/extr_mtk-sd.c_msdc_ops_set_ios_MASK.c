
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct msdc_host {int vqmmc_enabled; scalar_t__ timing; int mclk; int dev; } ;
struct mmc_ios {int power_mode; scalar_t__ timing; int clock; int vdd; int bus_width; } ;
struct TYPE_2__ {int vqmmc; int vmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;


 int FUNC_0 (int ) ;



 int FUNC_1 (int ,char*) ;
 struct msdc_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*,int ,int ) ;
 int FUNC_4 (struct msdc_host*) ;
 int FUNC_5 (struct msdc_host*,int ) ;
 int FUNC_6 (struct msdc_host*,scalar_t__,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct mmc_host *VAR_0, struct mmc_ios *VAR_1)
{
 struct msdc_host *VAR_2 = FUNC_2(VAR_0);
 int VAR_3;

 FUNC_5(VAR_2, VAR_1->bus_width);


 switch (VAR_1->power_mode) {
 case 128:
  if (!FUNC_0(VAR_0->supply.vmmc)) {
   FUNC_4(VAR_2);
   VAR_3 = FUNC_3(VAR_0, VAR_0->supply.vmmc,
     VAR_1->vdd);
   if (VAR_3) {
    FUNC_1(VAR_2->dev, "Failed to set vmmc power!\n");
    return;
   }
  }
  break;
 case 129:
  if (!FUNC_0(VAR_0->supply.vqmmc) && !VAR_2->vqmmc_enabled) {
   VAR_3 = FUNC_8(VAR_0->supply.vqmmc);
   if (VAR_3)
    FUNC_1(VAR_2->dev, "Failed to set vqmmc power!\n");
   else
    VAR_2->vqmmc_enabled = 1;
  }
  break;
 case 130:
  if (!FUNC_0(VAR_0->supply.vmmc))
   FUNC_3(VAR_0, VAR_0->supply.vmmc, 0);

  if (!FUNC_0(VAR_0->supply.vqmmc) && VAR_2->vqmmc_enabled) {
   FUNC_7(VAR_0->supply.vqmmc);
   VAR_2->vqmmc_enabled = 0;
  }
  break;
 default:
  break;
 }

 if (VAR_2->mclk != VAR_1->clock || VAR_2->timing != VAR_1->timing)
  FUNC_6(VAR_2, VAR_1->timing, VAR_1->clock);
}
