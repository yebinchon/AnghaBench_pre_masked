
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct als_data {int mutex; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct als_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int,int) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 struct i2c_client* FUNC_8 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_8(VAR_1);
 struct als_data *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;
 unsigned long VAR_8;

 VAR_7 = FUNC_3(VAR_3, 10, &VAR_8);
 if (VAR_7)
  return VAR_7;

 if (VAR_8 < 4096)
  VAR_8 = 1;
 else if (VAR_8 < 65536)
  VAR_8 = 2;
 else
  return -VAR_0;

 FUNC_6(VAR_1);



 FUNC_4(&VAR_6->mutex);

 VAR_7 = FUNC_1(VAR_5, 0x81);
 if (VAR_7 < 0)
  goto fail;


 VAR_7 = VAR_7 & 0xFA;

 if (VAR_8 == 1)
  VAR_7 = (VAR_7 | 0x01);
 else
  VAR_7 = (VAR_7 | 0x00);

 VAR_7 = FUNC_2(VAR_5, 0x81, VAR_7);

 if (VAR_7 >= 0) {

  FUNC_5(&VAR_6->mutex);
  FUNC_7(VAR_1);
  return VAR_4;
 }
fail:
 FUNC_5(&VAR_6->mutex);
 FUNC_7(VAR_1);
 return VAR_7;
}
