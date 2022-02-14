
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s35390a {struct i2c_client** client; } ;
struct i2c_msg {int len; char* buf; int addr; } ;
struct i2c_client {int adapter; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct s35390a *VAR_1, int VAR_2, char *VAR_3, int VAR_4)
{
 struct i2c_client *VAR_5 = VAR_1->client[VAR_2];
 struct i2c_msg VAR_6[] = {
  {
   .addr = VAR_5->addr,
   .len = VAR_4,
   .buf = VAR_3
  },
 };

 if ((FUNC_0(VAR_5->adapter, VAR_6, 1)) != 1)
  return -VAR_0;

 return 0;
}
