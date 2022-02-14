
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct ecap_pwm_chip {unsigned long long clk_rate; TYPE_1__ chip; scalar_t__ mmio_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned long long,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pwm_device*) ;
 int FUNC_4 (scalar_t__) ;
 struct ecap_pwm_chip* FUNC_5 (struct pwm_chip*) ;
 int FUNC_6 (int,scalar_t__) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct pwm_chip *VAR_9, struct pwm_device *VAR_10,
  int VAR_11, int VAR_12)
{
 struct ecap_pwm_chip *VAR_13 = FUNC_5(VAR_9);
 u32 VAR_14, VAR_15;
 unsigned long long VAR_16;
 u16 VAR_17;

 if (VAR_12 > VAR_8)
  return -VAR_7;

 VAR_16 = VAR_13->clk_rate;
 VAR_16 = VAR_16 * VAR_12;
 FUNC_0(VAR_16, VAR_8);
 VAR_14 = (u32)VAR_16;

 if (VAR_14 < 1) {
  VAR_14 = 1;
  VAR_15 = 1;
 } else {
  VAR_16 = VAR_13->clk_rate;
  VAR_16 = VAR_16 * VAR_11;
  FUNC_0(VAR_16, VAR_8);
  VAR_15 = (u32)VAR_16;
 }

 FUNC_1(VAR_13->chip.dev);

 VAR_17 = FUNC_4(VAR_13->mmio_base + VAR_4);


 VAR_17 |= VAR_5 | VAR_6;

 FUNC_7(VAR_17, VAR_13->mmio_base + VAR_4);

 if (!FUNC_3(VAR_10)) {

  FUNC_6(VAR_15, VAR_13->mmio_base + VAR_1);
  FUNC_6(VAR_14, VAR_13->mmio_base + VAR_0);
 } else {





  FUNC_6(VAR_15, VAR_13->mmio_base + VAR_3);
  FUNC_6(VAR_14, VAR_13->mmio_base + VAR_2);
 }

 if (!FUNC_3(VAR_10)) {
  VAR_17 = FUNC_4(VAR_13->mmio_base + VAR_4);

  VAR_17 &= ~VAR_5;
  FUNC_7(VAR_17, VAR_13->mmio_base + VAR_4);
 }

 FUNC_2(VAR_13->chip.dev);

 return 0;
}
