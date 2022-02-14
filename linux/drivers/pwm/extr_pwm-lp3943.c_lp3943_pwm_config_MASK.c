
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct pwm_device {scalar_t__ hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct lp3943_pwm {struct lp3943* lp3943; } ;
struct lp3943 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (struct lp3943*,scalar_t__,scalar_t__) ;
 struct lp3943_pwm* FUNC_2 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_3(struct pwm_chip *VAR_7, struct pwm_device *VAR_8,
        int VAR_9, int VAR_10)
{
 struct lp3943_pwm *VAR_11 = FUNC_2(VAR_7);
 struct lp3943 *VAR_12 = VAR_11->lp3943;
 u8 VAR_13, VAR_14, VAR_15;
 int VAR_16;
 if (VAR_8->hwpwm == 0) {
  VAR_15 = VAR_3;
  VAR_14 = VAR_5;
 } else {
  VAR_15 = VAR_4;
  VAR_14 = VAR_6;
 }

 VAR_10 = FUNC_0(VAR_10, VAR_2, VAR_1);
 VAR_13 = (u8)(VAR_10 / VAR_2 - 1);

 VAR_16 = FUNC_1(VAR_12, VAR_15, VAR_13);
 if (VAR_16)
  return VAR_16;

 VAR_13 = (u8)(VAR_9 * VAR_0 / VAR_10);

 return FUNC_1(VAR_12, VAR_14, VAR_13);
}
