
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct pwm_state {unsigned int period; } ;
struct pwm_bl_data {unsigned int lth_brightness; unsigned int* levels; int scale; int pwm; } ;


 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int ,struct pwm_state*) ;

__attribute__((used)) static int FUNC_2(struct pwm_bl_data *VAR_0, int VAR_1)
{
 unsigned int VAR_2 = VAR_0->lth_brightness;
 struct pwm_state VAR_3;
 u64 VAR_4;

 FUNC_1(VAR_0->pwm, &VAR_3);

 if (VAR_0->levels)
  VAR_4 = VAR_0->levels[VAR_1];
 else
  VAR_4 = VAR_1;

 VAR_4 *= VAR_3.period - VAR_2;
 FUNC_0(VAR_4, VAR_0->scale);

 return VAR_4 + VAR_2;
}
