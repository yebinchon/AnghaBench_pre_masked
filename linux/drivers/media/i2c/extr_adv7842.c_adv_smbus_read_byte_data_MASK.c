
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 int FUNC_1 (struct i2c_client*,char*,...) ;

__attribute__((used)) static s32 FUNC_2(struct i2c_client *VAR_1, u8 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < 3; VAR_3++) {
  int VAR_4 = FUNC_0(VAR_1, VAR_2, 1);

  if (VAR_4 >= 0) {
   if (VAR_3)
    FUNC_1(VAR_1, "read ok after %d retries\n", VAR_3);
   return VAR_4;
  }
 }
 FUNC_1(VAR_1, "read failed\n");
 return -VAR_0;
}
