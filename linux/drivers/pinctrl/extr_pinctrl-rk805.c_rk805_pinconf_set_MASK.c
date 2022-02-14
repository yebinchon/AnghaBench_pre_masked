
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct rk805_pctrl_info {int dev; int gpio_chip; } ;
struct pinctrl_dev {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;

 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 struct rk805_pctrl_info* FUNC_3 (struct pinctrl_dev*) ;
 int FUNC_4 (int *,unsigned int,unsigned int) ;
 int FUNC_5 (struct pinctrl_dev*,int *,unsigned int,int) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_1,
        unsigned int VAR_2, unsigned long *VAR_3,
        unsigned int VAR_4)
{
 struct rk805_pctrl_info *VAR_5 = FUNC_3(VAR_1);
 enum pin_config_param VAR_6;
 u32 VAR_7, VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  VAR_6 = FUNC_2(VAR_3[VAR_7]);
  VAR_8 = FUNC_1(VAR_3[VAR_7]);

  switch (VAR_6) {
  case 128:
   FUNC_4(&VAR_5->gpio_chip, VAR_2, VAR_8);
   FUNC_5(VAR_1, ((void*)0), VAR_2, 0);
   break;
  default:
   FUNC_0(VAR_5->dev, "Properties not supported\n");
   return -VAR_0;
  }
 }

 return 0;
}
