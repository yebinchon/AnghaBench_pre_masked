
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct vt8500_chip {int clk; scalar_t__ base; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dev; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 unsigned long long FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (unsigned long long,int) ;
 int FUNC_9 (struct vt8500_chip*,int ,int ) ;
 unsigned long FUNC_10 (scalar_t__) ;
 struct vt8500_chip* FUNC_11 (struct pwm_chip*) ;
 int FUNC_12 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct pwm_chip *VAR_6, struct pwm_device *VAR_7,
  int VAR_8, int VAR_9)
{
 struct vt8500_chip *VAR_10 = FUNC_11(VAR_6);
 unsigned long long VAR_11;
 unsigned long VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16;
 u32 VAR_17;

 VAR_16 = FUNC_5(VAR_10->clk);
 if (VAR_16 < 0) {
  FUNC_7(VAR_6->dev, "failed to enable clock\n");
  return VAR_16;
 }

 VAR_11 = FUNC_6(VAR_10->clk);
 VAR_11 = VAR_11 * VAR_9;
 FUNC_8(VAR_11, 1000000000);
 VAR_12 = VAR_11;

 if (VAR_12 < 1)
  VAR_12 = 1;
 VAR_13 = (VAR_12 - 1) / 4096;
 VAR_14 = VAR_12 / (VAR_13 + 1) - 1;
 if (VAR_14 > 4095)
  VAR_14 = 4095;

 if (VAR_13 > 1023) {
  FUNC_4(VAR_10->clk);
  return -VAR_1;
 }

 VAR_11 = (unsigned long long)VAR_14 * VAR_8;
 FUNC_8(VAR_11, VAR_9);
 VAR_15 = VAR_11;

 FUNC_12(VAR_13, VAR_10->base + FUNC_3(VAR_7->hwpwm));
 FUNC_9(VAR_10, VAR_7->hwpwm, VAR_5);

 FUNC_12(VAR_14, VAR_10->base + FUNC_2(VAR_7->hwpwm));
 FUNC_9(VAR_10, VAR_7->hwpwm, VAR_4);

 FUNC_12(VAR_15, VAR_10->base + FUNC_1(VAR_7->hwpwm));
 FUNC_9(VAR_10, VAR_7->hwpwm, VAR_3);

 VAR_17 = FUNC_10(VAR_10->base + FUNC_0(VAR_7->hwpwm));
 VAR_17 |= VAR_0;
 FUNC_12(VAR_17, VAR_10->base + FUNC_0(VAR_7->hwpwm));
 FUNC_9(VAR_10, VAR_7->hwpwm, VAR_2);

 FUNC_4(VAR_10->clk);
 return 0;
}
