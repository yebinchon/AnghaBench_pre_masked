
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct thermal_zone_device {int dummy; } ;
struct tegra_soctherm {scalar_t__ regs; struct thermal_zone_device** thermctl_tzs; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct thermal_zone_device*,int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_16, void *VAR_17)
{
 struct tegra_soctherm *VAR_18 = VAR_17;
 struct thermal_zone_device *VAR_19;
 u32 VAR_20, VAR_21 = 0, VAR_22 = 0, VAR_23 = 0, VAR_24 = 0, VAR_25 = 0;

 VAR_20 = FUNC_1(VAR_18->regs + VAR_6);


 VAR_22 |= VAR_20 & VAR_7;
 VAR_22 |= VAR_20 & VAR_8;

 VAR_23 |= VAR_20 & VAR_9;
 VAR_23 |= VAR_20 & VAR_10;

 VAR_24 |= VAR_20 & VAR_14;
 VAR_24 |= VAR_20 & VAR_15;

 VAR_25 |= VAR_20 & VAR_12;
 VAR_25 |= VAR_20 & VAR_13;

 VAR_21 |= VAR_22 | VAR_23 | VAR_24 | VAR_25;
 if (VAR_21) {
  FUNC_3(VAR_21, VAR_18->regs + VAR_6);
  VAR_20 &= ~VAR_21;

  if (VAR_22) {
   VAR_19 = VAR_18->thermctl_tzs[VAR_1];
   FUNC_2(VAR_19,
         VAR_5);
  }

  if (VAR_23) {
   VAR_19 = VAR_18->thermctl_tzs[VAR_2];
   FUNC_2(VAR_19,
         VAR_5);
  }

  if (VAR_24) {
   VAR_19 = VAR_18->thermctl_tzs[VAR_4];
   FUNC_2(VAR_19,
         VAR_5);
  }

  if (VAR_25) {
   VAR_19 = VAR_18->thermctl_tzs[VAR_3];
   FUNC_2(VAR_19,
         VAR_5);
  }
 }


 VAR_21 |= VAR_11;
 VAR_20 &= ~VAR_21;

 if (VAR_20) {

  FUNC_0("soctherm: Ignored unexpected INTRs 0x%08x\n", VAR_20);
  FUNC_3(VAR_20, VAR_18->regs + VAR_6);
 }

 return VAR_0;
}
