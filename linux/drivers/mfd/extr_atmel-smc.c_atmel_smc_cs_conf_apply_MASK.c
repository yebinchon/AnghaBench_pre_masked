
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct atmel_smc_cs_conf {int mode; int cycle; int pulse; int setup; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct regmap*,int ,int ) ;

void FUNC_5(struct regmap *VAR_0, int VAR_1,
        const struct atmel_smc_cs_conf *VAR_2)
{
 FUNC_4(VAR_0, FUNC_3(VAR_1), VAR_2->setup);
 FUNC_4(VAR_0, FUNC_2(VAR_1), VAR_2->pulse);
 FUNC_4(VAR_0, FUNC_0(VAR_1), VAR_2->cycle);
 FUNC_4(VAR_0, FUNC_1(VAR_1), VAR_2->mode);
}
