
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*,int,int) ;
 int FUNC_2 (char const*,int,unsigned long*) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_3(VAR_1);
 int VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_2(VAR_3, 10, &VAR_7);
 if (VAR_6)
  return VAR_6;

 if (VAR_7 < 1 || VAR_7 > 64000)
  return -VAR_0;


 if (VAR_7 <= 1000)
  VAR_7 = 1;
 else if (VAR_7 <= 4000)
  VAR_7 = 2;
 else if (VAR_7 <= 16000)
  VAR_7 = 3;
 else
  VAR_7 = 4;

 VAR_6 = FUNC_0(VAR_5, 0x00);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 &= 0xFC;
 VAR_6 |= VAR_7 - 1;
 VAR_6 = FUNC_1(VAR_5, 0x00, VAR_6);

 if (VAR_6 < 0)
  return VAR_6;
 return VAR_4;
}
