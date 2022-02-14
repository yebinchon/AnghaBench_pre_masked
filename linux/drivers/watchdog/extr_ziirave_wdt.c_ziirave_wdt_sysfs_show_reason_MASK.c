
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ziirave_wdt_data {size_t reset_reason; int sysfs_mutex; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 struct ziirave_wdt_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,char*) ;
 struct i2c_client* FUNC_4 (int ) ;
 char** VAR_0 ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
          struct device_attribute *VAR_2,
          char *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_4(VAR_1->parent);
 struct ziirave_wdt_data *VAR_5 = FUNC_0(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_1(&VAR_5->sysfs_mutex);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_3(VAR_3, "%s", VAR_0[VAR_5->reset_reason]);

 FUNC_2(&VAR_5->sysfs_mutex);

 return VAR_6;
}
