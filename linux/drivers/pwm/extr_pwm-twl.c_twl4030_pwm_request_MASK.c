
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
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct twl_pwm_chip* FUNC_3 (struct pwm_chip*) ;
 int FUNC_4 (int ,int*,int ) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct pwm_chip *VAR_6, struct pwm_device *VAR_7)
{
 struct twl_pwm_chip *VAR_8 = FUNC_3(VAR_6);
 int VAR_9;
 u8 VAR_10, VAR_11, VAR_12;

 if (VAR_7->hwpwm == 1) {
  VAR_11 = VAR_2;
  VAR_12 = VAR_3;
 } else {
  VAR_11 = VAR_0;
  VAR_12 = VAR_1;
 }

 FUNC_1(&VAR_8->mutex);
 VAR_9 = FUNC_4(VAR_4, &VAR_10, VAR_5);
 if (VAR_9 < 0) {
  FUNC_0(VAR_6->dev, "%s: Failed to read PMBR1\n", VAR_7->label);
  goto out;
 }


 VAR_8->twl4030_pwm_mux &= ~VAR_11;
 VAR_8->twl4030_pwm_mux |= (VAR_10 & VAR_11);


 VAR_10 &= ~VAR_11;
 VAR_10 |= VAR_12;

 VAR_9 = FUNC_5(VAR_4, VAR_10, VAR_5);
 if (VAR_9 < 0)
  FUNC_0(VAR_6->dev, "%s: Failed to request PWM\n", VAR_7->label);

out:
 FUNC_2(&VAR_8->mutex);
 return VAR_9;
}
