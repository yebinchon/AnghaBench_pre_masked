
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dev; } ;
struct img_pwm_chip {int min_period_ns; int max_period_ns; int pwm_clk; TYPE_1__* data; } ;
struct TYPE_2__ {unsigned int max_timebase; } ;


 void* FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct img_pwm_chip*,int ) ;
 int FUNC_6 (struct img_pwm_chip*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct img_pwm_chip* FUNC_10 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_11(struct pwm_chip *VAR_11, struct pwm_device *VAR_12,
     int VAR_13, int VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17, VAR_18;
 unsigned long VAR_19, VAR_20, VAR_21;
 struct img_pwm_chip *VAR_22 = FUNC_10(VAR_11);
 unsigned int VAR_23 = VAR_22->data->max_timebase;
 int VAR_24;

 if (VAR_14 < VAR_22->min_period_ns ||
     VAR_14 > VAR_22->max_period_ns) {
  FUNC_4(VAR_11->dev, "configured period not in range\n");
  return -VAR_1;
 }

 VAR_21 = FUNC_3(VAR_22->pwm_clk);
 VAR_20 = FUNC_0(VAR_2, VAR_14);

 VAR_19 = FUNC_0(VAR_21, VAR_20);
 if (VAR_19 <= VAR_23) {
  VAR_16 = VAR_7;
  VAR_18 = FUNC_0(VAR_19, 1);
 } else if (VAR_19 <= VAR_23 * 8) {
  VAR_16 = VAR_8;
  VAR_18 = FUNC_0(VAR_19, 8);
 } else if (VAR_19 <= VAR_23 * 64) {
  VAR_16 = VAR_10;
  VAR_18 = FUNC_0(VAR_19, 64);
 } else if (VAR_19 <= VAR_23 * 512) {
  VAR_16 = VAR_9;
  VAR_18 = FUNC_0(VAR_19, 512);
 } else {
  FUNC_4(VAR_11->dev,
   "failed to configure timebase steps/divider value\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_0(VAR_18 * VAR_13, VAR_14);

 VAR_24 = FUNC_7(VAR_11->dev);
 if (VAR_24 < 0)
  return VAR_24;

 VAR_15 = FUNC_5(VAR_22, VAR_5);
 VAR_15 &= ~(VAR_6 << FUNC_2(VAR_12->hwpwm));
 VAR_15 |= (VAR_16 & VAR_6) <<
  FUNC_2(VAR_12->hwpwm);
 FUNC_6(VAR_22, VAR_5, VAR_15);

 VAR_15 = (VAR_17 << VAR_3) |
       (VAR_18 << VAR_4);
 FUNC_6(VAR_22, FUNC_1(VAR_12->hwpwm), VAR_15);

 FUNC_8(VAR_11->dev);
 FUNC_9(VAR_11->dev);

 return 0;
}
