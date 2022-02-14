
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct pm860x_chip {struct regmap* regmap_companion; struct regmap* regmap; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;


 struct pm860x_chip* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct regmap*,int,unsigned char*,int) ;

int FUNC_2(struct i2c_client *VAR_0, int VAR_1,
        int VAR_2, unsigned char *VAR_3)
{
 struct pm860x_chip *VAR_4 = FUNC_0(VAR_0);
 struct regmap *VAR_5 = (VAR_0 == VAR_4->client) ? VAR_4->regmap
    : VAR_4->regmap_companion;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_1, VAR_3, VAR_2);
 return VAR_6;
}
