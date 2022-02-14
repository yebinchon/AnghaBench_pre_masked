
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct pwm_state {int enabled; void* duty_cycle; void* period; int polarity; } ;
struct pwm_imx27_chip {scalar_t__ mmio_base; int clk_per; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dev; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_2 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct pwm_chip*) ;
 int FUNC_6 (struct pwm_chip*) ;
 int FUNC_7 (scalar_t__) ;
 struct pwm_imx27_chip* FUNC_8 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_9(struct pwm_chip *VAR_9,
    struct pwm_device *VAR_10, struct pwm_state *VAR_11)
{
 struct pwm_imx27_chip *VAR_12 = FUNC_8(VAR_9);
 u32 VAR_13, VAR_14, VAR_15, VAR_16;
 u64 VAR_17;
 int VAR_18;

 VAR_18 = FUNC_6(VAR_9);
 if (VAR_18 < 0)
  return;

 VAR_16 = FUNC_7(VAR_12->mmio_base + VAR_0);

 if (VAR_16 & VAR_1)
  VAR_11->enabled = 1;
 else
  VAR_11->enabled = 0;

 switch (FUNC_1(VAR_2, VAR_16)) {
 case 128:
  VAR_11->polarity = VAR_8;
  break;
 case 129:
  VAR_11->polarity = VAR_7;
  break;
 default:
  FUNC_4(VAR_9->dev, "can't set polarity, output disconnected");
 }

 VAR_14 = FUNC_2(VAR_16);
 VAR_15 = FUNC_3(VAR_12->clk_per);
 VAR_15 = FUNC_0(VAR_15, VAR_14);
 VAR_16 = FUNC_7(VAR_12->mmio_base + VAR_3);
 VAR_13 = VAR_16 >= VAR_4 ? VAR_4 : VAR_16;


 VAR_17 = VAR_6 * (u64)(VAR_13 + 2);
 VAR_11->period = FUNC_0(VAR_17, VAR_15);


 if (VAR_11->enabled) {
  VAR_16 = FUNC_7(VAR_12->mmio_base + VAR_5);
  VAR_17 = VAR_6 * (u64)(VAR_16);
  VAR_11->duty_cycle = FUNC_0(VAR_17, VAR_15);
 } else {
  VAR_11->duty_cycle = 0;
 }

 if (!VAR_11->enabled)
  FUNC_5(VAR_9);
}
