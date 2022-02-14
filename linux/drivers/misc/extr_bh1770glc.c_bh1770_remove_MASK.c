
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_client {int dev; int irq; } ;
struct bh1770_chip {int prox_work; TYPE_1__* pdata; TYPE_3__* client; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;
struct TYPE_4__ {int (* release_resources ) () ;} ;


 int VAR_0 ;
 int FUNC_0 (struct bh1770_chip*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,struct bh1770_chip*) ;
 struct bh1770_chip* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_1)
{
 struct bh1770_chip *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_1->irq, VAR_2);

 FUNC_8(&VAR_2->client->dev.kobj,
   &VAR_0);

 if (VAR_2->pdata->release_resources)
  VAR_2->pdata->release_resources();

 FUNC_1(&VAR_2->prox_work);

 if (!FUNC_6(&VAR_1->dev))
  FUNC_0(VAR_2);

 FUNC_4(&VAR_1->dev);
 FUNC_5(&VAR_1->dev);

 return 0;
}
