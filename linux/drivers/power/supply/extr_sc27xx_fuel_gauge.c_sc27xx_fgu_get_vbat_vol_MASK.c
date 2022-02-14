
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_fgu_data {scalar_t__ base; int regmap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int*) ;
 int FUNC_1 (struct sc27xx_fgu_data*,int) ;

__attribute__((used)) static int FUNC_2(struct sc27xx_fgu_data *VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_1->regmap, VAR_1->base + VAR_0, &VAR_4);
 if (VAR_3)
  return VAR_3;





 *VAR_2 = FUNC_1(VAR_1, VAR_4);

 return 0;
}
