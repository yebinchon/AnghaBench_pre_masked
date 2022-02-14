
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct pwm_chip *VAR_1, struct pwm_device *VAR_2)
{
 uint32_t VAR_3 = FUNC_1(VAR_2->hwpwm);





 FUNC_3(VAR_2->hwpwm, 0xffff);
 FUNC_4(VAR_2->hwpwm, 0x0);






 VAR_3 &= ~VAR_0;
 FUNC_2(VAR_2->hwpwm, VAR_3);


 FUNC_0(VAR_2->hwpwm);
}
