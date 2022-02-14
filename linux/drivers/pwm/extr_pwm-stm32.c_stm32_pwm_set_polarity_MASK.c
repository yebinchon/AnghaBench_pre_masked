
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_pwm {int regmap; scalar_t__ have_complementary_output; } ;
typedef enum pwm_polarity { ____Placeholder_pwm_polarity } pwm_polarity ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct stm32_pwm *VAR_4, int VAR_5,
      enum pwm_polarity VAR_6)
{
 u32 VAR_7;

 VAR_7 = VAR_3 << (VAR_5 * 4);
 if (VAR_4->have_complementary_output)
  VAR_7 |= VAR_2 << (VAR_5 * 4);

 FUNC_0(VAR_4->regmap, VAR_1, VAR_7,
      VAR_6 == VAR_0 ? 0 : VAR_7);

 return 0;
}
