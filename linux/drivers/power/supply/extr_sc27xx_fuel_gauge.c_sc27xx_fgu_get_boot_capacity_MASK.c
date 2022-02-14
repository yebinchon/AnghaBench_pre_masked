
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_fgu_data {int internal_resist; int table_len; int cap_table; scalar_t__ base; int regmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,scalar_t__,int*) ;
 int FUNC_2 (struct sc27xx_fgu_data*,scalar_t__) ;
 int FUNC_3 (struct sc27xx_fgu_data*,int) ;
 int FUNC_4 (struct sc27xx_fgu_data*) ;
 int FUNC_5 (struct sc27xx_fgu_data*,int*) ;
 int FUNC_6 (struct sc27xx_fgu_data*,int ) ;
 int FUNC_7 (struct sc27xx_fgu_data*,int) ;

__attribute__((used)) static int FUNC_8(struct sc27xx_fgu_data *VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 bool VAR_11 = FUNC_4(VAR_4);






 if (!VAR_11) {
  VAR_10 = FUNC_5(VAR_4, VAR_5);
  if (VAR_10)
   return VAR_10;

  return FUNC_6(VAR_4, VAR_2);
 }





 VAR_10 = FUNC_1(VAR_4->regmap, VAR_4->base + VAR_0,
     &VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_7 <<= 1;
 VAR_8 = FUNC_2(VAR_4, VAR_7 - VAR_1);






 VAR_10 = FUNC_1(VAR_4->regmap, VAR_4->base + VAR_3, &VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_6 = FUNC_3(VAR_4, VAR_6);
 VAR_9 = VAR_6 * 1000 - VAR_8 * VAR_4->internal_resist;





 *VAR_5 = FUNC_0(VAR_4->cap_table, VAR_4->table_len,
        VAR_9);

 VAR_10 = FUNC_7(VAR_4, *VAR_5);
 if (VAR_10)
  return VAR_10;

 return FUNC_6(VAR_4, VAR_2);
}
