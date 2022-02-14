
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct ir_rx51 {int freq; int duty_cycle; struct pwm_device* pwm; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct pwm_device*,int,int) ;

__attribute__((used)) static int FUNC_2(struct ir_rx51 *VAR_1)
{
 struct pwm_device *VAR_2 = VAR_1->pwm;
 int VAR_3, VAR_4 = FUNC_0(VAR_0, VAR_1->freq);

 VAR_3 = FUNC_0(VAR_1->duty_cycle * VAR_4, 100);

 FUNC_1(VAR_2, VAR_3, VAR_4);

 return 0;
}
