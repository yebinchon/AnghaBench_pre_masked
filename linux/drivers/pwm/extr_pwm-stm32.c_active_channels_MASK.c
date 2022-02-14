
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_pwm {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static u32 FUNC_1(struct stm32_pwm *VAR_2)
{
 u32 VAR_3;

 FUNC_0(VAR_2->regmap, VAR_0, &VAR_3);

 return VAR_3 & VAR_1;
}
