
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
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct i2c_client const*,int,int,int*) ;

__attribute__((used)) static int FUNC_2(const struct i2c_client *VAR_3,
       u8 VAR_4, u8 VAR_5, u8 *VAR_6)
{
 int VAR_7 = VAR_2;
 s32 VAR_8;

 do
  VAR_8 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
 while ((VAR_8 == -VAR_1 || VAR_8 == -VAR_0) && --VAR_7);
 if (VAR_8 != VAR_5) {
  FUNC_0(&VAR_3->dev,
   "Unable to read registers 0x%02x..0x%02x\n",
   VAR_4, VAR_4 + VAR_5 - 1);
  return VAR_8 < 0 ? VAR_8 : -VAR_0;
 }

 return 0;
}
