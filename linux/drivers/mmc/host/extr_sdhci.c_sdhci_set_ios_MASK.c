
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sdhci_host {int flags; scalar_t__ version; int quirks2; int clock; int quirks; int timeout_clk; TYPE_3__* ops; int timing; int preset_enabled; TYPE_2__* mmc; } ;
struct mmc_ios {int clock; int drv_type; int timing; int bus_width; int power_mode; int vdd; } ;
struct TYPE_4__ {int vmmc; } ;
struct mmc_host {TYPE_1__ supply; } ;
struct TYPE_6__ {int (* get_max_timeout_count ) (struct sdhci_host*) ;int (* set_clock ) (struct sdhci_host*,int) ;int (* set_uhs_signaling ) (struct sdhci_host*,int ) ;int (* set_bus_width ) (struct sdhci_host*,int ) ;int (* platform_send_init_74_clocks ) (struct sdhci_host*,int ) ;int (* set_power ) (struct sdhci_host*,int ,int ) ;} ;
struct TYPE_5__ {int actual_clock; int max_busy_timeout; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 int FUNC_1 (struct mmc_host*) ;
 struct sdhci_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct sdhci_host*,int) ;
 int FUNC_6 (struct sdhci_host*,int) ;
 int FUNC_7 (struct sdhci_host*) ;
 int FUNC_8 (struct sdhci_host*,int ) ;
 int FUNC_9 (struct sdhci_host*,int ) ;
 int FUNC_10 (struct sdhci_host*) ;
 int FUNC_11 (struct sdhci_host*,int ,int ) ;
 int FUNC_12 (struct sdhci_host*,int ,int ) ;
 int FUNC_13 (struct sdhci_host*,int ,int ) ;
 int FUNC_14 (struct sdhci_host*,int,int ) ;
 int FUNC_15 (struct sdhci_host*,int) ;
 int FUNC_16 (struct sdhci_host*) ;
 int FUNC_17 (struct sdhci_host*,int ,int ) ;
 int FUNC_18 (struct sdhci_host*,int ) ;
 int FUNC_19 (struct sdhci_host*,int ) ;
 int FUNC_20 (struct sdhci_host*,int) ;
 int FUNC_21 (struct sdhci_host*,int ) ;
 int FUNC_22 (struct sdhci_host*,int) ;

void FUNC_23(struct mmc_host *VAR_38, struct mmc_ios *VAR_39)
{
 struct sdhci_host *VAR_40 = FUNC_2(VAR_38);
 u8 VAR_41;

 if (VAR_39->power_mode == VAR_1)
  return;

 if (VAR_40->flags & VAR_25) {
  if (!FUNC_0(VAR_38->supply.vmmc) &&
      VAR_39->power_mode == VAR_0)
   FUNC_3(VAR_38, VAR_38->supply.vmmc, 0);
  return;
 }





 if (VAR_39->power_mode == VAR_0) {
  FUNC_13(VAR_40, 0, VAR_36);
  FUNC_10(VAR_40);
 }

 if (VAR_40->version >= VAR_37 &&
  (VAR_39->power_mode == VAR_2) &&
  !(VAR_40->quirks2 & VAR_30))
  FUNC_6(VAR_40, 0);

 if (!VAR_39->clock || VAR_39->clock != VAR_40->clock) {
  VAR_40->ops->set_clock(VAR_40, VAR_39->clock);
  VAR_40->clock = VAR_39->clock;

  if (VAR_40->quirks & VAR_31 &&
      VAR_40->clock) {
   VAR_40->timeout_clk = VAR_40->mmc->actual_clock ?
      VAR_40->mmc->actual_clock / 1000 :
      VAR_40->clock / 1000;
   VAR_40->mmc->max_busy_timeout =
    VAR_40->ops->get_max_timeout_count ?
    VAR_40->ops->get_max_timeout_count(VAR_40) :
    1 << 27;
   VAR_40->mmc->max_busy_timeout /= VAR_40->timeout_clk;
  }
 }

 if (VAR_40->ops->set_power)
  VAR_40->ops->set_power(VAR_40, VAR_39->power_mode, VAR_39->vdd);
 else
  FUNC_11(VAR_40, VAR_39->power_mode, VAR_39->vdd);

 if (VAR_40->ops->platform_send_init_74_clocks)
  VAR_40->ops->platform_send_init_74_clocks(VAR_40, VAR_39->power_mode);

 VAR_40->ops->set_bus_width(VAR_40, VAR_39->bus_width);

 VAR_41 = FUNC_8(VAR_40, VAR_26);

 if (!(VAR_40->quirks & VAR_32)) {
  if (VAR_39->timing == VAR_11 ||
       VAR_39->timing == VAR_8 ||
       VAR_39->timing == VAR_10 ||
       VAR_39->timing == VAR_9 ||
       VAR_39->timing == VAR_7 ||
       VAR_39->timing == VAR_16 ||
       VAR_39->timing == VAR_13 ||
       VAR_39->timing == VAR_12 ||
       VAR_39->timing == VAR_15)
   VAR_41 |= VAR_24;
  else
   VAR_41 &= ~VAR_24;
 }

 if (VAR_40->version >= VAR_37) {
  u16 VAR_42, VAR_43;

  if (!VAR_40->preset_enabled) {
   FUNC_12(VAR_40, VAR_41, VAR_26);




   VAR_43 = FUNC_9(VAR_40, VAR_27);
   VAR_43 &= ~VAR_23;
   if (VAR_39->drv_type == VAR_3)
    VAR_43 |= VAR_19;
   else if (VAR_39->drv_type == VAR_4)
    VAR_43 |= VAR_20;
   else if (VAR_39->drv_type == VAR_5)
    VAR_43 |= VAR_21;
   else if (VAR_39->drv_type == VAR_6)
    VAR_43 |= VAR_22;
   else {
    FUNC_4("%s: invalid driver type, default to driver type B\n",
     FUNC_1(VAR_38));
    VAR_43 |= VAR_20;
   }

   FUNC_14(VAR_40, VAR_43, VAR_27);
  } else {
   VAR_42 = FUNC_9(VAR_40, VAR_18);
   VAR_42 &= ~VAR_17;
   FUNC_14(VAR_40, VAR_42, VAR_18);

   FUNC_12(VAR_40, VAR_41, VAR_26);


   VAR_40->ops->set_clock(VAR_40, VAR_40->clock);
  }


  VAR_42 = FUNC_9(VAR_40, VAR_18);
  VAR_42 &= ~VAR_17;
  FUNC_14(VAR_40, VAR_42, VAR_18);

  VAR_40->ops->set_uhs_signaling(VAR_40, VAR_39->timing);
  VAR_40->timing = VAR_39->timing;

  if (!(VAR_40->quirks2 & VAR_30) &&
    ((VAR_39->timing == VAR_14) ||
     (VAR_39->timing == VAR_15) ||
     (VAR_39->timing == VAR_16) ||
     (VAR_39->timing == VAR_13) ||
     (VAR_39->timing == VAR_12) ||
     (VAR_39->timing == VAR_7))) {
   u16 VAR_44;

   FUNC_6(VAR_40, 1);
   VAR_44 = FUNC_7(VAR_40);
   VAR_39->drv_type = (VAR_44 & VAR_28)
    >> VAR_29;
  }


  VAR_40->ops->set_clock(VAR_40, VAR_40->clock);
 } else
  FUNC_12(VAR_40, VAR_41, VAR_26);






 if (VAR_40->quirks & VAR_33)
  FUNC_5(VAR_40, VAR_34 | VAR_35);
}
