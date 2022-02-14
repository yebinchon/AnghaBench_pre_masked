
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pwm_device {int hwpwm; int label; } ;
struct pwm_chip {int dev; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ,int*,int,int) ;

__attribute__((used)) static int FUNC_3(struct pwm_chip *VAR_2, struct pwm_device *VAR_3,
         int VAR_4, int VAR_5)
{
 int VAR_6 = FUNC_0(VAR_4 * VAR_1, VAR_5) + 1;
 u8 VAR_7[2] = { 1, 0 };
 int VAR_8, VAR_9;
 if (VAR_6 == 1)
  VAR_6 = 2;
 else if (VAR_6 > VAR_1)
  VAR_6 = 1;

 VAR_8 = VAR_3->hwpwm * 3;

 VAR_7[1] = VAR_6;

 VAR_9 = FUNC_2(VAR_0, VAR_7, VAR_8, 2);
 if (VAR_9 < 0)
  FUNC_1(VAR_2->dev, "%s: Failed to configure PWM\n", VAR_3->label);

 return VAR_9;
}
