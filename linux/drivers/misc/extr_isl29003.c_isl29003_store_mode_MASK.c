
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,unsigned long) ;
 int FUNC_1 (char const*,int,unsigned long*) ;
 struct i2c_client* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_2(VAR_1);
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, 10, &VAR_6);
 if (VAR_7)
  return VAR_7;

 if (VAR_6 > 2)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 return VAR_4;
}
