
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_fgu_data {int max_volt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sc27xx_fgu_data*,int*) ;

__attribute__((used)) static int FUNC_1(struct sc27xx_fgu_data *VAR_2, int *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_2, &VAR_5);
 if (VAR_4)
  return VAR_4;

 if (VAR_5 > VAR_2->max_volt)
  *VAR_3 = VAR_1;
 else
  *VAR_3 = VAR_0;

 return 0;
}
