
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct i2c_client {int dev; } ;
struct fc2580_dev {int active; int regmap; struct i2c_client* client; } ;
struct TYPE_3__ {int val; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*,...) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct fc2580_dev *VAR_1)
{
 struct i2c_client *VAR_2 = VAR_1->client;
 int VAR_3, VAR_4;

 FUNC_1(&VAR_2->dev, "\n");

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  VAR_3 = FUNC_2(VAR_1->regmap, VAR_0[VAR_4].reg,
    VAR_0[VAR_4].val);
  if (VAR_3)
   goto err;
 }

 VAR_1->active = 1;
 return 0;
err:
 FUNC_1(&VAR_2->dev, "failed=%d\n", VAR_3);
 return VAR_3;
}
