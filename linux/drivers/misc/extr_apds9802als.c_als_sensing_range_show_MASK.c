
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (char*,char*) ;
 struct i2c_client* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
   struct device_attribute *VAR_1, char *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, 0x81);
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_4 & 1)
  return FUNC_1(VAR_2, "4095\n");
 else
  return FUNC_1(VAR_2, "65535\n");
}
