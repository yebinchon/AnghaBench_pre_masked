
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int *) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0, u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_1, &VAR_4);
 if (VAR_5) {
  FUNC_0(&VAR_0->dev,
   "[Read]-Modify-Write of register 0x%02x failed!\n",
   VAR_1);
  return VAR_5;
 }

 VAR_4 &= ~VAR_3;
 VAR_4 |= VAR_2;

 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_4);
 if (VAR_5)
  FUNC_0(&VAR_0->dev,
   "Read-Modify-[Write] of register 0x%02x failed!\n",
   VAR_1);

 return VAR_5;
}
