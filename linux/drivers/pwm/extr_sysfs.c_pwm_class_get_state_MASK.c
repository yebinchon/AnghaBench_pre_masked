
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_state {int dummy; } ;
struct pwm_export {int lock; } ;
struct pwm_device {int flags; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct pwm_export* FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct device*,struct pwm_device*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct pwm_device*,struct pwm_state*) ;
 int VAR_1 ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static struct pwm_export *FUNC_6(struct device *VAR_2,
           struct pwm_device *VAR_3,
           struct pwm_state *VAR_4)
{
 struct device *VAR_5;
 struct pwm_export *VAR_6;

 if (!FUNC_5(VAR_0, &VAR_3->flags))
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_1);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_0(VAR_5);
 FUNC_3(VAR_5);

 FUNC_2(&VAR_6->lock);
 FUNC_4(VAR_3, VAR_4);

 return VAR_6;
}
