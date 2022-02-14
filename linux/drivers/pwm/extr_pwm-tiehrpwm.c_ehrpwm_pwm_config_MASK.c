
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct pwm_device {unsigned int hwpwm; } ;
struct pwm_chip {int dev; } ;
struct ehrpwm_pwm_chip {unsigned long long clk_rate; int* period_cycles; int mmio_base; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (unsigned long long,int) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,unsigned int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int,int*,int*) ;
 struct ehrpwm_pwm_chip* FUNC_7 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_8(struct pwm_chip *VAR_14, struct pwm_device *VAR_15,
        int VAR_16, int VAR_17)
{
 struct ehrpwm_pwm_chip *VAR_18 = FUNC_7(VAR_14);
 u32 VAR_19, VAR_20;
 u16 VAR_21, VAR_22;
 unsigned int VAR_23, VAR_24;
 unsigned long long VAR_25;

 if (VAR_17 > VAR_4)
  return -VAR_3;

 VAR_25 = VAR_18->clk_rate;
 VAR_25 = VAR_25 * VAR_17;
 FUNC_1(VAR_25, VAR_4);
 VAR_19 = (unsigned long)VAR_25;

 if (VAR_19 < 1) {
  VAR_19 = 1;
  VAR_20 = 1;
 } else {
  VAR_25 = VAR_18->clk_rate;
  VAR_25 = VAR_25 * VAR_16;
  FUNC_1(VAR_25, VAR_4);
  VAR_20 = (unsigned long)VAR_25;
 }





 for (VAR_23 = 0; VAR_23 < VAR_5; VAR_23++) {
  if (VAR_18->period_cycles[VAR_23] &&
    (VAR_18->period_cycles[VAR_23] != VAR_19)) {




   if (VAR_23 == VAR_15->hwpwm)
    continue;

   FUNC_0(VAR_14->dev,
    "period value conflicts with channel %u\n",
    VAR_23);
   return -VAR_2;
  }
 }

 VAR_18->period_cycles[VAR_15->hwpwm] = VAR_19;


 if (FUNC_6(VAR_19/VAR_6, &VAR_21,
        &VAR_22)) {
  FUNC_0(VAR_14->dev, "Unsupported values\n");
  return -VAR_2;
 }

 FUNC_4(VAR_14->dev);


 FUNC_2(VAR_18->mmio_base, VAR_7, VAR_8, VAR_22);


 VAR_19 = VAR_19 / VAR_21;
 VAR_20 = VAR_20 / VAR_21;


 FUNC_2(VAR_18->mmio_base, VAR_7, VAR_11, VAR_12);

 FUNC_3(VAR_18->mmio_base, VAR_13, VAR_19);


 FUNC_2(VAR_18->mmio_base, VAR_7, VAR_9,
        VAR_10);

 if (VAR_15->hwpwm == 1)

  VAR_24 = VAR_1;
 else

  VAR_24 = VAR_0;

 FUNC_3(VAR_18->mmio_base, VAR_24, VAR_20);

 FUNC_5(VAR_14->dev);

 return 0;
}
