
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int addr; int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct i2c_client*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(void *VAR_4, unsigned int VAR_5,
     unsigned int VAR_6)
{
 struct i2c_client *VAR_7 = VAR_4;
 int VAR_8, VAR_9 = VAR_7->addr;

 if (!(VAR_5 & VAR_1)) {
  FUNC_0(&VAR_7->dev, "Error I2C address not specified\n");
  return -VAR_0;
 }

 VAR_7->addr = (VAR_5 & VAR_1) >> VAR_2;
 VAR_8 = FUNC_1(VAR_7, VAR_5 & VAR_3, VAR_6);
 VAR_7->addr = VAR_9;

 return VAR_8;
}
