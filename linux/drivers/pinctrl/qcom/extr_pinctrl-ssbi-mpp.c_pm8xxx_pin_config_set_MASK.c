
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pm8xxx_pin_data {unsigned int pullup; int high_z; int input; int output; int output_value; unsigned int power_source; unsigned int drive_strength; unsigned int dtest; unsigned int amux; unsigned int aout_level; int paired; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct pm8xxx_mpp {int dev; TYPE_2__ desc; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_3__ {struct pm8xxx_pin_data* drv_data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 unsigned int FUNC_1 (unsigned long) ;
 unsigned int FUNC_2 (unsigned long) ;
 struct pm8xxx_mpp* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (struct pm8xxx_mpp*,struct pm8xxx_pin_data*) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_1,
     unsigned int VAR_2,
     unsigned long *VAR_3,
     unsigned VAR_4)
{
 struct pm8xxx_mpp *VAR_5 = FUNC_3(VAR_1);
 struct pm8xxx_pin_data *VAR_6 = VAR_5->desc.pins[VAR_2].drv_data;
 unsigned VAR_7;
 unsigned VAR_8;
 unsigned VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_7 = FUNC_2(VAR_3[VAR_9]);
  VAR_8 = FUNC_1(VAR_3[VAR_9]);

  switch (VAR_7) {
  case 136:
   VAR_6->pullup = VAR_8;
   break;
  case 137:
   VAR_6->high_z = 1;
   break;
  case 134:
   VAR_6->input = 1;
   break;
  case 133:
   VAR_6->output = 1;
   VAR_6->output_value = !!VAR_8;
   break;
  case 132:
   VAR_6->power_source = VAR_8;
   break;
  case 135:
   VAR_6->drive_strength = VAR_8;
   break;
  case 129:
   VAR_6->dtest = VAR_8;
   break;
  case 130:
   VAR_6->amux = VAR_8;
   break;
  case 131:
   VAR_6->aout_level = VAR_8;
   break;
  case 128:
   VAR_6->paired = !!VAR_8;
   break;
  default:
   FUNC_0(VAR_5->dev,
    "unsupported config parameter: %x\n",
    VAR_7);
   return -VAR_0;
  }
 }

 FUNC_4(VAR_5, VAR_6);

 return 0;
}
