
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_dev {int dummy; } ;
struct gemini_pmx {int map; } ;
struct gemini_pin_conf {int mask; int reg; } ;
typedef enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;


 int VAR_0 ;

 int FUNC_0 (int) ;
 struct gemini_pin_conf* FUNC_1 (struct gemini_pmx*,unsigned int) ;
 unsigned long FUNC_2 (int const,int) ;
 int FUNC_3 (unsigned long) ;
 struct gemini_pmx* FUNC_4 (struct pinctrl_dev*) ;
 int FUNC_5 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_6(struct pinctrl_dev *VAR_1, unsigned int VAR_2,
         unsigned long *VAR_3)
{
 struct gemini_pmx *VAR_4 = FUNC_4(VAR_1);
 enum pin_config_param VAR_5 = FUNC_3(*VAR_3);
 const struct gemini_pin_conf *VAR_6;
 u32 VAR_7;

 switch (VAR_5) {
 case 128:
  VAR_6 = FUNC_1(VAR_4, VAR_2);
  if (!VAR_6)
   return -VAR_0;
  FUNC_5(VAR_4->map, VAR_6->reg, &VAR_7);
  VAR_7 &= VAR_6->mask;
  VAR_7 >>= (FUNC_0(VAR_6->mask) - 1);
  *VAR_3 = FUNC_2(128, VAR_7);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
