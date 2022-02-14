
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct i2c_client*,int ,int) ;
 int FUNC_1 (struct i2c_client*,char*,...) ;

__attribute__((used)) static s32 FUNC_2(struct i2c_client *VAR_0, u8 VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
  int VAR_3 = FUNC_0(VAR_0, VAR_1, 1);
  if (VAR_3 >= 0) {
   if (VAR_2)
    FUNC_1(VAR_0, "read ok after %d retries\n", VAR_2);
   return VAR_3;
  }
 }
 FUNC_1(VAR_0, "read failed\n");
 return -1;
}
