
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct pwm_chip {int dummy; } ;
struct lpc18xx_pwm_chip {int clk_rate; int period_event; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct lpc18xx_pwm_chip*,int ,scalar_t__) ;
 struct lpc18xx_pwm_chip* FUNC_4 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_5(struct pwm_chip *VAR_1, int VAR_2)
{
 struct lpc18xx_pwm_chip *VAR_3 = FUNC_4(VAR_1);
 u64 VAR_4;

 VAR_4 = (u64)VAR_2 * VAR_3->clk_rate;
 FUNC_2(VAR_4, VAR_0);

 FUNC_3(VAR_3,
      FUNC_0(VAR_3->period_event),
      (u32)VAR_4 - 1);

 FUNC_3(VAR_3,
      FUNC_1(VAR_3->period_event),
      (u32)VAR_4 - 1);
}
