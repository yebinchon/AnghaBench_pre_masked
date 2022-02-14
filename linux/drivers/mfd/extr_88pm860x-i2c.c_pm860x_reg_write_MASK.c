
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct pm860x_chip {struct regmap* regmap_companion; struct regmap* regmap; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 struct pm860x_chip* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct regmap*,int,unsigned char) ;

int FUNC_2(struct i2c_client *VAR_0, int VAR_1,
       unsigned char VAR_2)
{
 struct pm860x_chip *VAR_3 = FUNC_0(VAR_0);
 struct regmap *VAR_4 = (VAR_0 == VAR_3->client) ? VAR_3->regmap
    : VAR_3->regmap_companion;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, VAR_1, VAR_2);
 return VAR_5;
}
