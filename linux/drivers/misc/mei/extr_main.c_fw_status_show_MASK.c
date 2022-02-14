
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_fw_status {int count; int * status; } ;
struct mei_device {int device_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct mei_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct mei_device*,struct mei_fw_status*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct mei_device *VAR_4 = FUNC_1(VAR_1);
 struct mei_fw_status VAR_5;
 int VAR_6, VAR_7;
 ssize_t VAR_8 = 0;

 FUNC_3(&VAR_4->device_lock);
 VAR_6 = FUNC_2(VAR_4, &VAR_5);
 FUNC_4(&VAR_4->device_lock);
 if (VAR_6) {
  FUNC_0(VAR_1, "read fw_status error = %d\n", VAR_6);
  return VAR_6;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5.count; VAR_7++)
  VAR_8 += FUNC_5(VAR_3 + VAR_8, VAR_0 - VAR_8, "%08X\n",
    VAR_5.status[VAR_7]);
 return VAR_8;
}
