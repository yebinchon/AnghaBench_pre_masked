
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsl2550_data {int update_lock; int power_state; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,char*) ;
 struct tsl2550_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct i2c_client* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
   struct device_attribute *VAR_2, char *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_4(VAR_1);
 struct tsl2550_data *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;


 if (!VAR_5->power_state)
  return -VAR_0;

 FUNC_2(&VAR_5->update_lock);
 VAR_6 = FUNC_0(VAR_4, VAR_3);
 FUNC_3(&VAR_5->update_lock);

 return VAR_6;
}
