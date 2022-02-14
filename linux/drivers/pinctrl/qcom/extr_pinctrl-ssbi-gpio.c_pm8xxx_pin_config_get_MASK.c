
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pm8xxx_pin_data {unsigned int pull_up_strength; int mode; unsigned int output_value; unsigned int power_source; unsigned int output_strength; int open_drain; int disable; int bias; } ;
struct TYPE_4__ {TYPE_1__* pins; } ;
struct pm8xxx_gpio {TYPE_2__ desc; } ;
struct pinctrl_dev {int dummy; } ;
struct TYPE_3__ {struct pm8xxx_pin_data* drv_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 unsigned long FUNC_0 (unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned long) ;
 struct pm8xxx_gpio* FUNC_2 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_6,
     unsigned int VAR_7,
     unsigned long *VAR_8)
{
 struct pm8xxx_gpio *VAR_9 = FUNC_2(VAR_6);
 struct pm8xxx_pin_data *VAR_10 = VAR_9->desc.pins[VAR_7].drv_data;
 unsigned VAR_11 = FUNC_1(*VAR_8);
 unsigned VAR_12;

 switch (VAR_11) {
 case 138:
  if (VAR_10->bias != VAR_1)
   return -VAR_0;
  VAR_12 = 1;
  break;
 case 136:
  if (VAR_10->bias != VAR_2)
   return -VAR_0;
  VAR_12 = 1;
  break;
 case 135:
  if (VAR_10->bias > VAR_3)
   return -VAR_0;
  VAR_12 = 1;
  break;
 case 128:
  VAR_12 = VAR_10->pull_up_strength;
  break;
 case 137:
  if (!VAR_10->disable)
   return -VAR_0;
  VAR_12 = 1;
  break;
 case 132:
  if (VAR_10->mode != VAR_4)
   return -VAR_0;
  VAR_12 = 1;
  break;
 case 131:
  if (VAR_10->mode & VAR_5)
   VAR_12 = VAR_10->output_value;
  else
   VAR_12 = 0;
  break;
 case 130:
  VAR_12 = VAR_10->power_source;
  break;
 case 129:
  VAR_12 = VAR_10->output_strength;
  break;
 case 133:
  if (VAR_10->open_drain)
   return -VAR_0;
  VAR_12 = 1;
  break;
 case 134:
  if (!VAR_10->open_drain)
   return -VAR_0;
  VAR_12 = 1;
  break;
 default:
  return -VAR_0;
 }

 *VAR_8 = FUNC_0(VAR_11, VAR_12);

 return 0;
}
