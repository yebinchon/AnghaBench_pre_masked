
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct i2c_client {int dev; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ loff_t ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int *,char*,char*,scalar_t__,size_t) ;
 int FUNC_1 (struct i2c_client*,scalar_t__,size_t,char*) ;
 struct i2c_client* FUNC_2 (struct kobject*) ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_2, struct kobject *VAR_3,
      struct bin_attribute *VAR_4,
      char *VAR_5, loff_t VAR_6, size_t VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_2(VAR_3);
 int VAR_9;

 FUNC_0(&VAR_8->dev, "ds1682_eeprom_read(p=%p, off=%lli, c=%zi)\n",
  VAR_5, VAR_6, VAR_7);

 VAR_9 = FUNC_1(VAR_8, VAR_0 + VAR_6,
        VAR_7, VAR_5);
 if (VAR_9 < 0)
  return -VAR_1;

 return VAR_7;
}
