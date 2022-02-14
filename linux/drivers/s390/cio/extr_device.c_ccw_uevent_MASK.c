
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobj_uevent_env {int dummy; } ;
struct device {int dummy; } ;
struct ccw_device_id {char* cu_type; char* cu_model; char* dev_type; char* dev_model; } ;
struct ccw_device {struct ccw_device_id id; } ;
typedef int modalias_buf ;


 int FUNC_0 (struct kobj_uevent_env*,char*,char*) ;
 int FUNC_1 (char*,int,struct ccw_device_id*,char*) ;
 struct ccw_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct kobj_uevent_env *VAR_1)
{
 struct ccw_device *VAR_2 = FUNC_2(VAR_0);
 struct ccw_device_id *VAR_3 = &(VAR_2->id);
 int VAR_4;
 char VAR_5[30];


 VAR_4 = FUNC_0(VAR_1, "CU_TYPE=%04X", VAR_3->cu_type);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_0(VAR_1, "CU_MODEL=%02X", VAR_3->cu_model);
 if (VAR_4)
  return VAR_4;



 VAR_4 = FUNC_0(VAR_1, "DEV_TYPE=%04X", VAR_3->dev_type);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_0(VAR_1, "DEV_MODEL=%02X", VAR_3->dev_model);
 if (VAR_4)
  return VAR_4;


 FUNC_1(VAR_5, sizeof(VAR_5), VAR_3, "");
 VAR_4 = FUNC_0(VAR_1, "MODALIAS=%s", VAR_5);
 return VAR_4;
}
