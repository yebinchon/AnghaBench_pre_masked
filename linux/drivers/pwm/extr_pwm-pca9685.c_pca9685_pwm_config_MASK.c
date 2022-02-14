
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {scalar_t__ hwpwm; } ;
struct pwm_chip {int dev; } ;
struct pca9685 {int period_ns; int duty_ns; int regmap; } ;


 int FUNC_0 (int,int) ;
 unsigned long long FUNC_1 (unsigned long long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_2 (scalar_t__) ;
 unsigned int FUNC_3 (scalar_t__) ;
 unsigned int FUNC_4 (scalar_t__) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (struct pca9685*,int) ;
 int FUNC_7 (int ,unsigned int,int) ;
 struct pca9685* FUNC_8 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_9(struct pwm_chip *VAR_11, struct pwm_device *VAR_12,
         int VAR_13, int VAR_14)
{
 struct pca9685 *VAR_15 = FUNC_8(VAR_11);
 unsigned long long VAR_16;
 unsigned int VAR_17;
 int VAR_18;

 if (VAR_14 != VAR_15->period_ns) {
  VAR_18 = FUNC_0(VAR_7 * VAR_14,
          VAR_5 * 1000) - 1;

  if (VAR_18 >= VAR_10 &&
   VAR_18 <= VAR_9) {







   FUNC_6(VAR_15, 1);


   FUNC_7(VAR_15->regmap, VAR_8, VAR_18);


   FUNC_6(VAR_15, 0);

   VAR_15->period_ns = VAR_14;
  } else {
   FUNC_5(VAR_11->dev,
    "prescaler not set: period out of bounds!\n");
   return -VAR_0;
  }
 }

 VAR_15->duty_ns = VAR_13;

 if (VAR_13 < 1) {
  if (VAR_12->hwpwm >= VAR_6)
   VAR_17 = VAR_2;
  else
   VAR_17 = FUNC_2(VAR_12->hwpwm);

  FUNC_7(VAR_15->regmap, VAR_17, VAR_1);

  return 0;
 }

 if (VAR_13 == VAR_14) {

  if (VAR_12->hwpwm >= VAR_6)
   VAR_17 = VAR_3;
  else
   VAR_17 = FUNC_3(VAR_12->hwpwm);

  FUNC_7(VAR_15->regmap, VAR_17, 0x0);

  if (VAR_12->hwpwm >= VAR_6)
   VAR_17 = VAR_2;
  else
   VAR_17 = FUNC_2(VAR_12->hwpwm);

  FUNC_7(VAR_15->regmap, VAR_17, 0x0);


  if (VAR_12->hwpwm >= VAR_6)
   VAR_17 = VAR_4;
  else
   VAR_17 = FUNC_4(VAR_12->hwpwm);

  FUNC_7(VAR_15->regmap, VAR_17, VAR_1);

  return 0;
 }

 VAR_16 = VAR_5 * (unsigned long long)VAR_13;
 VAR_16 = FUNC_1(VAR_16, VAR_14);

 if (VAR_12->hwpwm >= VAR_6)
  VAR_17 = VAR_3;
 else
  VAR_17 = FUNC_3(VAR_12->hwpwm);

 FUNC_7(VAR_15->regmap, VAR_17, (int)VAR_16 & 0xff);

 if (VAR_12->hwpwm >= VAR_6)
  VAR_17 = VAR_2;
 else
  VAR_17 = FUNC_2(VAR_12->hwpwm);

 FUNC_7(VAR_15->regmap, VAR_17, ((int)VAR_16 >> 8) & 0xf);


 if (VAR_12->hwpwm >= VAR_6)
  VAR_17 = VAR_4;
 else
  VAR_17 = FUNC_4(VAR_12->hwpwm);

 FUNC_7(VAR_15->regmap, VAR_17, 0);

 return 0;
}
