
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct berlin_pwm_channel {int dummy; } ;


 int FUNC_0 (struct berlin_pwm_channel*) ;
 struct berlin_pwm_channel* FUNC_1 (struct pwm_device*) ;

__attribute__((used)) static void FUNC_2(struct pwm_chip *VAR_0, struct pwm_device *VAR_1)
{
 struct berlin_pwm_channel *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_2);
}
