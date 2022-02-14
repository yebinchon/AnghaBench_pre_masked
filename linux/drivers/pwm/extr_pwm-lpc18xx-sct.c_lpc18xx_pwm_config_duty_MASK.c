
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct lpc18xx_pwm_data {int duty_event; } ;
struct lpc18xx_pwm_chip {int clk_rate; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct lpc18xx_pwm_chip*,int ,int ) ;
 struct lpc18xx_pwm_data* FUNC_4 (struct pwm_device*) ;
 struct lpc18xx_pwm_chip* FUNC_5 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_6(struct pwm_chip *VAR_1,
        struct pwm_device *VAR_2, int VAR_3)
{
 struct lpc18xx_pwm_chip *VAR_4 = FUNC_5(VAR_1);
 struct lpc18xx_pwm_data *VAR_5 = FUNC_4(VAR_2);
 u64 VAR_6;

 VAR_6 = (u64)VAR_3 * VAR_4->clk_rate;
 FUNC_2(VAR_6, VAR_0);

 FUNC_3(VAR_4,
      FUNC_0(VAR_5->duty_event),
      (u32)VAR_6);

 FUNC_3(VAR_4,
      FUNC_1(VAR_5->duty_event),
      (u32)VAR_6);
}
