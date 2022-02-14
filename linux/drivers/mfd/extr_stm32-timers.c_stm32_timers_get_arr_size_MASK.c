
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_timers {int regmap; int max_arr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct stm32_timers *VAR_1)
{




 FUNC_1(VAR_1->regmap, VAR_0, ~0L);
 FUNC_0(VAR_1->regmap, VAR_0, &VAR_1->max_arr);
 FUNC_1(VAR_1->regmap, VAR_0, 0x0);
}
