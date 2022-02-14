
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct rockchip_pinctrl {TYPE_1__* ctrl; } ;
struct rockchip_pin_bank {int pin_base; int gpio_chip; } ;
struct pinctrl_dev {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_2__ {int schmitt_calc_reg; int drv_calc_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rockchip_pin_bank* FUNC_0 (struct rockchip_pinctrl*,unsigned int) ;
 unsigned long FUNC_1 (int,int) ;
 int FUNC_2 (unsigned long) ;
 struct rockchip_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (struct rockchip_pin_bank*,int ) ;
 int FUNC_5 (struct rockchip_pin_bank*,int ) ;
 int FUNC_6 (struct rockchip_pin_bank*,int ) ;
 int FUNC_7 (struct rockchip_pin_bank*,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_10(struct pinctrl_dev *VAR_3, unsigned int VAR_4,
       unsigned long *VAR_5)
{
 struct rockchip_pinctrl *VAR_6 = FUNC_3(VAR_3);
 struct rockchip_pin_bank *VAR_7 = FUNC_0(VAR_6, VAR_4);
 enum pin_config_param VAR_8 = FUNC_2(*VAR_5);
 u16 VAR_9;
 int VAR_10;

 switch (VAR_8) {
 case 134:
  if (FUNC_6(VAR_7, VAR_4 - VAR_7->pin_base) != VAR_8)
   return -VAR_0;

  VAR_9 = 0;
  break;
 case 131:
 case 133:
 case 132:
 case 135:
  if (!FUNC_9(VAR_6->ctrl, VAR_8))
   return -VAR_1;

  if (FUNC_6(VAR_7, VAR_4 - VAR_7->pin_base) != VAR_8)
   return -VAR_0;

  VAR_9 = 1;
  break;
 case 128:
  VAR_10 = FUNC_5(VAR_7, VAR_4 - VAR_7->pin_base);
  if (VAR_10 != VAR_2)
   return -VAR_0;

  VAR_10 = FUNC_8(&VAR_7->gpio_chip, VAR_4 - VAR_7->pin_base);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_9 = VAR_10 ? 1 : 0;
  break;
 case 130:

  if (!VAR_6->ctrl->drv_calc_reg)
   return -VAR_1;

  VAR_10 = FUNC_4(VAR_7, VAR_4 - VAR_7->pin_base);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_9 = VAR_10;
  break;
 case 129:
  if (!VAR_6->ctrl->schmitt_calc_reg)
   return -VAR_1;

  VAR_10 = FUNC_7(VAR_7, VAR_4 - VAR_7->pin_base);
  if (VAR_10 < 0)
   return VAR_10;

  VAR_9 = VAR_10;
  break;
 default:
  return -VAR_1;
  break;
 }

 *VAR_5 = FUNC_1(VAR_8, VAR_9);

 return 0;
}
