
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_state {int dummy; } ;
struct pwm_export {int lock; } ;
struct pwm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pwm_device*,struct pwm_state*) ;

__attribute__((used)) static int FUNC_2(struct pwm_export *VAR_0,
     struct pwm_device *VAR_1,
     struct pwm_state *VAR_2)
{
 int VAR_3 = FUNC_1(VAR_1, VAR_2);


 FUNC_0(&VAR_0->lock);

 return VAR_3;
}
