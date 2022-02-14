
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;
struct ap_device {int device_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct kobj_uevent_env*,char*,int ) ;
 struct ap_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_1, struct kobj_uevent_env *VAR_2)
{
 struct ap_device *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = 0;

 if (!VAR_3)
  return -VAR_0;


 VAR_4 = FUNC_0(VAR_2, "DEV_TYPE=%04X", VAR_3->device_type);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_0(VAR_2, "MODALIAS=ap:t%02X", VAR_3->device_type);

 return VAR_4;
}
