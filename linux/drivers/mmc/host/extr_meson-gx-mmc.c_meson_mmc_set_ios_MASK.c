
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmc_ios {int power_mode; int bus_width; int vdd; } ;
struct TYPE_2__ {int vqmmc; int vmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;
struct meson_host {int vqmmc_enabled; int dev; scalar_t__ regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;






 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct meson_host*,struct mmc_ios*) ;
 int FUNC_5 (struct meson_host*,struct mmc_ios*) ;
 struct meson_host* FUNC_6 (struct mmc_host*) ;
 int FUNC_7 (struct mmc_host*,int ,int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct mmc_host *VAR_5, struct mmc_ios *VAR_6)
{
 struct meson_host *VAR_7 = FUNC_6(VAR_5);
 u32 VAR_8, VAR_9;
 int VAR_10;





 switch (VAR_6->power_mode) {
 case 130:
  if (!FUNC_1(VAR_5->supply.vmmc))
   FUNC_7(VAR_5, VAR_5->supply.vmmc, 0);

  if (!FUNC_1(VAR_5->supply.vqmmc) && VAR_7->vqmmc_enabled) {
   FUNC_9(VAR_5->supply.vqmmc);
   VAR_7->vqmmc_enabled = 0;
  }

  break;

 case 128:
  if (!FUNC_1(VAR_5->supply.vmmc))
   FUNC_7(VAR_5, VAR_5->supply.vmmc, VAR_6->vdd);

  break;

 case 129:
  if (!FUNC_1(VAR_5->supply.vqmmc) && !VAR_7->vqmmc_enabled) {
   int VAR_11 = FUNC_10(VAR_5->supply.vqmmc);

   if (VAR_11 < 0)
    FUNC_3(VAR_7->dev,
     "failed to enable vqmmc regulator\n");
   else
    VAR_7->vqmmc_enabled = 1;
  }

  break;
 }


 switch (VAR_6->bus_width) {
 case 133:
  VAR_8 = VAR_0;
  break;
 case 132:
  VAR_8 = VAR_1;
  break;
 case 131:
  VAR_8 = VAR_2;
  break;
 default:
  FUNC_3(VAR_7->dev, "Invalid ios->bus_width: %u.  Setting to 4.\n",
   VAR_6->bus_width);
  VAR_8 = VAR_1;
 }

 VAR_9 = FUNC_8(VAR_7->regs + VAR_4);
 VAR_9 &= ~VAR_3;
 VAR_9 |= FUNC_0(VAR_3, VAR_8);
 FUNC_11(VAR_9, VAR_7->regs + VAR_4);

 FUNC_4(VAR_7, VAR_6);
 VAR_10 = FUNC_5(VAR_7, VAR_6);
 if (VAR_10)
  FUNC_3(VAR_7->dev, "Failed to set clock: %d\n,", VAR_10);

 FUNC_2(VAR_7->dev, "SD_EMMC_CFG:  0x%08x\n", VAR_9);
}
