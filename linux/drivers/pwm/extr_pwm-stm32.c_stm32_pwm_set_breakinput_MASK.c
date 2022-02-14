
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct stm32_pwm *VAR_11,
        int VAR_12, int VAR_13, int VAR_14)
{
 u32 VAR_15 = (VAR_12 == 0) ? VAR_6 : VAR_2;
 int VAR_16 = (VAR_12 == 0) ? VAR_9 : VAR_4;
 u32 VAR_17 = (VAR_12 == 0) ? VAR_6 | VAR_10 | VAR_7
    : VAR_2 | VAR_5 | VAR_3;
 u32 VAR_18 = VAR_15;





 if (VAR_13)
  VAR_18 |= VAR_10 | VAR_5;

 VAR_18 |= (VAR_14 & VAR_8) << VAR_16;

 FUNC_1(VAR_11->regmap, VAR_1, VAR_17, VAR_18);

 FUNC_0(VAR_11->regmap, VAR_1, &VAR_18);

 return (VAR_18 & VAR_15) ? 0 : -VAR_0;
}
