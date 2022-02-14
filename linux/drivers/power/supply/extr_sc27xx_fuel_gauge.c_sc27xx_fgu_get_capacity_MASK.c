
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_fgu_data {int init_clbcnt; int total_cap; int init_cap; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct sc27xx_fgu_data*,int) ;
 int FUNC_2 (struct sc27xx_fgu_data*,int,int) ;
 int FUNC_3 (struct sc27xx_fgu_data*,int*) ;

__attribute__((used)) static int FUNC_4(struct sc27xx_fgu_data *VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;


 VAR_3 = FUNC_3(VAR_1, &VAR_4);
 if (VAR_3)
  return VAR_3;

 VAR_5 = VAR_4 - VAR_1->init_clbcnt;





 VAR_7 = FUNC_0(VAR_5 * 10, 36 * VAR_0);
 VAR_7 = FUNC_1(VAR_1, VAR_7 / 1000);





 VAR_6 = FUNC_0(VAR_7 * 100, VAR_1->total_cap);
 *VAR_2 = VAR_6 + VAR_1->init_cap;


 FUNC_2(VAR_1, *VAR_2, 0);

 return 0;
}
