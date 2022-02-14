
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
typedef int s32 ;


 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct i2c_client*,int) ;
 int FUNC_2 (struct i2c_client*,int,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0,
      u8 VAR_1, u8 VAR_2, u8 VAR_3)
{
 s32 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 &= ~VAR_2;
 VAR_4 |= VAR_3 & VAR_2;

 FUNC_0(&VAR_0->dev, "masks: 0x%02x, 0x%02x", VAR_1, VAR_4);

 return FUNC_2(VAR_0, VAR_1, VAR_4);
}
