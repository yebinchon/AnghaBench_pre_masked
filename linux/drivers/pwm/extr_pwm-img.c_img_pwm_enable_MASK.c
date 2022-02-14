
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dev; } ;
struct img_pwm_chip {int periph_regs; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct img_pwm_chip*,int ) ;
 int FUNC_3 (struct img_pwm_chip*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,int ) ;
 struct img_pwm_chip* FUNC_6 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_7(struct pwm_chip *VAR_3, struct pwm_device *VAR_4)
{
 u32 VAR_5;
 struct img_pwm_chip *VAR_6 = FUNC_6(VAR_3);
 int VAR_7;

 VAR_7 = FUNC_4(VAR_3->dev);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_5 = FUNC_2(VAR_6, VAR_2);
 VAR_5 |= FUNC_0(VAR_4->hwpwm);
 FUNC_3(VAR_6, VAR_2, VAR_5);

 FUNC_5(VAR_6->periph_regs, VAR_0,
      VAR_1 <<
      FUNC_1(VAR_4->hwpwm), 0);

 return 0;
}
