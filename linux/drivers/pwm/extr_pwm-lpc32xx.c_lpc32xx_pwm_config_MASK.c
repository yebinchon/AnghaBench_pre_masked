
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct lpc32xx_pwm_chip {scalar_t__ base; int clk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long long,int) ;
 int FUNC_2 (scalar_t__) ;
 struct lpc32xx_pwm_chip* FUNC_3 (struct pwm_chip*) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct pwm_chip *VAR_2, struct pwm_device *VAR_3,
         int VAR_4, int VAR_5)
{
 struct lpc32xx_pwm_chip *VAR_6 = FUNC_3(VAR_2);
 unsigned long long VAR_7;
 int VAR_8, VAR_9;
 u32 VAR_10;
 VAR_7 = FUNC_0(VAR_6->clk);


 VAR_8 = FUNC_1(VAR_7 * VAR_5,
          (unsigned long long)VAR_1 * 256);
 if (!VAR_8 || VAR_8 > 256)
  return -VAR_0;
 if (VAR_8 == 256)
  VAR_8 = 0;


 VAR_9 = FUNC_1((unsigned long long)(VAR_5 - VAR_4) * 256,
    VAR_5);
 if (!VAR_9)
  VAR_9 = 1;
 if (VAR_9 > 255)
  VAR_9 = 255;

 VAR_10 = FUNC_2(VAR_6->base + (VAR_3->hwpwm << 2));
 VAR_10 &= ~0xFFFF;
 VAR_10 |= (VAR_8 << 8) | VAR_9;
 FUNC_4(VAR_10, VAR_6->base + (VAR_3->hwpwm << 2));

 return 0;
}
