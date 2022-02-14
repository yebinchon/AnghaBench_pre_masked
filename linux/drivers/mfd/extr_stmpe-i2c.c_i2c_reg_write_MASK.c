
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stmpe {struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct stmpe *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct i2c_client *VAR_3 = VAR_0->client;

 return FUNC_0(VAR_3, VAR_1, VAR_2);
}
