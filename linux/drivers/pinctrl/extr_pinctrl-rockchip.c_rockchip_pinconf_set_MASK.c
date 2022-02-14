
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rockchip_pinctrl {TYPE_1__* ctrl; } ;
struct rockchip_pin_bank {int pin_base; int gpio_chip; } ;
struct pinctrl_dev {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;
struct TYPE_2__ {int schmitt_calc_reg; int drv_calc_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 struct rockchip_pin_bank* FUNC_1 (struct rockchip_pinctrl*,unsigned int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 struct rockchip_pinctrl* FUNC_4 (struct pinctrl_dev*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (struct rockchip_pin_bank*,int ,int ) ;
 int FUNC_8 (struct rockchip_pin_bank*,int ,int) ;
 int FUNC_9 (struct rockchip_pin_bank*,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct pinctrl_dev *VAR_2, unsigned int VAR_3,
    unsigned long *VAR_4, unsigned VAR_5)
{
 struct rockchip_pinctrl *VAR_6 = FUNC_4(VAR_2);
 struct rockchip_pin_bank *VAR_7 = FUNC_1(VAR_6, VAR_3);
 enum pin_config_param VAR_8;
 u32 VAR_9;
 int VAR_10;
 int VAR_11;

 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  VAR_8 = FUNC_3(VAR_4[VAR_10]);
  VAR_9 = FUNC_2(VAR_4[VAR_10]);

  switch (VAR_8) {
  case 134:
   VAR_11 = FUNC_8(VAR_7, VAR_3 - VAR_7->pin_base,
    VAR_8);
   if (VAR_11)
    return VAR_11;
   break;
  case 131:
  case 133:
  case 132:
  case 135:
   if (!FUNC_6(VAR_6->ctrl, VAR_8))
    return -VAR_1;

   if (!VAR_9)
    return -VAR_0;

   VAR_11 = FUNC_8(VAR_7, VAR_3 - VAR_7->pin_base,
    VAR_8);
   if (VAR_11)
    return VAR_11;
   break;
  case 128:
   FUNC_5(&VAR_7->gpio_chip,
       VAR_3 - VAR_7->pin_base, VAR_9);
   VAR_11 = FUNC_0(&VAR_7->gpio_chip,
       VAR_3 - VAR_7->pin_base, 0);
   if (VAR_11)
    return VAR_11;
   break;
  case 130:

   if (!VAR_6->ctrl->drv_calc_reg)
    return -VAR_1;

   VAR_11 = FUNC_7(VAR_7,
      VAR_3 - VAR_7->pin_base, VAR_9);
   if (VAR_11 < 0)
    return VAR_11;
   break;
  case 129:
   if (!VAR_6->ctrl->schmitt_calc_reg)
    return -VAR_1;

   VAR_11 = FUNC_9(VAR_7,
        VAR_3 - VAR_7->pin_base, VAR_9);
   if (VAR_11 < 0)
    return VAR_11;
   break;
  default:
   return -VAR_1;
   break;
  }
 }

 return 0;
}
