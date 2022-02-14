
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_dev {int dummy; } ;
struct mcp23s08 {int dummy; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_1 (struct mcp23s08*,int ,unsigned int*) ;
 int FUNC_2 (unsigned long) ;
 struct mcp23s08* FUNC_3 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_4(struct pinctrl_dev *VAR_3, unsigned int VAR_4,
         unsigned long *VAR_5)
{
 struct mcp23s08 *VAR_6 = FUNC_3(VAR_3);
 enum pin_config_param VAR_7 = FUNC_2(*VAR_5);
 unsigned int VAR_8, VAR_9;
 int VAR_10;

 switch (VAR_7) {
 case 128:
  VAR_10 = FUNC_1(VAR_6, VAR_2, &VAR_8);
  if (VAR_10 < 0)
   return VAR_10;
  VAR_9 = (VAR_8 & FUNC_0(VAR_4)) ? 1 : 0;
  break;
 default:
  return -VAR_1;
 }

 *VAR_5 = 0;

 return VAR_9 ? 0 : -VAR_0;
}
