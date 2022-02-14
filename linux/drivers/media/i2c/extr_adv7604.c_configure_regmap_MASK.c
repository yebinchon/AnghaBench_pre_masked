
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv76xx_state {int * i2c_clients; int * regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,char*,int,int) ;

__attribute__((used)) static int FUNC_4(struct adv76xx_state *VAR_3, int VAR_4)
{
 int VAR_5;

 if (!VAR_3->i2c_clients[VAR_4])
  return -VAR_1;

 VAR_3->regmap[VAR_4] =
  FUNC_2(VAR_3->i2c_clients[VAR_4],
         &VAR_2[VAR_4]);

 if (FUNC_0(VAR_3->regmap[VAR_4])) {
  VAR_5 = FUNC_1(VAR_3->regmap[VAR_4]);
  FUNC_3(VAR_3->i2c_clients[VAR_4],
   "Error initializing regmap %d with error %d\n",
   VAR_4, VAR_5);
  return -VAR_0;
 }

 return 0;
}
