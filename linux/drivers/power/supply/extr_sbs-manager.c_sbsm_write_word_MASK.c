
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1, u8 VAR_2, u16 VAR_3)
{
 int VAR_4, VAR_5;

 for (VAR_5 = VAR_0; VAR_5 > 0; VAR_5--) {
  VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
  if (VAR_4 >= 0)
   break;
 }
 if (VAR_4 < 0)
  FUNC_0(&VAR_1->dev, "failed to write to register 0x%02x\n",
   VAR_2);

 return VAR_4;
}
