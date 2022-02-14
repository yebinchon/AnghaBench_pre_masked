
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int val ;
struct pm8xxx_pin_data {int input; unsigned int power_source; unsigned int dtest; int output; int output_value; int paired; int pullup; int high_z; unsigned int amux; unsigned int aout_level; int drive_strength; void* mode; int reg; } ;
struct pm8xxx_mpp {int dev; int regmap; } ;


 unsigned int FUNC_0 (int) ;
 void* VAR_0 ;




 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct pm8xxx_mpp *VAR_3,
          struct pm8xxx_pin_data *VAR_4)
{
 unsigned int VAR_5;
 unsigned VAR_6;
 unsigned VAR_7;
 unsigned VAR_8;
 int VAR_9;

 VAR_9 = FUNC_2(VAR_3->regmap, VAR_4->reg, &VAR_5);
 if (VAR_9) {
  FUNC_1(VAR_3->dev, "failed to read register\n");
  return VAR_9;
 }

 VAR_8 = (VAR_5 >> 5) & 7;
 VAR_6 = (VAR_5 >> 2) & 7;
 VAR_7 = (VAR_5) & 3;

 switch (VAR_8) {
 case 130:
  VAR_4->mode = VAR_1;
  VAR_4->input = 1;
  VAR_4->power_source = VAR_6;
  VAR_4->dtest = VAR_7;
  break;
 case 129:
  VAR_4->mode = VAR_1;
  VAR_4->output = 1;
  VAR_4->power_source = VAR_6;
  VAR_4->output_value = !!(VAR_7 & FUNC_0(0));
  VAR_4->paired = !!(VAR_7 & FUNC_0(1));
  break;
 case 131:
  VAR_4->mode = VAR_1;
  VAR_4->input = 1;
  VAR_4->output = 1;
  VAR_4->power_source = VAR_6;
  switch (VAR_7) {
  case 138:
   VAR_4->pullup = 600;
   break;
  case 136:
   VAR_4->high_z = 1;
   break;
  case 139:
   VAR_4->pullup = 10000;
   break;
  case 137:
   VAR_4->pullup = 30000;
   break;
  }
  break;
 case 135:
  VAR_4->mode = VAR_0;
  VAR_4->input = 1;
  VAR_4->amux = VAR_6;
  break;
 case 134:
  VAR_4->mode = VAR_0;
  VAR_4->output = 1;
  VAR_4->aout_level = VAR_6;
  VAR_4->output_value = !!(VAR_7 & FUNC_0(0));
  VAR_4->paired = !!(VAR_7 & FUNC_0(1));
  break;
 case 128:
  VAR_4->mode = VAR_2;
  VAR_4->drive_strength = 5 * (VAR_6 + 1);
  VAR_4->output_value = !!(VAR_7 & FUNC_0(0));
  VAR_4->paired = !!(VAR_7 & FUNC_0(1));
  break;
 case 132:
  VAR_4->mode = VAR_2;
  VAR_4->dtest = VAR_7 + 1;
  VAR_4->drive_strength = 5 * (VAR_6 + 1);
  break;
 case 133:
  VAR_4->mode = VAR_1;
  VAR_4->power_source = VAR_6;
  if (VAR_7 >= 1)
   VAR_4->dtest = VAR_7;
  break;
 }

 return 0;
}
