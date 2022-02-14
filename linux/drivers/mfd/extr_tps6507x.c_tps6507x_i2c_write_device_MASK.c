
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;
struct tps6507x_dev {struct i2c_client* i2c_client; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,char*,int) ;
 int FUNC_1 (char*,void*,int) ;

__attribute__((used)) static int FUNC_2(struct tps6507x_dev *VAR_3, char VAR_4,
       int VAR_5, void *VAR_6)
{
 struct i2c_client *VAR_7 = VAR_3->i2c_client;

 u8 VAR_8[VAR_2 + 1];
 int VAR_9;

 if (VAR_5 > VAR_2)
  return -VAR_0;

 VAR_8[0] = VAR_4;
 FUNC_1(&VAR_8[1], VAR_6, VAR_5);

 VAR_9 = FUNC_0(VAR_7, VAR_8, VAR_5 + 1);
 if (VAR_9 < 0)
  return VAR_9;
 if (VAR_9 != VAR_5 + 1)
  return -VAR_1;
 return 0;
}
