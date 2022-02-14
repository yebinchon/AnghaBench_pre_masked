
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct pm860x_chip {struct regmap* regmap_companion; struct regmap* regmap; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 struct pm860x_chip* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct regmap*,int,unsigned int*) ;

int FUNC_2(struct i2c_client *VAR_0, int VAR_1)
{
 struct pm860x_chip *VAR_2 = FUNC_0(VAR_0);
 struct regmap *VAR_3 = (VAR_0 == VAR_2->client) ? VAR_2->regmap
    : VAR_2->regmap_companion;
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, VAR_1, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 else
  return (int)VAR_4;
}
