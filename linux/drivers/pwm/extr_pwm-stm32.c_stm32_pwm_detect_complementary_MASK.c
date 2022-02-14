
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct stm32_pwm {int have_complementary_output; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct stm32_pwm *VAR_2)
{
 u32 VAR_3;





 FUNC_1(VAR_2->regmap,
      VAR_0, VAR_1, VAR_1);
 FUNC_0(VAR_2->regmap, VAR_0, &VAR_3);
 FUNC_1(VAR_2->regmap, VAR_0, VAR_1, 0);

 VAR_2->have_complementary_output = (VAR_3 != 0);
}
