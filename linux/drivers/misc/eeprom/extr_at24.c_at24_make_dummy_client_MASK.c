
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap_config {int dummy; } ;
struct device {int dummy; } ;
struct regmap {scalar_t__ addr; int adapter; struct device dev; } ;
struct i2c_client {scalar_t__ addr; int adapter; struct device dev; } ;
struct at24_data {TYPE_1__* client; } ;
struct TYPE_2__ {struct regmap* regmap; struct regmap* client; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 struct regmap* FUNC_2 (struct device*,int ,scalar_t__) ;
 struct regmap* FUNC_3 (struct regmap*,struct regmap_config*) ;

__attribute__((used)) static int FUNC_4(struct at24_data *VAR_0, unsigned int VAR_1,
      struct regmap_config *VAR_2)
{
 struct i2c_client *VAR_3, *VAR_4;
 struct regmap *VAR_5;
 struct device *VAR_6;

 VAR_3 = VAR_0->client[0].client;
 VAR_6 = &VAR_3->dev;

 VAR_4 = FUNC_2(VAR_6, VAR_3->adapter,
       VAR_3->addr + VAR_1);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_3(VAR_4, VAR_2);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_0->client[VAR_1].client = VAR_4;
 VAR_0->client[VAR_1].regmap = VAR_5;

 return 0;
}
