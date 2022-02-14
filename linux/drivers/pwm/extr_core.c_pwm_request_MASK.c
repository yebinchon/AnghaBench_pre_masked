
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pwm_device* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pwm_device*,char const*) ;
 int VAR_3 ;
 struct pwm_device* FUNC_4 (int) ;

struct pwm_device *FUNC_5(int VAR_4, const char *VAR_5)
{
 struct pwm_device *VAR_6;
 int VAR_7;

 if (VAR_4 < 0 || VAR_4 >= VAR_2)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_3);

 VAR_6 = FUNC_4(VAR_4);
 if (!VAR_6) {
  VAR_6 = FUNC_0(-VAR_1);
  goto out;
 }

 VAR_7 = FUNC_3(VAR_6, VAR_5);
 if (VAR_7 < 0)
  VAR_6 = FUNC_0(VAR_7);

out:
 FUNC_2(&VAR_3);

 return VAR_6;
}
