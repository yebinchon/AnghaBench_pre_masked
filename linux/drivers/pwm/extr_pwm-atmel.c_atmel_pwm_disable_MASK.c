
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct atmel_pwm_chip {int updated_pwms; int clk; int isr_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct atmel_pwm_chip*,int ) ;
 int FUNC_1 (struct atmel_pwm_chip*,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int,unsigned long) ;
 struct atmel_pwm_chip* FUNC_6 (struct pwm_chip*) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static void FUNC_8(struct pwm_chip *VAR_5, struct pwm_device *VAR_6,
         bool VAR_7)
{
 struct atmel_pwm_chip *VAR_8 = FUNC_6(VAR_5);
 unsigned long VAR_9 = VAR_4 + 2 * VAR_0;





 FUNC_3(&VAR_8->isr_lock);
 VAR_8->updated_pwms |= FUNC_0(VAR_8, VAR_2);

 while (!(VAR_8->updated_pwms & (1 << VAR_6->hwpwm)) &&
        FUNC_5(VAR_4, VAR_9)) {
  FUNC_7(10, 100);
  VAR_8->updated_pwms |= FUNC_0(VAR_8, VAR_2);
 }

 FUNC_4(&VAR_8->isr_lock);
 FUNC_1(VAR_8, VAR_1, 1 << VAR_6->hwpwm);





 VAR_9 = VAR_4 + 2 * VAR_0;

 while ((FUNC_0(VAR_8, VAR_3) & (1 << VAR_6->hwpwm)) &&
        FUNC_5(VAR_4, VAR_9))
  FUNC_7(10, 100);

 if (VAR_7)
  FUNC_2(VAR_8->clk);
}
