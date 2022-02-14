
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct atmel_smc_cs_conf {int mode; int timings; int cycle; int pulse; int setup; } ;
struct atmel_hsmc_reg_layout {int dummy; } ;


 int FUNC_0 (struct atmel_hsmc_reg_layout const*,int) ;
 int FUNC_1 (struct atmel_hsmc_reg_layout const*,int) ;
 int FUNC_2 (struct atmel_hsmc_reg_layout const*,int) ;
 int FUNC_3 (struct atmel_hsmc_reg_layout const*,int) ;
 int FUNC_4 (struct atmel_hsmc_reg_layout const*,int) ;
 int FUNC_5 (struct regmap*,int ,int *) ;

void FUNC_6(struct regmap *VAR_0,
       const struct atmel_hsmc_reg_layout *VAR_1,
       int VAR_2, struct atmel_smc_cs_conf *VAR_3)
{
 FUNC_5(VAR_0, FUNC_3(VAR_1, VAR_2), &VAR_3->setup);
 FUNC_5(VAR_0, FUNC_2(VAR_1, VAR_2), &VAR_3->pulse);
 FUNC_5(VAR_0, FUNC_0(VAR_1, VAR_2), &VAR_3->cycle);
 FUNC_5(VAR_0, FUNC_4(VAR_1, VAR_2), &VAR_3->timings);
 FUNC_5(VAR_0, FUNC_1(VAR_1, VAR_2), &VAR_3->mode);
}
