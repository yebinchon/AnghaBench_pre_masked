
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_tscadc_dev {int reg_lock; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (struct ti_tscadc_dev*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct ti_tscadc_dev *VAR_1, u32 VAR_2)
{
 FUNC_2(&VAR_1->reg_lock);
 FUNC_0(VAR_1);

 FUNC_1(VAR_1->regmap, VAR_0, VAR_2);
 FUNC_3(&VAR_1->reg_lock);
}
