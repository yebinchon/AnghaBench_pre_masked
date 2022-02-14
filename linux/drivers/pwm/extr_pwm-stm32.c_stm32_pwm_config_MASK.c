
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct stm32_pwm {unsigned long long max_arr; int regmap; int clk; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct stm32_pwm*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (unsigned long long,int) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_5 (int ,int ,unsigned long long) ;
 int FUNC_6 (struct stm32_pwm*,int,unsigned long long) ;

__attribute__((used)) static int FUNC_7(struct stm32_pwm *VAR_17, int VAR_18,
       int VAR_19, int VAR_20)
{
 unsigned long long VAR_21, VAR_22, VAR_23;
 unsigned int VAR_24 = 0;
 u32 VAR_25, VAR_26, VAR_27;


 VAR_22 = (unsigned long long)FUNC_1(VAR_17->clk) * VAR_20;

 FUNC_2(VAR_22, VAR_5);
 VAR_21 = VAR_22;

 while (VAR_22 > VAR_17->max_arr) {
  VAR_24++;
  VAR_22 = VAR_21;
  FUNC_2(VAR_22, VAR_24 + 1);
 }

 VAR_21 = VAR_22;

 if (VAR_24 > VAR_4)
  return -VAR_3;





 if (FUNC_0(VAR_17) & ~(1 << VAR_18 * 4)) {
  u32 VAR_28, VAR_29;

  FUNC_3(VAR_17->regmap, VAR_16, &VAR_28);
  FUNC_3(VAR_17->regmap, VAR_6, &VAR_29);

  if ((VAR_28 != VAR_24) || (VAR_29 != VAR_21 - 1))
   return -VAR_2;
 }

 FUNC_5(VAR_17->regmap, VAR_16, VAR_24);
 FUNC_5(VAR_17->regmap, VAR_6, VAR_21 - 1);
 FUNC_4(VAR_17->regmap, VAR_14, VAR_15, VAR_15);


 VAR_23 = VAR_21 * VAR_19;
 FUNC_2(VAR_23, VAR_20);

 FUNC_6(VAR_17, VAR_18, VAR_23);


 VAR_27 = (VAR_18 & 0x1) * VAR_1;
 VAR_25 = (VAR_13 | VAR_12) << VAR_27;
 VAR_26 = VAR_0 << VAR_27;

 if (VAR_18 < 2)
  FUNC_4(VAR_17->regmap, VAR_10, VAR_26, VAR_25);
 else
  FUNC_4(VAR_17->regmap, VAR_11, VAR_26, VAR_25);

 FUNC_4(VAR_17->regmap, VAR_7,
      VAR_9 | VAR_8,
      VAR_9 | VAR_8);

 return 0;
}
