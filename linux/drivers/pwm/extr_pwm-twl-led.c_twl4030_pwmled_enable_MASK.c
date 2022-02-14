
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl_pwmled_chip {int mutex; } ;
struct pwm_device {int label; int hwpwm; } ;
struct pwm_chip {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct twl_pwmled_chip* FUNC_4 (struct pwm_chip*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct pwm_chip *VAR_3, struct pwm_device *VAR_4)
{
 struct twl_pwmled_chip *VAR_5 = FUNC_4(VAR_3);
 int VAR_6;
 u8 VAR_7;

 FUNC_2(&VAR_5->mutex);
 VAR_6 = FUNC_5(VAR_2, &VAR_7, VAR_0);
 if (VAR_6 < 0) {
  FUNC_1(VAR_3->dev, "%s: Failed to read LEDEN\n", VAR_4->label);
  goto out;
 }

 VAR_7 |= FUNC_0(VAR_4->hwpwm, VAR_1);

 VAR_6 = FUNC_6(VAR_2, VAR_7, VAR_0);
 if (VAR_6 < 0)
  FUNC_1(VAR_3->dev, "%s: Failed to enable PWM\n", VAR_4->label);

out:
 FUNC_3(&VAR_5->mutex);
 return VAR_6;
}
