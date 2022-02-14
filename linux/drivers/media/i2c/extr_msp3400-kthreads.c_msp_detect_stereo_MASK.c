
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msp_state {int opmode; } ;
struct i2c_client {int dummy; } ;





 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*) ;
 struct msp_state* FUNC_3 (int ) ;

int FUNC_4(struct i2c_client *VAR_0)
{
 struct msp_state *VAR_1 = FUNC_3(FUNC_0(VAR_0));

 switch (VAR_1->opmode) {
 case 128:
 case 130:
  return FUNC_1(VAR_0);
 case 129:
  return FUNC_2(VAR_0);
 }
 return 0;
}
