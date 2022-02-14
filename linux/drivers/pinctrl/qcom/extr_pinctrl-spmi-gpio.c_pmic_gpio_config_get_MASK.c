
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pmic_gpio_pad {unsigned int pullup; unsigned int power_source; unsigned int out_value; unsigned int strength; unsigned int atest; unsigned int analog_pass; unsigned int dtest_buffer; int input_enabled; int is_enabled; int buffer_type; } ;
struct pinctrl_dev {TYPE_2__* desc; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct TYPE_3__ {struct pmic_gpio_pad* drv_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned long FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned long) ;

__attribute__((used)) static int FUNC_2(struct pinctrl_dev *VAR_7,
    unsigned int VAR_8, unsigned long *VAR_9)
{
 unsigned VAR_10 = FUNC_1(*VAR_9);
 struct pmic_gpio_pad *VAR_11;
 unsigned VAR_12;

 VAR_11 = VAR_7->desc->pins[VAR_8].drv_data;

 switch (VAR_10) {
 case 136:
  if (VAR_11->buffer_type != VAR_1)
   return -VAR_0;
  VAR_12 = 1;
  break;
 case 138:
  if (VAR_11->buffer_type != VAR_2)
   return -VAR_0;
  VAR_12 = 1;
  break;
 case 137:
  if (VAR_11->buffer_type != VAR_3)
   return -VAR_0;
  VAR_12 = 1;
  break;
 case 140:
  if (VAR_11->pullup != VAR_5)
   return -VAR_0;
  VAR_12 = 1;
  break;
 case 142:
  if (VAR_11->pullup != VAR_4)
   return -VAR_0;
  VAR_12 = 1;
  break;
 case 139:
  if (VAR_11->pullup != VAR_6)
   return -VAR_0;
  VAR_12 = 1;
  break;
 case 141:
  if (VAR_11->is_enabled)
   return -VAR_0;
  VAR_12 = 1;
  break;
 case 133:
  VAR_12 = VAR_11->power_source;
  break;
 case 135:
  if (!VAR_11->input_enabled)
   return -VAR_0;
  VAR_12 = 1;
  break;
 case 134:
  VAR_12 = VAR_11->out_value;
  break;
 case 129:
  VAR_12 = VAR_11->pullup;
  break;
 case 128:
  VAR_12 = VAR_11->strength;
  break;
 case 131:
  VAR_12 = VAR_11->atest;
  break;
 case 132:
  VAR_12 = VAR_11->analog_pass;
  break;
 case 130:
  VAR_12 = VAR_11->dtest_buffer;
  break;
 default:
  return -VAR_0;
 }

 *VAR_9 = FUNC_0(VAR_10, VAR_12);
 return 0;
}
