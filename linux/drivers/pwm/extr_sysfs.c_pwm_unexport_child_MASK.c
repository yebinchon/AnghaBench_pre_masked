
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int hwpwm; int flags; } ;
struct device {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct device* FUNC_0 (struct device*,struct pwm_device*,int ) ;
 int FUNC_1 (struct device*) ;
 char* FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,char**) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct pwm_device*) ;
 int VAR_4 ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_5, struct pwm_device *VAR_6)
{
 struct device *VAR_7;
 char *VAR_8[2];

 if (!FUNC_7(VAR_3, &VAR_6->flags))
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_4);
 if (!VAR_7)
  return -VAR_0;

 VAR_8[0] = FUNC_2(VAR_1, "UNEXPORT=pwm%u", VAR_6->hwpwm);
 VAR_8[1] = ((void*)0);
 FUNC_4(&VAR_5->kobj, VAR_2, VAR_8);
 FUNC_3(VAR_8[0]);


 FUNC_5(VAR_7);
 FUNC_1(VAR_7);
 FUNC_6(VAR_6);

 return 0;
}
