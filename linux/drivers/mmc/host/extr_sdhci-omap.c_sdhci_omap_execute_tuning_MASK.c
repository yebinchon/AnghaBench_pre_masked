
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct thermal_zone_device {int dummy; } ;
struct sdhci_pltfm_host {int dummy; } ;
struct sdhci_omap_host {int is_tuning; struct device* dev; } ;
struct sdhci_host {int ier; } ;
struct mmc_ios {int clock; scalar_t__ timing; } ;
struct mmc_host {struct mmc_ios ios; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct thermal_zone_device*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct thermal_zone_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (struct device*,char*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 struct sdhci_host* FUNC_5 (struct mmc_host*) ;
 scalar_t__ FUNC_6 (struct mmc_host*,scalar_t__,int *) ;
 int FUNC_7 (struct sdhci_omap_host*) ;
 scalar_t__ FUNC_8 (struct sdhci_omap_host*,int ) ;
 int FUNC_9 (struct sdhci_omap_host*,scalar_t__) ;
 int FUNC_10 (struct sdhci_omap_host*,int ,scalar_t__) ;
 struct sdhci_omap_host* FUNC_11 (struct sdhci_pltfm_host*) ;
 struct sdhci_pltfm_host* FUNC_12 (struct sdhci_host*) ;
 int FUNC_13 (struct sdhci_host*,int) ;
 int FUNC_14 (struct sdhci_host*,int,int ) ;
 int FUNC_15 (struct thermal_zone_device*,int*) ;
 struct thermal_zone_device* FUNC_16 (char*) ;

__attribute__((used)) static int FUNC_17(struct mmc_host *VAR_14, u32 VAR_15)
{
 struct sdhci_host *VAR_16 = FUNC_5(VAR_14);
 struct sdhci_pltfm_host *VAR_17 = FUNC_12(VAR_16);
 struct sdhci_omap_host *VAR_18 = FUNC_11(VAR_17);
 struct thermal_zone_device *VAR_19;
 struct device *VAR_20 = VAR_18->dev;
 struct mmc_ios *VAR_21 = &VAR_14->ios;
 u32 VAR_22 = 0, VAR_23 = 0;
 bool VAR_24 = 0;
 bool VAR_25 = 0;
 u8 VAR_26, VAR_27 = 0;
 u32 VAR_28 = 0, VAR_29 = 0;
 u32 VAR_30 = 0;
 int VAR_31;
 int VAR_32 = 0;
 u32 VAR_33;
 int VAR_34;


 if (VAR_21->clock <= 52000000)
  return 0;

 VAR_33 = FUNC_8(VAR_18, VAR_9);
 if (VAR_21->timing == VAR_5 && !(VAR_33 & VAR_1))
  return 0;

 VAR_19 = FUNC_16("cpu_thermal");
 if (FUNC_1(VAR_19)) {
  FUNC_3(VAR_20, "Unable to get thermal zone for tuning\n");
  return FUNC_2(VAR_19);
 }

 VAR_32 = FUNC_15(VAR_19, &VAR_31);
 if (VAR_32)
  return VAR_32;

 VAR_33 = FUNC_8(VAR_18, VAR_10);
 VAR_33 |= VAR_2;
 FUNC_10(VAR_18, VAR_10, VAR_33);







 if (VAR_16->ier & VAR_6) {
  VAR_16->ier &= ~VAR_6;
  VAR_25 = 1;
 }

 VAR_18->is_tuning = 1;






 while (VAR_30 <= VAR_4) {
  FUNC_9(VAR_18, VAR_30);

  VAR_26 = !FUNC_6(VAR_14, VAR_15, ((void*)0));
  if (VAR_26) {
   if (VAR_27) {
    VAR_28++;
   } else if (VAR_24) {

    VAR_28++;
   } else {
    VAR_22 = VAR_30;
    VAR_28 = 1;
   }
  } else {
   VAR_24 = VAR_27;
  }

  if (VAR_28 > VAR_29) {
   VAR_23 = VAR_22;
   VAR_29 = VAR_28;
  }

  VAR_27 = VAR_26;
  VAR_30 += 4;
 }

 if (!VAR_29) {
  FUNC_3(VAR_20, "Unable to find match\n");
  VAR_32 = -VAR_3;
  goto tuning_error;
 }





 if (VAR_31 < -20000)
  VAR_30 = FUNC_4(VAR_23 + 4 * (VAR_29 - 1) - 24,
      VAR_23 +
      FUNC_0(13 * VAR_29, 16) * 4);
 else if (VAR_31 < 20000)
  VAR_30 = VAR_23 + FUNC_0(9 * VAR_29, 16) * 4;
 else if (VAR_31 < 40000)
  VAR_30 = VAR_23 + FUNC_0(8 * VAR_29, 16) * 4;
 else if (VAR_31 < 70000)
  VAR_30 = VAR_23 + FUNC_0(7 * VAR_29, 16) * 4;
 else if (VAR_31 < 90000)
  VAR_30 = VAR_23 + FUNC_0(5 * VAR_29, 16) * 4;
 else if (VAR_31 < 120000)
  VAR_30 = VAR_23 + FUNC_0(4 * VAR_29, 16) * 4;
 else
  VAR_30 = VAR_23 + FUNC_0(3 * VAR_29, 16) * 4;







 for (VAR_34 = 3; VAR_34 <= 10; VAR_34++) {
  FUNC_9(VAR_18, VAR_30 + VAR_34);

  if (FUNC_6(VAR_14, VAR_15, ((void*)0))) {
   if (VAR_31 < 10000)
    VAR_30 += VAR_34 + 6;
   else if (VAR_31 < 20000)
    VAR_30 += VAR_34 - 12;
   else if (VAR_31 < 70000)
    VAR_30 += VAR_34 - 8;
   else
    VAR_30 += VAR_34 - 6;

   goto single_failure_found;
  }
 }

 for (VAR_34 = 2; VAR_34 >= -10; VAR_34--) {
  FUNC_9(VAR_18, VAR_30 + VAR_34);

  if (FUNC_6(VAR_14, VAR_15, ((void*)0))) {
   if (VAR_31 < 10000)
    VAR_30 += VAR_34 + 12;
   else if (VAR_31 < 20000)
    VAR_30 += VAR_34 + 8;
   else if (VAR_31 < 70000)
    VAR_30 += VAR_34 + 8;
   else if (VAR_31 < 90000)
    VAR_30 += VAR_34 + 10;
   else
    VAR_30 += VAR_34 + 12;

   goto single_failure_found;
  }
 }

single_failure_found:
 VAR_33 = FUNC_8(VAR_18, VAR_8);
 if (!(VAR_33 & VAR_0)) {
  VAR_32 = -VAR_3;
  goto tuning_error;
 }

 FUNC_9(VAR_18, VAR_30);

 VAR_18->is_tuning = 0;

 goto ret;

tuning_error:
 VAR_18->is_tuning = 0;
 FUNC_3(VAR_20, "Tuning failed\n");
 FUNC_7(VAR_18);

ret:
 FUNC_13(VAR_16, VAR_11 | VAR_12);

 if (VAR_25)
  VAR_16->ier |= VAR_6;
 FUNC_14(VAR_16, VAR_16->ier, VAR_7);
 FUNC_14(VAR_16, VAR_16->ier, VAR_13);
 return VAR_32;
}
