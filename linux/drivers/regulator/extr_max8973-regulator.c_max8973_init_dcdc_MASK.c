
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct max8973_regulator_platform_data {int control_flags; scalar_t__ junction_temp_warning; } ;
struct TYPE_2__ {int ramp_delay; int enable_time; } ;
struct max8973_chip {scalar_t__ id; int dev; int regmap; scalar_t__ enable_external_control; TYPE_1__ desc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
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




 unsigned int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct max8973_chip *VAR_31,
        struct max8973_regulator_platform_data *VAR_32)
{
 int VAR_33;
 uint8_t VAR_34 = 0;
 uint8_t VAR_35 = 0;
 unsigned int VAR_36;

 VAR_33 = FUNC_1(VAR_31->regmap, VAR_10, &VAR_36);
 if (VAR_33 < 0) {
  FUNC_0(VAR_31->dev, "register %d read failed, err = %d",
    VAR_10, VAR_33);
  return VAR_33;
 }
 VAR_34 = VAR_36 & VAR_27;
 switch (VAR_34) {
 case 131:
  VAR_31->desc.ramp_delay = 12000;
  break;
 case 129:
  VAR_31->desc.ramp_delay = 25000;
  break;
 case 128:
  VAR_31->desc.ramp_delay = 50000;
  break;
 case 130:
  VAR_31->desc.ramp_delay = 200000;
  break;
 }

 if (VAR_32->control_flags & VAR_19)
  VAR_34 |= VAR_28;

 if (!(VAR_32->control_flags & VAR_14))
  VAR_34 |= VAR_26;

 if (VAR_32->control_flags & VAR_17)
  VAR_34 |= VAR_4;

 if (VAR_32->control_flags & VAR_12) {
  VAR_34 |= VAR_5;
  VAR_31->desc.enable_time = 20;
 } else {
  VAR_31->desc.enable_time = 240;
 }

 if (VAR_32->control_flags & VAR_15)
  VAR_34 |= VAR_21;

 if ((VAR_32->junction_temp_warning == VAR_1) &&
     (VAR_31->id == VAR_0))
  VAR_35 |= VAR_2;

 if (!(VAR_32->control_flags & VAR_18))
  VAR_35 |= VAR_20;


 switch (VAR_32->control_flags & VAR_13) {
 case 136:
  VAR_35 |= VAR_9;
  break;

 case 138:
  VAR_35 |= VAR_7;
  break;

 case 139:
  VAR_35 |= VAR_6;
  break;

 case 137:
  VAR_35 |= VAR_8;
  break;
 }


 switch (VAR_32->control_flags & VAR_16) {
 case 134:
  VAR_35 |= VAR_23;
  break;

 case 135:
  VAR_35 |= VAR_22;
  break;

 case 133:
  VAR_35 |= VAR_24;
  break;

 case 132:
  VAR_35 |= VAR_25;
  break;
 }

 VAR_33 = FUNC_3(VAR_31->regmap, VAR_10, VAR_34);
 if (VAR_33 < 0) {
  FUNC_0(VAR_31->dev, "register %d write failed, err = %d",
    VAR_10, VAR_33);
  return VAR_33;
 }

 VAR_33 = FUNC_3(VAR_31->regmap, VAR_11, VAR_35);
 if (VAR_33 < 0) {
  FUNC_0(VAR_31->dev, "register %d write failed, err = %d",
    VAR_11, VAR_33);
  return VAR_33;
 }


 if (VAR_31->enable_external_control && (VAR_31->id == VAR_3)) {
  VAR_33 = FUNC_2(VAR_31->regmap, VAR_29,
      VAR_30, 0);
  if (VAR_33 < 0)
   FUNC_0(VAR_31->dev, "register %d update failed, err = %d",
    VAR_29, VAR_33);
 }
 return VAR_33;
}
