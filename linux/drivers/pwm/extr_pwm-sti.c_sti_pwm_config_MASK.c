
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_pwm_compat_data {int max_pwm_cnt; } ;
struct sti_pwm_chip {int cpt_clk; int pwm_clk; struct pwm_device* cur; int configured; int pwm_cpt_int_en; int regmap; int prescale_high; int prescale_low; struct device* dev; struct sti_pwm_compat_data* cdata; } ;
struct pwm_device {scalar_t__ hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,unsigned int,int,int,unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (struct pwm_device*) ;
 int FUNC_6 (int ,unsigned int) ;
 int FUNC_7 (int ,int ,unsigned int) ;
 int FUNC_8 (scalar_t__,int *) ;
 int FUNC_9 (struct sti_pwm_chip*,int,unsigned int*) ;
 struct sti_pwm_chip* FUNC_10 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_11(struct pwm_chip *VAR_3, struct pwm_device *VAR_4,
     int VAR_5, int VAR_6)
{
 struct sti_pwm_chip *VAR_7 = FUNC_10(VAR_3);
 struct sti_pwm_compat_data *VAR_8 = VAR_7->cdata;
 unsigned int VAR_9, VAR_10, VAR_11 = 0;
 struct pwm_device *VAR_12 = VAR_7->cur;
 struct device *VAR_13 = VAR_7->dev;
 bool VAR_14 = 0;
 int VAR_15;

 VAR_9 = FUNC_4(VAR_7->configured);
 if (VAR_9)
  VAR_14 = (VAR_6 == FUNC_5(VAR_12));
 if (!VAR_9 ||
     ((VAR_9 == 1) && (VAR_4->hwpwm == VAR_12->hwpwm)) ||
     ((VAR_9 == 1) && (VAR_4->hwpwm != VAR_12->hwpwm) && VAR_14) ||
     ((VAR_9 > 1) && VAR_14)) {

  VAR_15 = FUNC_2(VAR_7->pwm_clk);
  if (VAR_15)
   return VAR_15;

  VAR_15 = FUNC_2(VAR_7->cpt_clk);
  if (VAR_15)
   return VAR_15;

  if (!VAR_14) {
   VAR_15 = FUNC_9(VAR_7, VAR_6, &VAR_11);
   if (VAR_15)
    goto clk_dis;

   VAR_10 = VAR_11 & VAR_2;

   VAR_15 = FUNC_6(VAR_7->prescale_low, VAR_10);
   if (VAR_15)
    goto clk_dis;

   VAR_10 = (VAR_11 & VAR_1) >> 4;

   VAR_15 = FUNC_6(VAR_7->prescale_high, VAR_10);
   if (VAR_15)
    goto clk_dis;
  }







  VAR_10 = VAR_8->max_pwm_cnt * VAR_5 / VAR_6;

  VAR_15 = FUNC_7(VAR_7->regmap, FUNC_0(VAR_4->hwpwm), VAR_10);
  if (VAR_15)
   goto clk_dis;

  VAR_15 = FUNC_6(VAR_7->pwm_cpt_int_en, 0);

  FUNC_8(VAR_4->hwpwm, &VAR_7->configured);
  VAR_7->cur = VAR_4;

  FUNC_3(VAR_13, "prescale:%u, period:%i, duty:%i, value:%u\n",
   VAR_11, VAR_6, VAR_5, VAR_10);
 } else {
  return -VAR_0;
 }

clk_dis:
 FUNC_1(VAR_7->pwm_clk);
 FUNC_1(VAR_7->cpt_clk);
 return VAR_15;
}
