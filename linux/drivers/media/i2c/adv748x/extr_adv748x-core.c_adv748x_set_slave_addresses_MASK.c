
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct i2c_client {int addr; } ;
struct adv748x_state {struct i2c_client** i2c_clients; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct adv748x_state*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct adv748x_state *VAR_3)
{
 struct i2c_client *VAR_4;
 unsigned int VAR_5;
 u8 VAR_6;

 for (VAR_5 = VAR_1; VAR_5 < VAR_2; ++VAR_5) {
  VAR_6 = VAR_0 + VAR_5;
  VAR_4 = VAR_3->i2c_clients[VAR_5];

  FUNC_0(VAR_3, VAR_6, VAR_4->addr << 1);
 }

 return 0;
}
