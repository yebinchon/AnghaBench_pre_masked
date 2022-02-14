
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stmpe_pwm {int stmpe; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 struct stmpe_pwm* FUNC_4 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_5(struct pwm_chip *VAR_1, struct pwm_device *VAR_2)
{
 struct stmpe_pwm *VAR_3 = FUNC_4(VAR_1);
 u8 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3->stmpe, VAR_0);
 if (VAR_5 < 0) {
  FUNC_1(VAR_1->dev, "error reading PWM#%u control\n",
   VAR_2->hwpwm);
  return VAR_5;
 }

 VAR_4 = VAR_5 | FUNC_0(VAR_2->hwpwm);

 VAR_5 = FUNC_3(VAR_3->stmpe, VAR_0, VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_1->dev, "error writing PWM#%u control\n",
   VAR_2->hwpwm);
  return VAR_5;
 }

 return 0;
}
