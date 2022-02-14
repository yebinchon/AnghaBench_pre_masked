
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct rk805_pctrl_info {int dev; int gpio_chip; } ;
struct pinctrl_dev {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;

 int FUNC_0 (int ,char*) ;
 unsigned long FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned long) ;
 struct rk805_pctrl_info* FUNC_3 (struct pinctrl_dev*) ;
 scalar_t__ FUNC_4 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct pinctrl_dev *VAR_1,
        unsigned int VAR_2, unsigned long *VAR_3)
{
 struct rk805_pctrl_info *VAR_4 = FUNC_3(VAR_1);
 enum pin_config_param VAR_5 = FUNC_2(*VAR_3);
 u32 VAR_6 = 0;

 switch (VAR_5) {
 case 128:
  VAR_6 = FUNC_4(&VAR_4->gpio_chip, VAR_2);
  break;
 default:
  FUNC_0(VAR_4->dev, "Properties not supported\n");
  return -VAR_0;
 }

 *VAR_3 = FUNC_1(VAR_5, (u16)VAR_6);

 return 0;
}
