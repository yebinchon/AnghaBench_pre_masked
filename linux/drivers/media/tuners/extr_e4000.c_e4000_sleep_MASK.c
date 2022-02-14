
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct e4000_dev {int active; int regmap; struct i2c_client* client; } ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct e4000_dev *VAR_0)
{
 struct i2c_client *VAR_1 = VAR_0->client;
 int VAR_2;

 FUNC_0(&VAR_1->dev, "\n");

 VAR_0->active = 0;

 VAR_2 = FUNC_1(VAR_0->regmap, 0x00, 0x00);
 if (VAR_2)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_1->dev, "failed=%d\n", VAR_2);
 return VAR_2;
}
