
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_pwm {int clk; int regmap; scalar_t__ have_complementary_output; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct stm32_pwm*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct stm32_pwm *VAR_5, int VAR_6)
{
 u32 VAR_7;


 VAR_7 = VAR_1 << (VAR_6 * 4);
 if (VAR_5->have_complementary_output)
  VAR_7 |= VAR_2 << (VAR_6 * 4);

 FUNC_2(VAR_5->regmap, VAR_0, VAR_7, 0);


 if (!FUNC_0(VAR_5))
  FUNC_2(VAR_5->regmap, VAR_3, VAR_4, 0);

 FUNC_1(VAR_5->clk);
}
