
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (int) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;
 int VAR_4 = 10;

 do {
  FUNC_2(30);
  VAR_3 = FUNC_1(VAR_2, 0x86);
 } while (!(VAR_3 & 0x80) && VAR_4--);

 if (VAR_4 < 0) {
  FUNC_0(VAR_1, "timeout waiting for data ready\n");
  return -VAR_0;
 }

 return 0;
}
