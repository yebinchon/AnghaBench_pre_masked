
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_fgu_data {scalar_t__ base; int regmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,int*) ;
 int FUNC_1 (struct sc27xx_fgu_data*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct sc27xx_fgu_data *VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_2->regmap, VAR_2->base + VAR_0, &VAR_5);
 if (VAR_4)
  return VAR_4;





 *VAR_3 = FUNC_1(VAR_2, VAR_5 - VAR_1);

 return 0;
}
