
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,char*,scalar_t__) ;
 int FUNC_1 (int,scalar_t__*) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_3,
      struct device_attribute *VAR_4,
      char *VAR_5)
{
 struct sensor_device_attribute *VAR_6 =
     FUNC_2(VAR_4);
 int VAR_7 = VAR_6->index;
 s32 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_7, &VAR_8);
 if (VAR_9)
  return VAR_9;
 if (VAR_8 == VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_1, "%d\n", VAR_8);
}
