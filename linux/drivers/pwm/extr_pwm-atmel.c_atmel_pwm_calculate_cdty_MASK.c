
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_state {unsigned long long duty_cycle; int period; } ;


 int FUNC_0 (unsigned long long,int ) ;

__attribute__((used)) static void FUNC_1(const struct pwm_state *VAR_0,
         unsigned long VAR_1, unsigned long *VAR_2)
{
 unsigned long long VAR_3 = VAR_0->duty_cycle;

 VAR_3 *= VAR_1;
 FUNC_0(VAR_3, VAR_0->period);
 *VAR_2 = VAR_1 - VAR_3;
}
