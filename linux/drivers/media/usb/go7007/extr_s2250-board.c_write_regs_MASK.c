
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 scalar_t__ FUNC_1 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0, u8 *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; !((VAR_1[VAR_2] == 0x00) && (VAR_1[VAR_2+1] == 0x00)); VAR_2 += 2) {
  if (FUNC_1(VAR_0, VAR_1[VAR_2], VAR_1[VAR_2+1]) < 0) {
   FUNC_0(&VAR_0->dev, "failed\n");
   return -1;
  }
 }
 return 0;
}
