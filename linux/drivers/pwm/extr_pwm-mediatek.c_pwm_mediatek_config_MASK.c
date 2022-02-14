
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct pwm_mediatek_chip {TYPE_1__* soc; int * clk_pwms; } ;
struct pwm_device {size_t hwpwm; } ;
struct pwm_chip {int dev; } ;
struct TYPE_2__ {scalar_t__ pwm45_fixup; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct pwm_chip*,struct pwm_device*) ;
 int FUNC_6 (struct pwm_chip*,struct pwm_device*) ;
 int FUNC_7 (struct pwm_mediatek_chip*,int,int,int) ;
 struct pwm_mediatek_chip* FUNC_8 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_9(struct pwm_chip *VAR_8, struct pwm_device *VAR_9,
          int VAR_10, int VAR_11)
{
 struct pwm_mediatek_chip *VAR_12 = FUNC_8(VAR_8);
 u32 VAR_13 = 0, VAR_14, VAR_15, VAR_16 = VAR_5,
     VAR_17 = VAR_6;
 u64 VAR_18;
 int VAR_19;

 VAR_19 = FUNC_6(VAR_8, VAR_9);

 if (VAR_19 < 0)
  return VAR_19;


 VAR_18 = (u64)VAR_1 * 1000;
 FUNC_4(VAR_18, FUNC_2(VAR_12->clk_pwms[VAR_9->hwpwm]));

 VAR_14 = FUNC_1((u64)VAR_11 * 1000, VAR_18);
 while (VAR_14 > 8191) {
  VAR_18 *= 2;
  VAR_13++;
  VAR_14 = FUNC_1((u64)VAR_11 * 1000,
         VAR_18);
 }

 if (VAR_13 > VAR_7) {
  FUNC_5(VAR_8, VAR_9);
  FUNC_3(VAR_8->dev, "period %d not supported\n", VAR_11);
  return -VAR_0;
 }

 if (VAR_12->soc->pwm45_fixup && VAR_9->hwpwm > 2) {




  VAR_16 = VAR_2;
  VAR_17 = VAR_3;
 }

 VAR_15 = FUNC_1((u64)VAR_10 * 1000, VAR_18);
 FUNC_7(VAR_12, VAR_9->hwpwm, VAR_4, FUNC_0(15) | VAR_13);
 FUNC_7(VAR_12, VAR_9->hwpwm, VAR_16, VAR_14);
 FUNC_7(VAR_12, VAR_9->hwpwm, VAR_17, VAR_15);

 FUNC_5(VAR_8, VAR_9);

 return 0;
}
