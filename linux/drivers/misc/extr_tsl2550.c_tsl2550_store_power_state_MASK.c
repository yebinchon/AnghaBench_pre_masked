
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2550_data {int update_lock; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct tsl2550_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (char const*,int *,int) ;
 struct i2c_client* FUNC_4 (struct device*) ;
 int FUNC_5 (struct i2c_client*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_4(VAR_1);
 struct tsl2550_data *VAR_6 = FUNC_0(VAR_5);
 unsigned long VAR_7 = FUNC_3(VAR_3, ((void*)0), 10);
 int VAR_8;

 if (VAR_7 > 1)
  return -VAR_0;

 FUNC_1(&VAR_6->update_lock);
 VAR_8 = FUNC_5(VAR_5, VAR_7);
 FUNC_2(&VAR_6->update_lock);

 if (VAR_8 < 0)
  return VAR_8;

 return VAR_4;
}
