
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int minor; int major; } ;
struct ziirave_wdt_data {int sysfs_mutex; TYPE_1__ firmware_rev; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int parent; } ;
typedef int ssize_t ;


 char* VAR_0 ;
 struct ziirave_wdt_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int ,int ) ;
 struct i2c_client* FUNC_4 (int ) ;

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

 VAR_6 = FUNC_3(VAR_3, VAR_0, VAR_5->firmware_rev.major,
        VAR_5->firmware_rev.minor);

 FUNC_2(&VAR_5->sysfs_mutex);

 return VAR_6;
}
