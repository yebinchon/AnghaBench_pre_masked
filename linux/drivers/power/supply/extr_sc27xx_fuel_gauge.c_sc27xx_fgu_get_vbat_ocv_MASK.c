
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_fgu_data {int internal_resist; } ;


 int FUNC_0 (struct sc27xx_fgu_data*,int*) ;
 int FUNC_1 (struct sc27xx_fgu_data*,int*) ;

__attribute__((used)) static int FUNC_2(struct sc27xx_fgu_data *VAR_0, int *VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 VAR_4 = FUNC_1(VAR_0, &VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_0, &VAR_3);
 if (VAR_4)
  return VAR_4;


 *VAR_1 = VAR_2 * 1000 - VAR_3 * VAR_0->internal_resist;

 return 0;
}
