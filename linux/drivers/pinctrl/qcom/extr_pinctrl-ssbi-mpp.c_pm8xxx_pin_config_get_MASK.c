
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pm8xxx_pin_data {unsigned int pullup; unsigned int high_z; unsigned int input; unsigned int output_value; unsigned int power_source; unsigned int drive_strength; unsigned int dtest; unsigned int amux; unsigned int aout_level; unsigned int paired; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct pm8xxx_mpp {TYPE_2__ desc; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_3__ {struct pm8xxx_pin_data* drv_data; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned long) ;
 struct pm8xxx_mpp* FUNC_2 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_1,
     unsigned int VAR_2,
     unsigned long *VAR_3)
{
 struct pm8xxx_mpp *VAR_4 = FUNC_2(VAR_1);
 struct pm8xxx_pin_data *VAR_5 = VAR_4->desc.pins[VAR_2].drv_data;
 unsigned VAR_6 = FUNC_1(*VAR_3);
 unsigned VAR_7;

 switch (VAR_6) {
 case 136:
  VAR_7 = VAR_5->pullup;
  break;
 case 137:
  VAR_7 = VAR_5->high_z;
  break;
 case 134:
  VAR_7 = VAR_5->input;
  break;
 case 133:
  VAR_7 = VAR_5->output_value;
  break;
 case 132:
  VAR_7 = VAR_5->power_source;
  break;
 case 135:
  VAR_7 = VAR_5->drive_strength;
  break;
 case 129:
  VAR_7 = VAR_5->dtest;
  break;
 case 130:
  VAR_7 = VAR_5->amux;
  break;
 case 131:
  VAR_7 = VAR_5->aout_level;
  break;
 case 128:
  VAR_7 = VAR_5->paired;
  break;
 default:
  return -VAR_0;
 }

 *VAR_3 = FUNC_0(VAR_6, VAR_7);

 return 0;
}
