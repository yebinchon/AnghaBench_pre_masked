
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct sun4i_pwm_chip {TYPE_1__* data; int clk; } ;
struct pwm_state {int period; int duty_cycle; } ;
struct TYPE_2__ {scalar_t__ has_prescaler_bypass; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 unsigned int* VAR_4 ;

__attribute__((used)) static int FUNC_2(struct sun4i_pwm_chip *VAR_5,
          const struct pwm_state *VAR_6,
          u32 *VAR_7, u32 *VAR_8, unsigned int *VAR_9)
{
 u64 VAR_10, VAR_11 = 0;
 unsigned int VAR_12, VAR_13 = 0;

 VAR_10 = FUNC_0(VAR_5->clk);

 if (VAR_5->data->has_prescaler_bypass) {

  VAR_13 = VAR_3;
  VAR_12 = 1;





  VAR_11 = VAR_10 * VAR_6->period + VAR_1 / 2;
  FUNC_1(VAR_11, VAR_1);
  if (VAR_11 - 1 > VAR_2)
   VAR_13 = 0;
 }

 if (VAR_13 == 0) {

  for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
   if (!VAR_4[VAR_13])
    continue;
   VAR_12 = VAR_4[VAR_13];
   VAR_11 = VAR_10;
   FUNC_1(VAR_11, VAR_12);
   VAR_11 = VAR_11 * VAR_6->period;
   FUNC_1(VAR_11, VAR_1);
   if (VAR_11 - 1 <= VAR_2)
    break;
  }

  if (VAR_11 - 1 > VAR_2)
   return -VAR_0;
 }

 *VAR_8 = VAR_11;
 VAR_11 *= VAR_6->duty_cycle;
 FUNC_1(VAR_11, VAR_6->period);
 *VAR_7 = VAR_11;
 *VAR_9 = VAR_13;

 return 0;
}
