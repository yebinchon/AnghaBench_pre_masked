
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_pwm {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct stm32_pwm *VAR_5, int VAR_6, u32 VAR_7)
{
 switch (VAR_6) {
 case 0:
  return FUNC_0(VAR_5->regmap, VAR_1, VAR_7);
 case 1:
  return FUNC_0(VAR_5->regmap, VAR_2, VAR_7);
 case 2:
  return FUNC_0(VAR_5->regmap, VAR_3, VAR_7);
 case 3:
  return FUNC_0(VAR_5->regmap, VAR_4, VAR_7);
 }
 return -VAR_0;
}
