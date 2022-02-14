
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pinctrl_dev {int dummy; } ;
struct as3722_pctrl_info {TYPE_1__* gpio_control; int dev; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_2__ {int mode_prop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (int ,char*) ;
 unsigned long FUNC_1 (int,int) ;
 int FUNC_2 (unsigned long) ;
 struct as3722_pctrl_info* FUNC_3 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_5,
   unsigned VAR_6, unsigned long *VAR_7)
{
 struct as3722_pctrl_info *VAR_8 = FUNC_3(VAR_5);
 enum pin_config_param VAR_9 = FUNC_2(*VAR_7);
 int VAR_10 = 0;
 u16 VAR_11;

 switch (VAR_9) {
 case 132:
  VAR_11 = VAR_3 |
    VAR_2;
  if (!(VAR_8->gpio_control[VAR_6].mode_prop & VAR_11))
   VAR_10 = 1;
  VAR_11 = 0;
  break;

 case 129:
  VAR_11 = VAR_3;
  break;

 case 130:
  VAR_11 = VAR_2;
  break;

 case 128:
  VAR_11 = VAR_1;
  break;

 case 131:
  VAR_11 = VAR_0;
  break;

 default:
  FUNC_0(VAR_8->dev, "Properties not supported\n");
  return -VAR_4;
 }

 if (VAR_8->gpio_control[VAR_6].mode_prop & VAR_11)
  VAR_10 = 1;

 *VAR_7 = FUNC_1(VAR_9, (u16)VAR_10);
 return 0;
}
