
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_dev {struct pwm_ir* priv; } ;
struct pwm_ir {int carrier; int duty_cycle; struct pwm_device* pwm; } ;
struct pwm_device {int dummy; } ;
typedef int ktime_t ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 () ;
 long FUNC_3 (int ,int ) ;
 int FUNC_4 (struct pwm_device*,int,int) ;
 int FUNC_5 (struct pwm_device*) ;
 int FUNC_6 (struct pwm_device*) ;
 int FUNC_7 (long,long) ;

__attribute__((used)) static int FUNC_8(struct rc_dev *VAR_1, unsigned int *VAR_2,
       unsigned int VAR_3)
{
 struct pwm_ir *VAR_4 = VAR_1->priv;
 struct pwm_device *VAR_5 = VAR_4->pwm;
 int VAR_6, VAR_7, VAR_8;
 ktime_t VAR_9;
 long VAR_10;

 VAR_8 = FUNC_0(VAR_0, VAR_4->carrier);
 VAR_7 = FUNC_0(VAR_4->duty_cycle * VAR_8, 100);

 FUNC_4(VAR_5, VAR_7, VAR_8);

 VAR_9 = FUNC_2();

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_6 % 2)
   FUNC_5(VAR_5);
  else
   FUNC_6(VAR_5);

  VAR_9 = FUNC_1(VAR_9, VAR_2[VAR_6]);
  VAR_10 = FUNC_3(VAR_9, FUNC_2());
  if (VAR_10 > 0)
   FUNC_7(VAR_10, VAR_10 + 10);
 }

 FUNC_5(VAR_5);

 return VAR_3;
}
