
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_fgu_data {scalar_t__ base; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,scalar_t__,int*) ;

__attribute__((used)) static bool FUNC_1(struct sc27xx_fgu_data *VAR_6)
{
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_7 = FUNC_0(VAR_6->regmap,
     VAR_6->base + VAR_5, &VAR_8);
 if (VAR_7)
  return 0;





 VAR_10 = (VAR_8 & VAR_3) >> VAR_4;
 VAR_9 = VAR_8 & VAR_0;






 if (VAR_10 == VAR_2 || VAR_9 == VAR_1)
  return 1;

 return 0;
}
