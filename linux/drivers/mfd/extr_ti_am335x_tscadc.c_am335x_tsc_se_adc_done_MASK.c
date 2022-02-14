
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_tscadc_dev {int adc_in_use; int reg_lock; int reg_se_cache; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct ti_tscadc_dev *VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_1->reg_lock, VAR_2);
 VAR_1->adc_in_use = 0;
 FUNC_0(VAR_1->regmap, VAR_0, VAR_1->reg_se_cache);
 FUNC_2(&VAR_1->reg_lock, VAR_2);
}
