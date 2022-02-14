
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_pwm_compat_data {int max_pwm_cnt; unsigned int max_prescale; } ;
struct sti_pwm_chip {int dev; int pwm_clk; struct sti_pwm_compat_data* cdata; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct sti_pwm_chip *VAR_2, unsigned long VAR_3,
    unsigned int *VAR_4)
{
 struct sti_pwm_compat_data *VAR_5 = VAR_2->cdata;
 unsigned long VAR_6;
 unsigned long VAR_7;
 unsigned int VAR_8;

 VAR_6 = FUNC_0(VAR_2->pwm_clk);
 if (!VAR_6) {
  FUNC_1(VAR_2->dev, "failed to get clock rate\n");
  return -VAR_0;
 }




 VAR_7 = VAR_1 / VAR_6;
 VAR_7 *= VAR_5->max_pwm_cnt + 1;

 if (VAR_3 % VAR_7)
  return -VAR_0;

 VAR_8 = VAR_3 / VAR_7 - 1;
 if (VAR_8 > VAR_5->max_prescale)
  return -VAR_0;

 *VAR_4 = VAR_8;

 return 0;
}
