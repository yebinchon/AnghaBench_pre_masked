
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
typedef int status_result ;
typedef int status_addr ;


 char VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct i2c_client*,char*,int) ;
 int FUNC_2 (struct i2c_client*,char const*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1)
{
 const char VAR_2 = VAR_0;
 char VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, &VAR_2, sizeof(VAR_2));
 if (VAR_4 < 0) {
  FUNC_0(&VAR_1->dev, "I2C write STATUS address fail ret = %d\n",
   VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_1, &VAR_3, sizeof(VAR_3));
 if (VAR_4 < 0) {
  FUNC_0(&VAR_1->dev, "I2C read STATUS value fail ret = %d\n",
   VAR_4);
  return VAR_4;
 }

 return VAR_3;
}
