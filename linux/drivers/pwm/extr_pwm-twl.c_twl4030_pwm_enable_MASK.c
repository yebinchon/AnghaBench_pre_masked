
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl_pwm_chip {int mutex; } ;
struct pwm_device {int label; int hwpwm; } ;
struct pwm_chip {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct twl_pwm_chip* FUNC_4 (struct pwm_chip*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct pwm_chip *VAR_4, struct pwm_device *VAR_5)
{
 struct twl_pwm_chip *VAR_6 = FUNC_4(VAR_4);
 int VAR_7;
 u8 VAR_8;

 FUNC_2(&VAR_6->mutex);
 VAR_7 = FUNC_5(VAR_1, &VAR_8, VAR_0);
 if (VAR_7 < 0) {
  FUNC_1(VAR_4->dev, "%s: Failed to read GPBR1\n", VAR_5->label);
  goto out;
 }

 VAR_8 |= FUNC_0(VAR_5->hwpwm, VAR_2);

 VAR_7 = FUNC_6(VAR_1, VAR_8, VAR_0);
 if (VAR_7 < 0)
  FUNC_1(VAR_4->dev, "%s: Failed to enable PWM\n", VAR_5->label);

 VAR_8 |= FUNC_0(VAR_5->hwpwm, VAR_3);

 VAR_7 = FUNC_6(VAR_1, VAR_8, VAR_0);
 if (VAR_7 < 0)
  FUNC_1(VAR_4->dev, "%s: Failed to enable PWM\n", VAR_5->label);

out:
 FUNC_3(&VAR_6->mutex);
 return VAR_7;
}
