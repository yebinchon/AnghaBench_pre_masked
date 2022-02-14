
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct bcm2835_pwm {scalar_t__ base; int dev; int clk; } ;


 unsigned long FUNC_0 (int,unsigned long) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 struct bcm2835_pwm* FUNC_5 (struct pwm_chip*) ;
 int FUNC_6 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct pwm_chip *VAR_3, struct pwm_device *VAR_4,
         int VAR_5, int VAR_6)
{
 struct bcm2835_pwm *VAR_7 = FUNC_5(VAR_3);
 unsigned long VAR_8 = FUNC_3(VAR_7->clk);
 unsigned long VAR_9;
 u32 VAR_10;

 if (!VAR_8) {
  FUNC_4(VAR_7->dev, "failed to get clock rate\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_0(VAR_1, VAR_8);
 VAR_10 = FUNC_0(VAR_6, VAR_9);

 if (VAR_10 < VAR_2)
  return -VAR_0;

 FUNC_6(FUNC_0(VAR_5, VAR_9),
        VAR_7->base + FUNC_1(VAR_4->hwpwm));
 FUNC_6(VAR_10, VAR_7->base + FUNC_2(VAR_4->hwpwm));

 return 0;
}
