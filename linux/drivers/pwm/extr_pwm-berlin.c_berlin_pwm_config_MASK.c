
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct berlin_pwm_chip {int clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct berlin_pwm_chip*,int ,int ) ;
 int FUNC_1 (struct berlin_pwm_chip*,int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;
 struct berlin_pwm_chip* FUNC_4 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_5(struct pwm_chip *VAR_7, struct pwm_device *VAR_8,
        int VAR_9, int VAR_10)
{
 struct berlin_pwm_chip *VAR_11 = FUNC_4(VAR_7);
 bool VAR_12 = 0;
 u32 VAR_13, VAR_14, VAR_15;
 u64 VAR_16;

 VAR_16 = FUNC_2(VAR_11->clk);
 VAR_16 *= VAR_10;
 FUNC_3(VAR_16, VAR_6);

 if (VAR_16 > VAR_2) {
  VAR_12 = 1;
  VAR_16 >>= 12;

  if (VAR_16 > VAR_2)
   return -VAR_5;
 }

 VAR_15 = VAR_16;
 VAR_16 *= VAR_9;
 FUNC_3(VAR_16, VAR_10);
 VAR_14 = VAR_16;

 VAR_13 = FUNC_0(VAR_11, VAR_8->hwpwm, VAR_0);
 if (VAR_12)
  VAR_13 |= VAR_3;
 else
  VAR_13 &= ~VAR_3;
 FUNC_1(VAR_11, VAR_8->hwpwm, VAR_13, VAR_0);

 FUNC_1(VAR_11, VAR_8->hwpwm, VAR_14, VAR_1);
 FUNC_1(VAR_11, VAR_8->hwpwm, VAR_15, VAR_4);

 return 0;
}
