
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct i2c_client*,char) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct i2c_client*,unsigned char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*,int,int) ;
 struct i2c_client* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
   struct device_attribute *VAR_2, char *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_7(VAR_1);
 unsigned char VAR_5[2];
 int VAR_6;

 FUNC_4(&VAR_0);
 VAR_6 = FUNC_0(VAR_4, 'A');
 if (VAR_6 != 1) {
  FUNC_5(&VAR_0);
  return VAR_6;
 }
 FUNC_3(10);
 VAR_6 = FUNC_2(VAR_4, VAR_5, 2);
 FUNC_5(&VAR_0);
 if (VAR_6 < 0) {
  FUNC_1(VAR_1, "i2c read data cmd failed\n");
  return VAR_6;
 }
 VAR_6 = (VAR_5[0] << 8) | VAR_5[1];
 return FUNC_6(VAR_3, "%d.%d\n", VAR_6/10, VAR_6%10);
}
