
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct stm32_pwm {unsigned long long max_arr; int lock; int clk; int regmap; TYPE_1__ chip; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct pwm_capture {void* duty_cycle; void* period; } ;


 void* FUNC_0 (unsigned long long,unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,unsigned int) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_2 (struct stm32_pwm*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 unsigned long FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (unsigned long long,unsigned long) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int ,int,int) ;
 int FUNC_12 (int ,int ,unsigned int) ;
 int FUNC_13 (struct stm32_pwm*,struct pwm_device*,unsigned long,int*,int*) ;
 struct stm32_pwm* FUNC_14 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_15(struct pwm_chip *VAR_24, struct pwm_device *VAR_25,
        struct pwm_capture *VAR_26, unsigned long VAR_27)
{
 struct stm32_pwm *VAR_28 = FUNC_14(VAR_24);
 unsigned long long VAR_29, VAR_30, VAR_31;
 unsigned long VAR_32;
 unsigned int VAR_33 = 0, VAR_34, VAR_35;
 u32 VAR_36 = 0, VAR_37 = 0;
 int VAR_38 = 0;

 FUNC_9(&VAR_28->lock);

 if (FUNC_2(VAR_28)) {
  VAR_38 = -VAR_0;
  goto unlock;
 }

 VAR_38 = FUNC_4(VAR_28->clk);
 if (VAR_38) {
  FUNC_6(VAR_28->chip.dev, "failed to enable counter clock\n");
  goto unlock;
 }

 VAR_32 = FUNC_5(VAR_28->clk);
 if (!VAR_32) {
  VAR_38 = -VAR_1;
  goto clk_dis;
 }


 VAR_30 = (unsigned long long)VAR_32 * (unsigned long long)VAR_27;
 FUNC_7(VAR_30, VAR_4);
 VAR_29 = VAR_30;
 while ((VAR_30 > VAR_28->max_arr) && (VAR_33 < VAR_3)) {
  VAR_33++;
  VAR_30 = VAR_29;
  FUNC_7(VAR_30, VAR_33 + 1);
 }
 FUNC_12(VAR_28->regmap, VAR_7, VAR_28->max_arr);
 FUNC_12(VAR_28->regmap, VAR_23, VAR_33);


 FUNC_11(VAR_28->regmap,
      VAR_25->hwpwm < 2 ? VAR_13 : VAR_14,
      VAR_15 | VAR_18, VAR_25->hwpwm & 0x1 ?
      VAR_17 | VAR_20 :
      VAR_16 | VAR_19);


 FUNC_11(VAR_28->regmap, VAR_8, VAR_25->hwpwm < 2 ?
      VAR_9 : VAR_11, VAR_25->hwpwm < 2 ?
      VAR_10 : VAR_12);

 VAR_38 = FUNC_13(VAR_28, VAR_25, VAR_27, &VAR_36, &VAR_37);
 if (VAR_38)
  goto stop;






 if (VAR_36) {
  u32 VAR_39 = VAR_28->max_arr - 0x1000;

  VAR_35 = VAR_39 / FUNC_8(VAR_39, VAR_36);
 } else {
  VAR_35 = VAR_28->max_arr;
 }

 if (VAR_33 && VAR_35 > 1) {

  VAR_33 /= VAR_35;
  FUNC_12(VAR_28->regmap, VAR_23, VAR_33);
  VAR_38 = FUNC_13(VAR_28, VAR_25, VAR_27, &VAR_36,
         &VAR_37);
  if (VAR_38)
   goto stop;
 }


 VAR_29 = (unsigned long long)VAR_36 * (VAR_33 + 1) * VAR_6;
 FUNC_7(VAR_29, VAR_32);

 for (VAR_34 = 0; VAR_34 < VAR_2 ; VAR_34++) {

  if (VAR_36 >= (VAR_28->max_arr - 0x1000) >> (VAR_34 + 1))
   break;
  if (VAR_29 >= (VAR_27 * VAR_5) >> (VAR_34 + 2))
   break;
 }

 if (!VAR_34)
  goto done;


 FUNC_11(VAR_28->regmap,
      VAR_25->hwpwm < 2 ? VAR_13 : VAR_14,
      VAR_21 | VAR_22,
      FUNC_1(VAR_21, VAR_34) |
      FUNC_1(VAR_22, VAR_34));

 VAR_38 = FUNC_13(VAR_28, VAR_25, VAR_27, &VAR_36, &VAR_37);
 if (VAR_38)
  goto stop;

 if (VAR_37 >= (VAR_36 >> VAR_34)) {
  VAR_37 = (VAR_36 >> VAR_34) - (VAR_36 - VAR_37);
 }

done:
 VAR_29 = (unsigned long long)VAR_36 * (VAR_33 + 1) * VAR_6;
 VAR_26->period = FUNC_0(VAR_29, VAR_32 << VAR_34);
 VAR_31 = (unsigned long long)VAR_37 * (VAR_33 + 1) * VAR_6;
 VAR_26->duty_cycle = FUNC_0(VAR_31, VAR_32);
stop:
 FUNC_12(VAR_28->regmap, VAR_8, 0);
 FUNC_12(VAR_28->regmap, VAR_25->hwpwm < 2 ? VAR_13 : VAR_14, 0);
 FUNC_12(VAR_28->regmap, VAR_23, 0);
clk_dis:
 FUNC_3(VAR_28->clk);
unlock:
 FUNC_10(&VAR_28->lock);

 return VAR_38;
}
