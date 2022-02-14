
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ti_tscadc_dev {int adc_waiting; int adc_in_use; int regmap; int reg_se_wait; int reg_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_8(struct ti_tscadc_dev *VAR_5)
{
 FUNC_0(VAR_4);
 u32 VAR_6;

 FUNC_4(VAR_5->regmap, VAR_1, &VAR_6);
 if (VAR_6 & VAR_2) {
  VAR_5->adc_waiting = 1;
  FUNC_3(&VAR_5->reg_se_wait, &VAR_4,
    VAR_3);
  FUNC_7(&VAR_5->reg_lock);

  FUNC_5();

  FUNC_6(&VAR_5->reg_lock);
  FUNC_2(&VAR_5->reg_se_wait, &VAR_4);





  FUNC_4(VAR_5->regmap, VAR_1, &VAR_6);
  FUNC_1((VAR_6 & VAR_2) && !(VAR_6 & VAR_0));
  VAR_5->adc_waiting = 0;
 }
 VAR_5->adc_in_use = 1;
}
