
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_ios {scalar_t__ power_mode; int clock; int bus_width; } ;
struct mmc_host {int dummy; } ;
struct alcor_sdmmc_host {scalar_t__ cur_power_mode; int cmd_mutex; int dev; } ;


 int FUNC_0 (struct mmc_host*,struct mmc_ios*) ;
 int FUNC_1 (struct alcor_sdmmc_host*,int ) ;
 int FUNC_2 (struct mmc_host*,struct mmc_ios*) ;
 int FUNC_3 (struct mmc_host*,struct mmc_ios*) ;
 int FUNC_4 (int ,char*,int ,scalar_t__) ;
 struct alcor_sdmmc_host* FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct mmc_host *VAR_0, struct mmc_ios *VAR_1)
{
 struct alcor_sdmmc_host *VAR_2 = FUNC_5(VAR_0);

 FUNC_6(&VAR_2->cmd_mutex);

 FUNC_4(VAR_2->dev, "set ios. bus width: %x, power mode: %x\n",
  VAR_1->bus_width, VAR_1->power_mode);

 if (VAR_1->power_mode != VAR_2->cur_power_mode) {
  FUNC_2(VAR_0, VAR_1);
  VAR_2->cur_power_mode = VAR_1->power_mode;
 } else {
  FUNC_3(VAR_0, VAR_1);
  FUNC_0(VAR_0, VAR_1);
  FUNC_1(VAR_2, VAR_1->clock);
 }

 FUNC_7(&VAR_2->cmd_mutex);
}
