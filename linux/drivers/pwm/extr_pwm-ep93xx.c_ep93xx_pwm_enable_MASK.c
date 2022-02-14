
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct ep93xx_pwm {scalar_t__ base; int clk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 struct ep93xx_pwm* FUNC_1 (struct pwm_chip*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct pwm_chip *VAR_1, struct pwm_device *VAR_2)
{
 struct ep93xx_pwm *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->clk);
 if (VAR_4)
  return VAR_4;

 FUNC_2(0x1, VAR_3->base + VAR_0);

 return 0;
}
