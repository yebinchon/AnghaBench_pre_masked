
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (char*,char*,unsigned long) ;
 struct i2c_client* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1,
   struct device_attribute *VAR_2, char *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_7(VAR_1);
 int VAR_5, VAR_6;
 unsigned long int VAR_7;
 int VAR_8;

 FUNC_4(VAR_1);
 FUNC_1(100);

 FUNC_2(&VAR_0);
 VAR_8 = FUNC_0(VAR_4, 0x02);
 if (VAR_8 < 0) {
  FUNC_5(VAR_1);
  FUNC_3(&VAR_0);
  return VAR_8;
 }

 VAR_5 = FUNC_0(VAR_4, 0x01);
 FUNC_3(&VAR_0);

 if (VAR_5 < 0) {
  FUNC_5(VAR_1);
  return VAR_5;
 }

 VAR_5 |= VAR_8 << 8;
 VAR_6 = FUNC_0(VAR_4, 0x00);
 FUNC_5(VAR_1);
 if (VAR_6 < 0)
  return VAR_6;
 VAR_7 = ((((1 << (2 * (VAR_6 & 3))))*1000) * VAR_5) / 65536;
 return FUNC_6(VAR_3, "%ld\n", VAR_7);
}
