
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_fgu_data {scalar_t__ base; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_1(struct sc27xx_fgu_data *VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_8 = FUNC_0(VAR_4->regmap, VAR_4->base + VAR_3,
     &VAR_6);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_4->regmap, VAR_4->base + VAR_2,
     &VAR_7);
 if (VAR_8)
  return VAR_8;

 *VAR_5 = VAR_6 & VAR_0;
 *VAR_5 |= (VAR_7 & VAR_0) << VAR_1;

 return 0;
}
