
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,struct i2c_client const*,int ,int) ;
 int FUNC_3 (int,struct i2c_client const*,int,int) ;

__attribute__((used)) static int FUNC_4(const struct i2c_client *VAR_0)
{
 int VAR_1;

 FUNC_2(VAR_1, VAR_0, FUNC_0(12, 13), 0x000F);
 FUNC_2(VAR_1, VAR_0, FUNC_0(12, 23), 0x0F0F);
 FUNC_2(VAR_1, VAR_0, FUNC_1(1, 0), 0x06);

 FUNC_3(VAR_1, VAR_0, 0x0614, 0x0000);

 FUNC_2(VAR_1, VAR_0, FUNC_1(1, 0), 0x05);
 FUNC_2(VAR_1, VAR_0, FUNC_1(12, 2), 0x02);
 FUNC_2(VAR_1, VAR_0, FUNC_0(12, 3), 0x0002);
 FUNC_2(VAR_1, VAR_0, FUNC_0(17, 3), 0x8001);
 FUNC_2(VAR_1, VAR_0, FUNC_0(17, 11), 0x0025);
 FUNC_2(VAR_1, VAR_0, FUNC_0(17, 13), 0x0193);
 FUNC_2(VAR_1, VAR_0, FUNC_1(17, 33), 0x18);
 FUNC_2(VAR_1, VAR_0, FUNC_1(1, 0), 0x05);

 return VAR_1;
}
