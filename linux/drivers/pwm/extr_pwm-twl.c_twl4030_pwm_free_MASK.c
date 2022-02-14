
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct twl_pwm_chip {int twl4030_pwm_mux; int mutex; } ;
struct pwm_device {int hwpwm; int label; } ;
struct pwm_chip {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct twl_pwm_chip* FUNC_3 (struct pwm_chip*) ;
 int FUNC_4 (int ,int*,int ) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static void FUNC_6(struct pwm_chip *VAR_4, struct pwm_device *VAR_5)
{
 struct twl_pwm_chip *VAR_6 = FUNC_3(VAR_4);
 int VAR_7;
 u8 VAR_8, VAR_9;

 if (VAR_5->hwpwm == 1)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_0;

 FUNC_1(&VAR_6->mutex);
 VAR_7 = FUNC_4(VAR_2, &VAR_8, VAR_3);
 if (VAR_7 < 0) {
  FUNC_0(VAR_4->dev, "%s: Failed to read PMBR1\n", VAR_5->label);
  goto out;
 }


 VAR_8 &= ~VAR_9;
 VAR_8 |= (VAR_6->twl4030_pwm_mux & VAR_9);

 VAR_7 = FUNC_5(VAR_2, VAR_8, VAR_3);
 if (VAR_7 < 0)
  FUNC_0(VAR_4->dev, "%s: Failed to free PWM\n", VAR_5->label);

out:
 FUNC_2(&VAR_6->mutex);
}
