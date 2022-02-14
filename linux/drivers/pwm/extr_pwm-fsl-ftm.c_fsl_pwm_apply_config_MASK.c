
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct pwm_state {scalar_t__ polarity; int duty_cycle; int period; } ;
struct pwm_device {int hwpwm; } ;
struct fsl_pwm_periodcfg {scalar_t__ clk_select; unsigned int mod_period; scalar_t__ clk_ps; } ;
struct TYPE_2__ {int dev; } ;
struct fsl_pwm_chip {int regmap; struct fsl_pwm_periodcfg period; int * clk; TYPE_1__ chip; } ;
typedef enum fsl_pwm_clk { ____Placeholder_fsl_pwm_clk } fsl_pwm_clk ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;
 unsigned int FUNC_7 (struct fsl_pwm_chip*,int ) ;
 int FUNC_8 (struct fsl_pwm_chip*,int ,struct fsl_pwm_periodcfg*) ;
 int FUNC_9 (struct fsl_pwm_chip*,struct pwm_device*) ;
 scalar_t__ FUNC_10 (struct fsl_pwm_chip*,struct pwm_device*) ;
 int FUNC_11 (struct fsl_pwm_periodcfg*,struct fsl_pwm_periodcfg*) ;
 int FUNC_12 (struct fsl_pwm_chip*) ;
 int FUNC_13 (struct fsl_pwm_chip*) ;
 int FUNC_14 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_15 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_16(struct fsl_pwm_chip *VAR_10,
    struct pwm_device *VAR_11,
    const struct pwm_state *VAR_12)
{
 unsigned int VAR_13;
 u32 VAR_14;

 struct fsl_pwm_periodcfg VAR_15;
 bool VAR_16 = 0;

 if (!FUNC_8(VAR_10, VAR_12->period, &VAR_15)) {
  FUNC_6(VAR_10->chip.dev, "failed to calculate new period\n");
  return -VAR_1;
 }

 if (!FUNC_9(VAR_10, VAR_11))
  VAR_16 = 1;






 else if (!FUNC_11(&VAR_10->period, &VAR_15)) {
  if (FUNC_10(VAR_10, VAR_11)) {
   FUNC_6(VAR_10->chip.dev,
    "Cannot change period for PWM %u, disable other PWMs first\n",
    VAR_11->hwpwm);
   return -VAR_0;
  }
  if (VAR_10->period.clk_select != VAR_15.clk_select) {
   int VAR_17;
   enum fsl_pwm_clk VAR_18 = VAR_10->period.clk_select;
   enum fsl_pwm_clk VAR_19 = VAR_15.clk_select;

   VAR_17 = FUNC_5(VAR_10->clk[VAR_19]);
   if (VAR_17)
    return VAR_17;
   FUNC_4(VAR_10->clk[VAR_18]);
  }
  VAR_16 = 1;
 }

 FUNC_12(VAR_10);

 if (VAR_16) {
  FUNC_14(VAR_10->regmap, VAR_6, VAR_7,
       FUNC_3(VAR_15.clk_select));
  FUNC_14(VAR_10->regmap, VAR_6, VAR_8,
       VAR_15.clk_ps);
  FUNC_15(VAR_10->regmap, VAR_4, VAR_15.mod_period);

  VAR_10->period = VAR_15;
 }

 VAR_13 = FUNC_7(VAR_10, VAR_12->duty_cycle);

 FUNC_15(VAR_10->regmap, FUNC_1(VAR_11->hwpwm),
       VAR_3 | VAR_2);
 FUNC_15(VAR_10->regmap, FUNC_2(VAR_11->hwpwm), VAR_13);

 VAR_14 = 0;
 if (VAR_12->polarity == VAR_9)
  VAR_14 = FUNC_0(VAR_11->hwpwm);

 FUNC_14(VAR_10->regmap, VAR_5, FUNC_0(VAR_11->hwpwm), VAR_14);

 FUNC_13(VAR_10);

 return 0;
}
