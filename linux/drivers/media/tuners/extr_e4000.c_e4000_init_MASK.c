
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct e4000_dev {int active; int regmap; struct i2c_client* client; } ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int,char*,int) ;
 int FUNC_2 (int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct e4000_dev *VAR_0)
{
 struct i2c_client *VAR_1 = VAR_0->client;
 int VAR_2;

 FUNC_0(&VAR_1->dev, "\n");


 VAR_2 = FUNC_2(VAR_0->regmap, 0x00, 0x01);
 if (VAR_2)
  goto err;


 VAR_2 = FUNC_2(VAR_0->regmap, 0x06, 0x00);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_2(VAR_0->regmap, 0x7a, 0x96);
 if (VAR_2)
  goto err;


 VAR_2 = FUNC_1(VAR_0->regmap, 0x7e, "\x01\xfe", 2);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_2(VAR_0->regmap, 0x82, 0x00);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_2(VAR_0->regmap, 0x24, 0x05);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_1(VAR_0->regmap, 0x87, "\x20\x01", 2);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_1(VAR_0->regmap, 0x9f, "\x7f\x07", 2);
 if (VAR_2)
  goto err;


 VAR_2 = FUNC_2(VAR_0->regmap, 0x2d, 0x1f);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_1(VAR_0->regmap, 0x70, "\x01\x01", 2);
 if (VAR_2)
  goto err;


 VAR_2 = FUNC_2(VAR_0->regmap, 0x1a, 0x17);
 if (VAR_2)
  goto err;

 VAR_2 = FUNC_2(VAR_0->regmap, 0x1f, 0x1a);
 if (VAR_2)
  goto err;

 VAR_0->active = 1;

 return 0;
err:
 FUNC_0(&VAR_1->dev, "failed=%d\n", VAR_2);
 return VAR_2;
}
