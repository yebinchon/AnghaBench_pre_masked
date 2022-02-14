
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kobject {int dummy; } ;
struct i2c_client {int dummy; } ;
struct file {int dummy; } ;
struct eeprom_data {scalar_t__ nature; char* data; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef int loff_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct i2c_client*,int) ;
 struct eeprom_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct kobject*) ;
 int FUNC_4 (char*,char*,size_t) ;
 struct i2c_client* FUNC_5 (int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct file *VAR_2, struct kobject *VAR_3,
      struct bin_attribute *VAR_4,
      char *VAR_5, loff_t VAR_6, size_t VAR_7)
{
 struct i2c_client *VAR_8 = FUNC_5(FUNC_3(VAR_3));
 struct eeprom_data *VAR_9 = FUNC_2(VAR_8);
 u8 VAR_10;


 for (VAR_10 = VAR_6 >> 5; VAR_10 <= (VAR_6 + VAR_7 - 1) >> 5; VAR_10++)
  FUNC_1(VAR_8, VAR_10);





 if (VAR_9->nature == VAR_1 && !FUNC_0(VAR_0)) {
  int VAR_11;

  for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
   if ((VAR_6 + VAR_11 <= 0x1f) ||
       (VAR_6 + VAR_11 >= 0xc0 && VAR_6 + VAR_11 <= 0xdf))
    VAR_5[VAR_11] = 0;
   else
    VAR_5[VAR_11] = VAR_9->data[VAR_6 + VAR_11];
  }
 } else {
  FUNC_4(VAR_5, &VAR_9->data[VAR_6], VAR_7);
 }

 return VAR_7;
}
