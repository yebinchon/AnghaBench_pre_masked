
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_mediatek_chip {int regs; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pwm_chip*,struct pwm_device*) ;
 int FUNC_2 (int ) ;
 struct pwm_mediatek_chip* FUNC_3 (struct pwm_chip*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct pwm_chip *VAR_0, struct pwm_device *VAR_1)
{
 struct pwm_mediatek_chip *VAR_2 = FUNC_3(VAR_0);
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 = FUNC_2(VAR_2->regs);
 VAR_3 |= FUNC_0(VAR_1->hwpwm);
 FUNC_4(VAR_3, VAR_2->regs);

 return 0;
}
