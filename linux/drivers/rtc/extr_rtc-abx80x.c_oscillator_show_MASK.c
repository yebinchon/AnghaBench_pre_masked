
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (char*,char*) ;
 struct i2c_client* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 int VAR_3 = 0;
 struct i2c_client *VAR_4 = FUNC_3(VAR_0->parent);

 VAR_3 = FUNC_0(VAR_4);

 if (VAR_3 < 0) {
  FUNC_1(VAR_0, "Failed to read RTC oscillator selection\n");
  FUNC_2(VAR_2, "\n");
  return VAR_3;
 }

 if (VAR_3)
  return FUNC_2(VAR_2, "rc\n");
 else
  return FUNC_2(VAR_2, "xtal\n");
}
