
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct i2c_client const*,int ,int ) ;

__attribute__((used)) static int FUNC_2(const struct i2c_client *VAR_3, u8 VAR_4, u8 VAR_5)
{
 int VAR_6 = VAR_2;
 s32 VAR_7;

 do
  VAR_7 = FUNC_1(VAR_3, VAR_4, VAR_5);
 while ((VAR_7 == -VAR_1 || VAR_7 == -VAR_0) && --VAR_6);
 if (VAR_7)
  FUNC_0(&VAR_3->dev, "Unable to write register 0x%02x\n", VAR_4);

 return VAR_7;
}
