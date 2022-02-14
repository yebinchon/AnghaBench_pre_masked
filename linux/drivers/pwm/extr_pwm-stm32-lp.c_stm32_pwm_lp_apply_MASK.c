
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct stm32_pwm_lp {int clk; int regmap; TYPE_1__ chip; } ;
struct pwm_state {unsigned long long period; unsigned long long duty_cycle; int polarity; scalar_t__ enabled; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long long VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned long long VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,unsigned long long) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (unsigned long long,unsigned long long) ;
 int FUNC_8 (struct pwm_device*,struct pwm_state*) ;
 int FUNC_9 (int ,int ,int*) ;
 int FUNC_10 (int ,int ,int,int,int,int) ;
 int FUNC_11 (int ,int ,int,int) ;
 int FUNC_12 (int ,int ,unsigned long long) ;
 struct stm32_pwm_lp* FUNC_13 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_14(struct pwm_chip *VAR_16, struct pwm_device *VAR_17,
         const struct pwm_state *VAR_18)
{
 struct stm32_pwm_lp *VAR_19 = FUNC_13(VAR_16);
 unsigned long long VAR_20, VAR_21, VAR_22;
 struct pwm_state VAR_23;
 u32 VAR_24, VAR_25, VAR_26, VAR_27 = 0;
 bool VAR_28;
 int VAR_29;

 FUNC_8(VAR_17, &VAR_23);
 VAR_28 = !VAR_23.enabled;

 if (!VAR_18->enabled) {
  if (VAR_23.enabled) {

   VAR_29 = FUNC_12(VAR_19->regmap, VAR_8, 0);
   if (VAR_29)
    return VAR_29;

   FUNC_2(VAR_19->clk);
  }
  return 0;
 }


 VAR_21 = (unsigned long long)FUNC_4(VAR_19->clk) * VAR_18->period;
 FUNC_7(VAR_21, VAR_1);
 if (!VAR_21) {

  FUNC_5(VAR_19->chip.dev, "Can't reach %u ns\n", VAR_18->period);
  return -VAR_0;
 }

 VAR_20 = VAR_21;
 while (VAR_21 > VAR_12) {
  VAR_27++;
  if ((1 << VAR_27) > VAR_13) {
   FUNC_6(VAR_19->chip.dev, "max prescaler exceeded\n");
   return -VAR_0;
  }
  VAR_21 = VAR_20 >> VAR_27;
 }
 VAR_20 = VAR_21;


 VAR_22 = VAR_20 * VAR_18->duty_cycle;
 FUNC_7(VAR_22, VAR_18->period);

 if (!VAR_23.enabled) {

  VAR_29 = FUNC_3(VAR_19->clk);
  if (VAR_29)
   return VAR_29;
 }

 VAR_29 = FUNC_9(VAR_19->regmap, VAR_3, &VAR_26);
 if (VAR_29)
  goto err;

 if ((FUNC_0(VAR_14, VAR_26) != VAR_27) ||
     (FUNC_0(VAR_15, VAR_26) != VAR_18->polarity)) {
  VAR_24 = FUNC_1(VAR_14, VAR_27);
  VAR_24 |= FUNC_1(VAR_15, VAR_18->polarity);
  VAR_25 = VAR_14 | VAR_15;


  VAR_28 = 1;
  VAR_29 = FUNC_12(VAR_19->regmap, VAR_8, 0);
  if (VAR_29)
   goto err;

  VAR_29 = FUNC_11(VAR_19->regmap, VAR_3, VAR_25,
      VAR_24);
  if (VAR_29)
   goto err;
 }

 if (VAR_28) {

  VAR_29 = FUNC_12(VAR_19->regmap, VAR_8,
       VAR_9);
  if (VAR_29)
   goto err;
 }

 VAR_29 = FUNC_12(VAR_19->regmap, VAR_2, VAR_20 - 1);
 if (VAR_29)
  goto err;

 VAR_29 = FUNC_12(VAR_19->regmap, VAR_4, VAR_20 - (1 + VAR_22));
 if (VAR_29)
  goto err;


 VAR_29 = FUNC_10(VAR_19->regmap, VAR_11, VAR_24,
           (VAR_24 & VAR_6),
           100, 1000);
 if (VAR_29) {
  FUNC_6(VAR_19->chip.dev, "ARR/CMP registers write issue\n");
  goto err;
 }
 VAR_29 = FUNC_12(VAR_19->regmap, VAR_10,
      VAR_5);
 if (VAR_29)
  goto err;

 if (VAR_28) {

  VAR_29 = FUNC_11(VAR_19->regmap, VAR_8,
      VAR_7,
      VAR_7);
  if (VAR_29) {
   FUNC_12(VAR_19->regmap, VAR_8, 0);
   goto err;
  }
 }

 return 0;
err:
 if (!VAR_23.enabled)
  FUNC_2(VAR_19->clk);

 return VAR_29;
}
