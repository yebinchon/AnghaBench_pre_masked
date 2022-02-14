
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int *,char*,int ,int,scalar_t__) ;
 scalar_t__ FUNC_1 (struct i2c_client*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0, int VAR_1, u8 VAR_2)
{
 s32 VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3 < 0) {
  FUNC_0(&VAR_0->dev,
   "i2c write fail: can't write %02x to %02x: %d\n",
   VAR_2, VAR_1, VAR_3);
  return VAR_3;
 }
 return 0;
}
