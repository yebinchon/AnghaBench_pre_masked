
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct hibvt_pwm_chip {int base; int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,int ,int ,int) ;
 struct hibvt_pwm_chip* FUNC_5 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_6(struct pwm_chip *VAR_2, struct pwm_device *VAR_3,
     int VAR_4, int VAR_5)
{
 struct hibvt_pwm_chip *VAR_6 = FUNC_5(VAR_2);
 u32 VAR_7, VAR_8, VAR_9;

 VAR_7 = FUNC_3(FUNC_2(VAR_6->clk), 1000000);

 VAR_8 = FUNC_3(VAR_7 * VAR_5, 1000);
 VAR_9 = FUNC_3(VAR_8 * VAR_4, VAR_5);

 FUNC_4(VAR_6->base, FUNC_0(VAR_3->hwpwm),
   VAR_1, VAR_8);

 FUNC_4(VAR_6->base, FUNC_1(VAR_3->hwpwm),
   VAR_0, VAR_9);
}
