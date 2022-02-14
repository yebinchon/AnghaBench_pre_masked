
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct ep93xx_pwm {int clk; scalar_t__ base; } ;
typedef enum pwm_polarity { ____Placeholder_pwm_polarity } pwm_polarity ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ep93xx_pwm* FUNC_2 (struct pwm_chip*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct pwm_chip *VAR_2, struct pwm_device *VAR_3,
          enum pwm_polarity VAR_4)
{
 struct ep93xx_pwm *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;





 VAR_6 = FUNC_1(VAR_5->clk);
 if (VAR_6)
  return VAR_6;

 if (VAR_4 == VAR_1)
  FUNC_3(0x1, VAR_5->base + VAR_0);
 else
  FUNC_3(0x0, VAR_5->base + VAR_0);

 FUNC_0(VAR_5->clk);

 return 0;
}
