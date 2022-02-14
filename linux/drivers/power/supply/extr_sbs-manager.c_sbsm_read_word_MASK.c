
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_1, u8 VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_4 = VAR_0; VAR_4 > 0; VAR_4--) {
  VAR_3 = FUNC_1(VAR_1, VAR_2);
  if (VAR_3 >= 0)
   break;
 }

 if (VAR_3 < 0) {
  FUNC_0(&VAR_1->dev, "failed to read register 0x%02x\n",
   VAR_2);
 }

 return VAR_3;
}
