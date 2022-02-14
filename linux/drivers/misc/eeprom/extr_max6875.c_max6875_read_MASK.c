
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max6875_data {int * data; } ;
struct kobject {int dummy; } ;
struct i2c_client {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;


 size_t VAR_0 ;
 struct max6875_data* FUNC_0 (struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct kobject*) ;
 int FUNC_2 (struct i2c_client*,int) ;
 int FUNC_3 (char*,int *,size_t) ;

__attribute__((used)) static ssize_t FUNC_4(struct file *VAR_1, struct kobject *VAR_2,
       struct bin_attribute *VAR_3,
       char *VAR_4, loff_t VAR_5, size_t VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_1(VAR_2);
 struct max6875_data *VAR_8 = FUNC_0(VAR_7);
 int VAR_9, VAR_10;


 VAR_10 = (VAR_5 + VAR_6 - 1) >> VAR_0;
 for (VAR_9 = (VAR_5 >> VAR_0); VAR_9 <= VAR_10; VAR_9++)
  FUNC_2(VAR_7, VAR_9);

 FUNC_3(VAR_4, &VAR_8->data[VAR_5], VAR_6);

 return VAR_6;
}
