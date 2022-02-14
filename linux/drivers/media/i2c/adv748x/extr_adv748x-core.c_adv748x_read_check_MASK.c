
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int addr; } ;
struct adv748x_state {int * regmap; struct i2c_client** i2c_clients; } ;


 int FUNC_0 (struct adv748x_state*,char*,int ,int ) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct adv748x_state *VAR_0,
         int VAR_1, u8 VAR_2)
{
 struct i2c_client *VAR_3 = VAR_0->i2c_clients[VAR_1];
 int VAR_4;
 unsigned int VAR_5;

 VAR_4 = FUNC_1(VAR_0->regmap[VAR_1], VAR_2, &VAR_5);

 if (VAR_4) {
  FUNC_0(VAR_0, "error reading %02x, %02x\n",
    VAR_3->addr, VAR_2);
  return VAR_4;
 }

 return VAR_5;
}
