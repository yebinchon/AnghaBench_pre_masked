
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_pwm_compat_data {scalar_t__ cpt_num_devs; } ;
struct sti_pwm_chip {int pwm_cpt_en; int cpt_clk; int regmap; int pwm_cpt_int_en; struct device* dev; struct sti_pwm_compat_data* cdata; } ;
struct sti_cpt_ddata {int index; unsigned long long* snapshot; int lock; int wait; } ;
struct pwm_device {scalar_t__ hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct pwm_capture {unsigned long long period; unsigned long long duty_cycle; } ;
struct device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long long VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct sti_cpt_ddata* FUNC_7 (struct pwm_device*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ,int ) ;
 struct sti_pwm_chip* FUNC_10 (struct pwm_chip*) ;
 int FUNC_11 (int ,int,int ) ;

__attribute__((used)) static int FUNC_12(struct pwm_chip *VAR_5, struct pwm_device *VAR_6,
      struct pwm_capture *VAR_7, unsigned long VAR_8)
{
 struct sti_pwm_chip *VAR_9 = FUNC_10(VAR_5);
 struct sti_pwm_compat_data *VAR_10 = VAR_9->cdata;
 struct sti_cpt_ddata *VAR_11 = FUNC_7(VAR_6);
 struct device *VAR_12 = VAR_9->dev;
 unsigned int VAR_13;
 unsigned long long VAR_14, VAR_15;
 int VAR_16;

 if (VAR_6->hwpwm >= VAR_10->cpt_num_devs) {
  FUNC_3(VAR_12, "device %u is not valid\n", VAR_6->hwpwm);
  return -VAR_2;
 }

 FUNC_5(&VAR_11->lock);
 VAR_11->index = 0;


 FUNC_9(VAR_9->regmap, FUNC_1(VAR_6->hwpwm), VAR_1);
 FUNC_8(VAR_9->pwm_cpt_int_en, FUNC_0(VAR_6->hwpwm));


 VAR_16 = FUNC_8(VAR_9->pwm_cpt_en, 1);
 if (VAR_16) {
  FUNC_3(VAR_12, "failed to enable PWM capture %u: %d\n",
   VAR_6->hwpwm, VAR_16);
  goto out;
 }

 VAR_16 = FUNC_11(VAR_11->wait, VAR_11->index > 1,
            FUNC_4(VAR_8));

 FUNC_9(VAR_9->regmap, FUNC_1(VAR_6->hwpwm), VAR_0);

 if (VAR_16 == -VAR_3)
  goto out;

 switch (VAR_11->index) {
 case 0:
 case 1:







  VAR_7->period = 0;
  VAR_7->duty_cycle = 0;

  break;

 case 2:

  VAR_14 = VAR_11->snapshot[1] - VAR_11->snapshot[0];
  VAR_15 = VAR_11->snapshot[2] - VAR_11->snapshot[1];

  VAR_13 = FUNC_2(VAR_9->cpt_clk);

  VAR_7->period = (VAR_14 + VAR_15) * VAR_4;
  VAR_7->period /= VAR_13;

  VAR_7->duty_cycle = VAR_14 * VAR_4;
  VAR_7->duty_cycle /= VAR_13;

  break;

 default:
  FUNC_3(VAR_12, "internal error\n");
  break;
 }

out:

 FUNC_8(VAR_9->pwm_cpt_en, 0);

 FUNC_6(&VAR_11->lock);
 return VAR_16;
}
