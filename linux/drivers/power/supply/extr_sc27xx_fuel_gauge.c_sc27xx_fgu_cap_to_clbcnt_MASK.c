
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc27xx_fgu_data {int total_cap; int cur_1000ma_adc; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct sc27xx_fgu_data *VAR_1, int VAR_2)
{




 int VAR_3 = FUNC_0(VAR_1->total_cap * VAR_2, 100);





 return FUNC_0(VAR_3 * 36 * VAR_1->cur_1000ma_adc * VAR_0, 10);
}
