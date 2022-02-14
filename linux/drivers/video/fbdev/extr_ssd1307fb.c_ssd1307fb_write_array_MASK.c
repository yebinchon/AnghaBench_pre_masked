
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ssd1307fb_array {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,int *,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0,
     struct ssd1307fb_array *VAR_1, u32 VAR_2)
{
 int VAR_3;

 VAR_2 += sizeof(struct ssd1307fb_array);

 VAR_3 = FUNC_1(VAR_0, (u8 *)VAR_1, VAR_2);
 if (VAR_3 != VAR_2) {
  FUNC_0(&VAR_0->dev, "Couldn't send I2C command.\n");
  return VAR_3;
 }

 return 0;
}
