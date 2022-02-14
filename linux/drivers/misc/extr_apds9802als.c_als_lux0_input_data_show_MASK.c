
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct als_data {int mutex; } ;
typedef int ssize_t ;


 int FUNC_0 (struct device*) ;
 struct als_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int) ;
 int FUNC_3 (struct i2c_client*,int) ;
 int FUNC_4 (struct i2c_client*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (char*,char*,int) ;
 struct i2c_client* FUNC_10 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_11(struct device *VAR_0,
   struct device_attribute *VAR_1, char *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_10(VAR_0);
 struct als_data *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;
 int VAR_6;


 FUNC_7(VAR_0);
 FUNC_5(&VAR_4->mutex);


 FUNC_3(VAR_3, 0x40);

 VAR_6 = FUNC_2(VAR_3, 0x81);
 FUNC_4(VAR_3, 0x81, VAR_6 | 0x08);

 VAR_5 = FUNC_0(VAR_0);
 if (VAR_5 < 0)
  goto failed;

 VAR_6 = FUNC_2(VAR_3, 0x8C);
 if (VAR_6 < 0) {
  VAR_5 = VAR_6;
  goto failed;
 }
 VAR_5 = FUNC_2(VAR_3, 0x8D);
 if (VAR_5 < 0)
  goto failed;

 FUNC_6(&VAR_4->mutex);
 FUNC_8(VAR_0);

 VAR_6 = (VAR_5 << 8) | VAR_6;
 return FUNC_9(VAR_2, "%d\n", VAR_6);
failed:
 FUNC_6(&VAR_4->mutex);
 FUNC_8(VAR_0);
 return VAR_5;
}
