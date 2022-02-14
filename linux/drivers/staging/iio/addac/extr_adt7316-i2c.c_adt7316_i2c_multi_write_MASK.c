
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int,int) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, u8 VAR_2, u8 VAR_3, u8 *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_1;
 int VAR_6, VAR_7;

 if (VAR_3 > VAR_0)
  VAR_3 = VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_7 = FUNC_0(VAR_5, VAR_2, VAR_4[VAR_6]);
  if (VAR_7 < 0) {
   FUNC_1(&VAR_5->dev, "I2C multi write error\n");
   return VAR_7;
  }
 }

 return 0;
}
