
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct fwnode_handle {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pwm_device* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct pwm_device*) ;
 struct pwm_device* FUNC_2 (struct fwnode_handle*) ;
 int VAR_3 ;
 int FUNC_3 (struct device*,struct pwm_device**) ;
 struct pwm_device** FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct pwm_device**) ;
 scalar_t__ FUNC_6 (struct fwnode_handle*) ;
 scalar_t__ FUNC_7 (struct fwnode_handle*) ;
 struct pwm_device* FUNC_8 (struct device*,int ,char const*) ;
 int FUNC_9 (struct fwnode_handle*) ;

struct pwm_device *FUNC_10(struct device *VAR_4,
           struct fwnode_handle *VAR_5,
           const char *VAR_6)
{
 struct pwm_device **VAR_7, *VAR_8 = FUNC_0(-VAR_0);

 VAR_7 = FUNC_4(VAR_3, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return FUNC_0(-VAR_1);

 if (FUNC_7(VAR_5))
  VAR_8 = FUNC_8(VAR_4, FUNC_9(VAR_5), VAR_6);
 else if (FUNC_6(VAR_5))
  VAR_8 = FUNC_2(VAR_5);

 if (!FUNC_1(VAR_8)) {
  *VAR_7 = VAR_8;
  FUNC_3(VAR_4, VAR_7);
 } else {
  FUNC_5(VAR_7);
 }

 return VAR_8;
}
