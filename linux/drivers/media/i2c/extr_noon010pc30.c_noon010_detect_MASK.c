
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct noon010_info {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct noon010_info*) ;
 int FUNC_3 (struct noon010_info*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_3, struct noon010_info *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_3(VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_0);
 if (VAR_5 < 0)
  FUNC_0(&VAR_3->dev, "I2C read failed: 0x%X\n", VAR_5);

 FUNC_2(VAR_4);

 return VAR_5 == VAR_2 ? 0 : -VAR_1;
}
