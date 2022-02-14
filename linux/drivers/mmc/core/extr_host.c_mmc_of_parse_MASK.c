
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int power_delay_ms; } ;
struct mmc_host {int caps; int f_max; int caps2; int fixed_drv_type; int dsr_req; int dsr; TYPE_1__ ios; struct device* parent; int pm_caps; } ;
struct device {int dummy; } ;


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
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 scalar_t__ FUNC_5 (struct device*,char*,int*) ;
 int FUNC_6 (struct mmc_host*,char*,int ,int,int,int*) ;
 int FUNC_7 (struct mmc_host*,char*,int ,int ,int*) ;
 int FUNC_8 (struct mmc_host*) ;

int FUNC_9(struct mmc_host *VAR_34)
{
 struct device *VAR_35 = VAR_34->parent;
 u32 VAR_36, VAR_37, VAR_38;
 int VAR_39;
 bool VAR_40, VAR_41 = 0;
 bool VAR_42, VAR_43 = 0;

 if (!VAR_35 || !FUNC_2(VAR_35))
  return 0;


 if (FUNC_5(VAR_35, "bus-width", &VAR_36) < 0) {
  FUNC_0(VAR_34->parent,
   "\"bus-width\" property is missing, assuming 1 bit.\n");
  VAR_36 = 1;
 }

 switch (VAR_36) {
 case 8:
  VAR_34->caps |= VAR_19;

 case 4:
  VAR_34->caps |= VAR_18;
  break;
 case 1:
  break;
 default:
  FUNC_1(VAR_34->parent,
   "Invalid \"bus-width\" value %u!\n", VAR_36);
  return -VAR_0;
 }


 FUNC_5(VAR_35, "max-frequency", &VAR_34->f_max);
 if (FUNC_4(VAR_35, "non-removable")) {
  VAR_34->caps |= VAR_23;
 } else {
  VAR_40 = FUNC_4(VAR_35, "cd-inverted");

  if (FUNC_5(VAR_35, "cd-debounce-delay-ms",
          &VAR_38))
   VAR_38 = 200;

  if (FUNC_4(VAR_35, "broken-cd"))
   VAR_34->caps |= VAR_22;

  VAR_39 = FUNC_6(VAR_34, "cd", 0, 0,
        VAR_38 * 1000,
        &VAR_41);
  if (!VAR_39)
   FUNC_3(VAR_34->parent, "Got CD GPIO\n");
  else if (VAR_39 != -VAR_1 && VAR_39 != -VAR_2)
   return VAR_39;
  if (VAR_40 ^ VAR_41)
   VAR_34->caps2 |= VAR_3;
 }


 VAR_42 = FUNC_4(VAR_35, "wp-inverted");

 VAR_39 = FUNC_7(VAR_34, "wp", 0, 0, &VAR_43);
 if (!VAR_39)
  FUNC_3(VAR_34->parent, "Got WP GPIO\n");
 else if (VAR_39 != -VAR_1 && VAR_39 != -VAR_2)
  return VAR_39;

 if (FUNC_4(VAR_35, "disable-wp"))
  VAR_34->caps2 |= VAR_13;


 if (VAR_42 ^ VAR_43)
  VAR_34->caps2 |= VAR_14;

 if (FUNC_4(VAR_35, "cap-sd-highspeed"))
  VAR_34->caps |= VAR_26;
 if (FUNC_4(VAR_35, "cap-mmc-highspeed"))
  VAR_34->caps |= VAR_21;
 if (FUNC_4(VAR_35, "sd-uhs-sdr12"))
  VAR_34->caps |= VAR_29;
 if (FUNC_4(VAR_35, "sd-uhs-sdr25"))
  VAR_34->caps |= VAR_30;
 if (FUNC_4(VAR_35, "sd-uhs-sdr50"))
  VAR_34->caps |= VAR_31;
 if (FUNC_4(VAR_35, "sd-uhs-sdr104"))
  VAR_34->caps |= VAR_28;
 if (FUNC_4(VAR_35, "sd-uhs-ddr50"))
  VAR_34->caps |= VAR_27;
 if (FUNC_4(VAR_35, "cap-power-off-card"))
  VAR_34->caps |= VAR_24;
 if (FUNC_4(VAR_35, "cap-mmc-hw-reset"))
  VAR_34->caps |= VAR_20;
 if (FUNC_4(VAR_35, "cap-sdio-irq"))
  VAR_34->caps |= VAR_25;
 if (FUNC_4(VAR_35, "full-pwr-cycle"))
  VAR_34->caps2 |= VAR_4;
 if (FUNC_4(VAR_35, "keep-power-in-suspend"))
  VAR_34->pm_caps |= VAR_32;
 if (FUNC_4(VAR_35, "wakeup-source") ||
     FUNC_4(VAR_35, "enable-sdio-wakeup"))
  VAR_34->pm_caps |= VAR_33;
 if (FUNC_4(VAR_35, "mmc-ddr-3_3v"))
  VAR_34->caps |= VAR_17;
 if (FUNC_4(VAR_35, "mmc-ddr-1_8v"))
  VAR_34->caps |= VAR_16;
 if (FUNC_4(VAR_35, "mmc-ddr-1_2v"))
  VAR_34->caps |= VAR_15;
 if (FUNC_4(VAR_35, "mmc-hs200-1_8v"))
  VAR_34->caps2 |= VAR_6;
 if (FUNC_4(VAR_35, "mmc-hs200-1_2v"))
  VAR_34->caps2 |= VAR_5;
 if (FUNC_4(VAR_35, "mmc-hs400-1_8v"))
  VAR_34->caps2 |= VAR_8 | VAR_6;
 if (FUNC_4(VAR_35, "mmc-hs400-1_2v"))
  VAR_34->caps2 |= VAR_7 | VAR_5;
 if (FUNC_4(VAR_35, "mmc-hs400-enhanced-strobe"))
  VAR_34->caps2 |= VAR_9;
 if (FUNC_4(VAR_35, "no-sdio"))
  VAR_34->caps2 |= VAR_12;
 if (FUNC_4(VAR_35, "no-sd"))
  VAR_34->caps2 |= VAR_11;
 if (FUNC_4(VAR_35, "no-mmc"))
  VAR_34->caps2 |= VAR_10;


 if (FUNC_5(VAR_35, "fixed-emmc-driver-type", &VAR_37) == 0) {
  if (VAR_34->caps & VAR_23)
   VAR_34->fixed_drv_type = VAR_37;
  else
   FUNC_1(VAR_34->parent,
    "can't use fixed driver type, media is removable\n");
 }

 VAR_34->dsr_req = !FUNC_5(VAR_35, "dsr", &VAR_34->dsr);
 if (VAR_34->dsr_req && (VAR_34->dsr & ~0xffff)) {
  FUNC_1(VAR_34->parent,
   "device tree specified broken value for DSR: 0x%x, ignoring\n",
   VAR_34->dsr);
  VAR_34->dsr_req = 0;
 }

 FUNC_5(VAR_35, "post-power-on-delay-ms",
     &VAR_34->ios.power_delay_ms);

 return FUNC_8(VAR_34);
}
