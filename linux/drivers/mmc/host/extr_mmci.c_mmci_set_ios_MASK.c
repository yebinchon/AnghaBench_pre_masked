
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct variant_data {int pwrreg_powerup; int opendrain; scalar_t__ explicit_mclk_control; scalar_t__ pwrreg_clkgate; scalar_t__ signal_direction; } ;
struct mmci_host {int vqmmc_enabled; int pwr_reg_add; scalar_t__ clock_cache; int lock; TYPE_3__* ops; int clk; int mclk; struct mmc_host* mmc; struct variant_data* variant; int pins_default; int pinctrl; int pins_opendrain; TYPE_1__* plat; } ;
struct mmc_ios {int power_mode; scalar_t__ bus_width; scalar_t__ bus_mode; scalar_t__ clock; int vdd; } ;
struct TYPE_5__ {int vqmmc; int vmmc; } ;
struct mmc_host {TYPE_2__ supply; } ;
struct TYPE_6__ {int (* set_pwrreg ) (struct mmci_host*,int) ;int (* set_clkreg ) (struct mmci_host*,scalar_t__) ;} ;
struct TYPE_4__ {scalar_t__ (* ios_handler ) (int ,struct mmc_ios*) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;



 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct mmc_host*) ;
 struct mmci_host* FUNC_5 (struct mmc_host*) ;
 int FUNC_6 (struct mmc_host*,int ,int ) ;
 int FUNC_7 (struct mmci_host*) ;
 int FUNC_8 (struct mmci_host*,scalar_t__) ;
 int FUNC_9 (struct mmci_host*,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 scalar_t__ FUNC_15 (int ,struct mmc_ios*) ;
 int FUNC_16 (struct mmci_host*,scalar_t__) ;
 int FUNC_17 (struct mmci_host*,int) ;

__attribute__((used)) static void FUNC_18(struct mmc_host *VAR_7, struct mmc_ios *VAR_8)
{
 struct mmci_host *VAR_9 = FUNC_5(VAR_7);
 struct variant_data *VAR_10 = VAR_9->variant;
 u32 VAR_11 = 0;
 unsigned long VAR_12;
 int VAR_13;

 if (VAR_9->plat->ios_handler &&
  VAR_9->plat->ios_handler(FUNC_4(VAR_7), VAR_8))
   FUNC_3(FUNC_4(VAR_7), "platform ios_handler failed\n");

 switch (VAR_8->power_mode) {
 case 130:
  if (!FUNC_0(VAR_7->supply.vmmc))
   FUNC_6(VAR_7, VAR_7->supply.vmmc, 0);

  if (!FUNC_0(VAR_7->supply.vqmmc) && VAR_9->vqmmc_enabled) {
   FUNC_11(VAR_7->supply.vqmmc);
   VAR_9->vqmmc_enabled = 0;
  }

  break;
 case 128:
  if (!FUNC_0(VAR_7->supply.vmmc))
   FUNC_6(VAR_7, VAR_7->supply.vmmc, VAR_8->vdd);






  VAR_11 |= VAR_10->pwrreg_powerup;

  break;
 case 129:
  if (!FUNC_0(VAR_7->supply.vqmmc) && !VAR_9->vqmmc_enabled) {
   VAR_13 = FUNC_12(VAR_7->supply.vqmmc);
   if (VAR_13 < 0)
    FUNC_3(FUNC_4(VAR_7),
     "failed to enable vqmmc regulator\n");
   else
    VAR_9->vqmmc_enabled = 1;
  }

  VAR_11 |= VAR_0;
  break;
 }

 if (VAR_10->signal_direction && VAR_8->power_mode != 130) {





  VAR_11 |= VAR_9->pwr_reg_add;

  if (VAR_8->bus_width == VAR_6)
   VAR_11 &= ~VAR_3;
  else if (VAR_8->bus_width == VAR_5)
   VAR_11 &= (~VAR_3 &
    ~VAR_2 &
    ~VAR_1);
 }

 if (VAR_10->opendrain) {
  if (VAR_8->bus_mode == VAR_4)
   VAR_11 |= VAR_10->opendrain;
 } else {




  if (VAR_8->bus_mode == VAR_4)
   FUNC_10(VAR_9->pinctrl, VAR_9->pins_opendrain);
  else
   FUNC_10(VAR_9->pinctrl, VAR_9->pins_default);
 }





 if (!VAR_8->clock && VAR_10->pwrreg_clkgate)
  VAR_11 &= ~VAR_0;

 if (VAR_9->variant->explicit_mclk_control &&
     VAR_8->clock != VAR_9->clock_cache) {
  VAR_13 = FUNC_2(VAR_9->clk, VAR_8->clock);
  if (VAR_13 < 0)
   FUNC_3(FUNC_4(VAR_9->mmc),
    "Error setting clock rate (%d)\n", VAR_13);
  else
   VAR_9->mclk = FUNC_1(VAR_9->clk);
 }
 VAR_9->clock_cache = VAR_8->clock;

 FUNC_13(&VAR_9->lock, VAR_12);

 if (VAR_9->ops && VAR_9->ops->set_clkreg)
  VAR_9->ops->set_clkreg(VAR_9, VAR_8->clock);
 else
  FUNC_8(VAR_9, VAR_8->clock);

 if (VAR_9->ops && VAR_9->ops->set_pwrreg)
  VAR_9->ops->set_pwrreg(VAR_9, VAR_11);
 else
  FUNC_9(VAR_9, VAR_11);

 FUNC_7(VAR_9);

 FUNC_14(&VAR_9->lock, VAR_12);
}
