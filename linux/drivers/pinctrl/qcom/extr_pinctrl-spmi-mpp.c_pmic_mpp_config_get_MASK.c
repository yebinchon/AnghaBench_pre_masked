
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmic_mpp_pad {unsigned int power_source; unsigned int out_value; unsigned int dtest; unsigned int amux_input; unsigned int drive_strength; unsigned int aout_level; int paired; int input_enabled; int is_enabled; int pullup; } ;
struct pinctrl_dev {TYPE_2__* desc; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct TYPE_3__ {struct pmic_mpp_pad* drv_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned long) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_2,
          unsigned int VAR_3, unsigned long *VAR_4)
{
 unsigned VAR_5 = FUNC_1(*VAR_4);
 struct pmic_mpp_pad *VAR_6;
 unsigned VAR_7 = 0;

 VAR_6 = VAR_2->desc->pins[VAR_3].drv_data;

 switch (VAR_5) {
 case 141:
  if (VAR_6->pullup != VAR_1)
   return -VAR_0;
  VAR_7 = 1;
  break;
 case 139:
  switch (VAR_6->pullup) {
  case 130:
   VAR_7 = 600;
   break;
  case 129:
   VAR_7 = 10000;
   break;
  case 128:
   VAR_7 = 30000;
   break;
  default:
   return -VAR_0;
  }
  break;
 case 140:
  if (VAR_6->is_enabled)
   return -VAR_0;
  VAR_7 = 1;
  break;
 case 135:
  VAR_7 = VAR_6->power_source;
  break;
 case 137:
  if (!VAR_6->input_enabled)
   return -VAR_0;
  VAR_7 = 1;
  break;
 case 136:
  VAR_7 = VAR_6->out_value;
  break;
 case 132:
  VAR_7 = VAR_6->dtest;
  break;
 case 134:
  VAR_7 = VAR_6->amux_input;
  break;
 case 131:
  if (!VAR_6->paired)
   return -VAR_0;
  VAR_7 = 1;
  break;
 case 138:
  VAR_7 = VAR_6->drive_strength;
  break;
 case 133:
  VAR_7 = VAR_6->aout_level;
  break;
 default:
  return -VAR_0;
 }


 *VAR_4 = FUNC_0(VAR_5, VAR_7);
 return 0;
}
