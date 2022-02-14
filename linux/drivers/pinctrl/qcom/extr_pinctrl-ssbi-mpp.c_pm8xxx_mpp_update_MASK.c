
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct pm8xxx_pin_data {int mode; unsigned int dtest; int pullup; unsigned int output_value; unsigned int power_source; unsigned int aout_level; unsigned int amux; int drive_strength; int reg; int paired; int output; int input; int high_z; } ;
struct pm8xxx_mpp {int dev; int regmap; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;

 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

 unsigned int VAR_5 ;

 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct pm8xxx_mpp *VAR_14,
        struct pm8xxx_pin_data *VAR_15)
{
 unsigned VAR_16;
 unsigned VAR_17;
 unsigned VAR_18;
 int VAR_19;
 u8 VAR_20;

 switch (VAR_15->mode) {
 case 129:
  if (VAR_15->dtest) {
   VAR_18 = VAR_8;
   VAR_17 = VAR_15->dtest - 1;
  } else if (VAR_15->input && VAR_15->output) {
   VAR_18 = VAR_10;
   if (VAR_15->high_z)
    VAR_17 = VAR_4;
   else if (VAR_15->pullup == 600)
    VAR_17 = VAR_2;
   else if (VAR_15->pullup == 10000)
    VAR_17 = VAR_1;
   else
    VAR_17 = VAR_3;
  } else if (VAR_15->input) {
   VAR_18 = VAR_11;
   if (VAR_15->dtest)
    VAR_17 = VAR_15->dtest;
   else
    VAR_17 = VAR_5;
  } else {
   VAR_18 = VAR_12;
   VAR_17 = !!VAR_15->output_value;
   if (VAR_15->paired)
    VAR_17 |= FUNC_0(1);
  }

  VAR_16 = VAR_15->power_source;
  break;
 case 130:
  if (VAR_15->output) {
   VAR_18 = VAR_7;
   VAR_16 = VAR_15->aout_level;
   VAR_17 = VAR_15->output_value;
   if (VAR_15->paired)
    VAR_17 |= FUNC_0(1);
  } else {
   VAR_18 = VAR_6;
   VAR_16 = VAR_15->amux;
   VAR_17 = 0;
  }
  break;
 case 128:
  VAR_16 = (VAR_15->drive_strength / 5) - 1;
  if (VAR_15->dtest) {
   VAR_18 = VAR_9;
   VAR_17 = VAR_15->dtest - 1;
  } else {
   VAR_18 = VAR_13;
   VAR_17 = VAR_15->output_value;
   if (VAR_15->paired)
    VAR_17 |= FUNC_0(1);
  }
  break;
 default:
  return -VAR_0;
 }

 VAR_20 = VAR_18 << 5 | VAR_16 << 2 | VAR_17;
 VAR_19 = FUNC_2(VAR_14->regmap, VAR_15->reg, VAR_20);
 if (VAR_19)
  FUNC_1(VAR_14->dev, "failed to write register\n");

 return VAR_19;
}
