
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef int u16 ;
struct i2c_client {int dev; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,char const*,int) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1, u16 VAR_2)
{
 int VAR_3;
 __be16 VAR_4 = FUNC_0(VAR_2);

 VAR_3 = FUNC_2(VAR_1, (const char *)&VAR_4, sizeof(VAR_4));
 if (VAR_3 != sizeof(VAR_4)) {
  FUNC_1(&VAR_1->dev, "I2C write fail\n");
  return -VAR_0;
 }
 return 0;
}
