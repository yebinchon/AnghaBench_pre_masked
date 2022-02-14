
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct i2c_client {int dev; int irq; } ;
struct apds990x_chip {int regs; TYPE_2__* pdata; TYPE_1__* client; } ;
struct TYPE_6__ {int kobj; } ;
struct TYPE_5__ {int (* release_resources ) () ;} ;
struct TYPE_4__ {TYPE_3__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct apds990x_chip*) ;
 int FUNC_2 (int ,struct apds990x_chip*) ;
 struct apds990x_chip* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct apds990x_chip*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_1)
{
 struct apds990x_chip *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_1->irq, VAR_2);
 FUNC_10(&VAR_2->client->dev.kobj,
   VAR_0);

 if (VAR_2->pdata && VAR_2->pdata->release_resources)
  VAR_2->pdata->release_resources();

 if (!FUNC_7(&VAR_1->dev))
  FUNC_1(VAR_2);

 FUNC_5(&VAR_1->dev);
 FUNC_6(&VAR_1->dev);

 FUNC_8(FUNC_0(VAR_2->regs), VAR_2->regs);

 FUNC_4(VAR_2);
 return 0;
}
