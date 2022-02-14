
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct pwm_state {unsigned long long period; unsigned long long duty_cycle; int polarity; scalar_t__ enabled; } ;
struct pwm_device {int hwpwm; int chip; } ;
struct pwm_chip {int dummy; } ;
struct jz4740_pwm_chip {int clk; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (unsigned long long,int) ;
 int FUNC_3 (struct pwm_chip*,struct pwm_device*) ;
 int FUNC_4 (struct pwm_chip*,struct pwm_device*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (int ,unsigned long) ;
 struct jz4740_pwm_chip* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct pwm_chip *VAR_4, struct pwm_device *VAR_5,
       const struct pwm_state *VAR_6)
{
 struct jz4740_pwm_chip *VAR_7 = FUNC_9(VAR_5->chip);
 unsigned long long VAR_8;
 unsigned long VAR_9, VAR_10;
 unsigned int VAR_11 = 0;
 uint16_t VAR_12;

 VAR_8 = (unsigned long long)FUNC_1(VAR_7->clk) * VAR_6->period;
 FUNC_2(VAR_8, 1000000000);
 VAR_9 = VAR_8;

 while (VAR_9 > 0xffff && VAR_11 < 6) {
  VAR_9 >>= 2;
  ++VAR_11;
 }

 if (VAR_11 == 6)
  return -VAR_0;

 VAR_8 = (unsigned long long)VAR_9 * VAR_6->duty_cycle;
 FUNC_2(VAR_8, VAR_6->period);
 VAR_10 = VAR_9 - VAR_8;

 if (VAR_10 >= VAR_9)
  VAR_10 = VAR_9 - 1;

 FUNC_3(VAR_4, VAR_5);

 FUNC_5(VAR_5->hwpwm, 0);
 FUNC_7(VAR_5->hwpwm, VAR_10);
 FUNC_8(VAR_5->hwpwm, VAR_9);

 VAR_12 = FUNC_0(VAR_11) | VAR_3 |
  VAR_1;

 FUNC_6(VAR_5->hwpwm, VAR_12);

 switch (VAR_6->polarity) {
 case 128:
  VAR_12 &= ~VAR_2;
  break;
 case 129:
  VAR_12 |= VAR_2;
  break;
 }

 FUNC_6(VAR_5->hwpwm, VAR_12);

 if (VAR_6->enabled)
  FUNC_4(VAR_4, VAR_5);

 return 0;
}
