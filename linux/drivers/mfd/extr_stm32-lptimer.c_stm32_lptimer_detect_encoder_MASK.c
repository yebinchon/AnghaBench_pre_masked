
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_lptimer {int has_encoder; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct stm32_lptimer *VAR_2)
{
 u32 VAR_3;
 int VAR_4;





 VAR_4 = FUNC_1(VAR_2->regmap, VAR_0,
     VAR_1, VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_2->regmap, VAR_0, &VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_2->regmap, VAR_0,
     VAR_1, 0);
 if (VAR_4)
  return VAR_4;

 VAR_2->has_encoder = !!(VAR_3 & VAR_1);

 return 0;
}
