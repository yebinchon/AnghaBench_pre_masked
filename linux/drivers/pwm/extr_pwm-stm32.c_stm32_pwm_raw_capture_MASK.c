
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct stm32_pwm {scalar_t__* capture; scalar_t__ max_arr; int regmap; TYPE_2__ chip; } ;
struct pwm_device {int hwpwm; TYPE_3__* chip; } ;
struct device {int dummy; } ;
typedef enum stm32_timers_dmas { ____Placeholder_stm32_timers_dmas } stm32_timers_dmas ;
struct TYPE_6__ {int npwm; } ;
struct TYPE_4__ {struct device* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct device*,scalar_t__*,int,scalar_t__,int,int,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct stm32_pwm *VAR_11, struct pwm_device *VAR_12,
     unsigned long VAR_13, u32 *VAR_14,
     u32 *VAR_15)
{
 struct device *VAR_16 = VAR_11->chip.dev->parent;
 enum stm32_timers_dmas VAR_17;
 u32 VAR_18, VAR_19;
 int VAR_20;


 FUNC_0(VAR_11->regmap, VAR_9, VAR_10, VAR_10);
 FUNC_0(VAR_11->regmap, VAR_7, VAR_8, VAR_8);


 VAR_17 = VAR_12->hwpwm < 2 ? VAR_0 : VAR_1;
 VAR_18 = VAR_12->hwpwm < 2 ? VAR_3 : VAR_4;
 VAR_19 = VAR_12->hwpwm < 2 ? VAR_5 : VAR_6;
 FUNC_0(VAR_11->regmap, VAR_2, VAR_18, VAR_18);







 VAR_20 = FUNC_1(VAR_16, VAR_11->capture, VAR_17, VAR_19, 2,
       2, VAR_13);
 if (VAR_20)
  goto stop;


 if (VAR_11->capture[0] <= VAR_11->capture[2])
  *VAR_14 = VAR_11->capture[2] - VAR_11->capture[0];
 else
  *VAR_14 = VAR_11->max_arr - VAR_11->capture[0] + VAR_11->capture[2];


 if (VAR_12->chip->npwm < 2)
  *VAR_15 = 0;
 else if (VAR_11->capture[0] <= VAR_11->capture[3])
  *VAR_15 = VAR_11->capture[3] - VAR_11->capture[0];
 else
  *VAR_15 = VAR_11->max_arr - VAR_11->capture[0] + VAR_11->capture[3];

 if (*VAR_15 > *VAR_14) {






  *VAR_15 -= *VAR_14;
 }

stop:
 FUNC_0(VAR_11->regmap, VAR_2, VAR_18, 0);
 FUNC_0(VAR_11->regmap, VAR_7, VAR_8, 0);

 return VAR_20;
}
