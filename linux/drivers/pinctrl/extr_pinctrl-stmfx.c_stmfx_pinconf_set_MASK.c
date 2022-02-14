
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stmfx_pinctrl {int gpio_chip; } ;
struct pinctrl_gpio_range {int dummy; } ;
struct pinctrl_dev {int dev; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 struct stmfx_pinctrl* FUNC_3 (struct pinctrl_dev*) ;
 struct pinctrl_gpio_range* FUNC_4 (struct pinctrl_dev*,unsigned int) ;
 int FUNC_5 (int *,unsigned int,int ) ;
 int FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (struct stmfx_pinctrl*,unsigned int,int) ;
 int FUNC_8 (struct stmfx_pinctrl*,unsigned int,int) ;

__attribute__((used)) static int FUNC_9(struct pinctrl_dev *VAR_2, unsigned int VAR_3,
        unsigned long *VAR_4, unsigned int VAR_5)
{
 struct stmfx_pinctrl *VAR_6 = FUNC_3(VAR_2);
 struct pinctrl_gpio_range *VAR_7;
 enum pin_config_param VAR_8;
 u32 VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_7 = FUNC_4(VAR_2, VAR_3);
 if (!VAR_7) {
  FUNC_0(VAR_2->dev, "pin %d is not available\n", VAR_3);
  return -VAR_0;
 }

 VAR_10 = FUNC_6(&VAR_6->gpio_chip, VAR_3);
 if (VAR_10 < 0)
  return VAR_10;

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_8 = FUNC_2(VAR_4[VAR_11]);
  VAR_9 = FUNC_1(VAR_4[VAR_11]);

  switch (VAR_8) {
  case 132:
  case 134:
  case 129:
   VAR_12 = FUNC_8(VAR_6, VAR_3, 0);
   if (VAR_12)
    return VAR_12;
   break;
  case 133:
   VAR_12 = FUNC_8(VAR_6, VAR_3, 1);
   if (VAR_12)
    return VAR_12;
   VAR_12 = FUNC_7(VAR_6, VAR_3, 0);
   if (VAR_12)
    return VAR_12;
   break;
  case 131:
   VAR_12 = FUNC_8(VAR_6, VAR_3, 1);
   if (VAR_12)
    return VAR_12;
   VAR_12 = FUNC_7(VAR_6, VAR_3, 1);
   if (VAR_12)
    return VAR_12;
   break;
  case 130:
   VAR_12 = FUNC_8(VAR_6, VAR_3, 1);
   if (VAR_12)
    return VAR_12;
   break;
  case 128:
   VAR_12 = FUNC_5(&VAR_6->gpio_chip,
         VAR_3, VAR_9);
   if (VAR_12)
    return VAR_12;
   break;
  default:
   return -VAR_1;
  }
 }

 return 0;
}
