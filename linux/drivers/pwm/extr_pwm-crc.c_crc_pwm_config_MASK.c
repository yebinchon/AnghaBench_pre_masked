
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;
struct crystalcove_pwm {int regmap; TYPE_1__ chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct pwm_chip*,struct pwm_device*) ;
 int FUNC_1 (struct pwm_chip*,struct pwm_device*) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct pwm_device*) ;
 int FUNC_4 (int ,int ,int) ;
 struct crystalcove_pwm* FUNC_5 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_6(struct pwm_chip *VAR_8, struct pwm_device *VAR_9,
     int VAR_10, int VAR_11)
{
 struct crystalcove_pwm *VAR_12 = FUNC_5(VAR_8);
 struct device *VAR_13 = VAR_12->chip.dev;
 int VAR_14;

 if (VAR_11 > VAR_6) {
  FUNC_2(VAR_13, "un-supported period_ns\n");
  return -VAR_0;
 }

 if (FUNC_3(VAR_9) != VAR_11) {
  int VAR_15;


  FUNC_0(VAR_8, VAR_9);
  VAR_15 = VAR_4 * VAR_11 / VAR_1;

  FUNC_4(VAR_12->regmap, VAR_2,
     VAR_15 | VAR_7);


  FUNC_1(VAR_8, VAR_9);
 }


 VAR_14 = VAR_10 * VAR_5 / VAR_11;
 FUNC_4(VAR_12->regmap, VAR_3, VAR_14);

 return 0;
}
