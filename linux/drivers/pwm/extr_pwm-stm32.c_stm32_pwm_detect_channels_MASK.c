
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
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct stm32_pwm *VAR_6)
{
 u32 VAR_7;
 int VAR_8 = 0;





 FUNC_1(VAR_6->regmap,
      VAR_0, VAR_5, VAR_5);
 FUNC_0(VAR_6->regmap, VAR_0, &VAR_7);
 FUNC_1(VAR_6->regmap, VAR_0, VAR_5, 0);

 if (VAR_7 & VAR_1)
  VAR_8++;

 if (VAR_7 & VAR_2)
  VAR_8++;

 if (VAR_7 & VAR_3)
  VAR_8++;

 if (VAR_7 & VAR_4)
  VAR_8++;

 return VAR_8;
}
