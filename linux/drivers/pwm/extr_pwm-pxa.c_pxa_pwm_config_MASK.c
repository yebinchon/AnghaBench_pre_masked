
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_pwm_chip {int clk; scalar_t__ mmio_base; } ;
struct pwm_device {scalar_t__ hwpwm; } ;
struct pwm_chip {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 unsigned long long FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long long,int) ;
 struct pxa_pwm_chip* FUNC_4 (struct pwm_chip*) ;
 int FUNC_5 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct pwm_chip *VAR_5, struct pwm_device *VAR_6,
     int VAR_7, int VAR_8)
{
 struct pxa_pwm_chip *VAR_9 = FUNC_4(VAR_5);
 unsigned long long VAR_10;
 unsigned long VAR_11, VAR_12, VAR_13, VAR_14;
 unsigned long VAR_15;
 int VAR_16;

 VAR_15 = VAR_6->hwpwm ? 0x10 : 0;

 VAR_10 = FUNC_1(VAR_9->clk);
 VAR_10 = VAR_10 * VAR_8;
 FUNC_3(VAR_10, 1000000000);
 VAR_11 = VAR_10;

 if (VAR_11 < 1)
  VAR_11 = 1;
 VAR_12 = (VAR_11 - 1) / 1024;
 VAR_13 = VAR_11 / (VAR_12 + 1) - 1;

 if (VAR_12 > 63)
  return -VAR_0;

 if (VAR_7 == VAR_8)
  VAR_14 = VAR_3;
 else
  VAR_14 = (VAR_13 + 1) * VAR_7 / VAR_8;




 VAR_16 = FUNC_2(VAR_9->clk);
 if (VAR_16 < 0)
  return VAR_16;

 FUNC_5(VAR_12, VAR_9->mmio_base + VAR_15 + VAR_1);
 FUNC_5(VAR_14, VAR_9->mmio_base + VAR_15 + VAR_2);
 FUNC_5(VAR_13, VAR_9->mmio_base + VAR_15 + VAR_4);

 FUNC_0(VAR_9->clk);
 return 0;
}
