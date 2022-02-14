
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct TYPE_2__ {scalar_t__ notifier_call; } ;
struct bq2415x_device {int name; int dev; int id; int notify_node; TYPE_1__ nb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bq2415x_device*) ;
 int FUNC_1 (struct bq2415x_device*) ;
 int FUNC_2 (int ,char*) ;
 struct bq2415x_device* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_2)
{
 struct bq2415x_device *VAR_3 = FUNC_3(VAR_2);

 if (VAR_3->nb.notifier_call)
  FUNC_9(&VAR_3->nb);

 FUNC_8(VAR_3->notify_node);
 FUNC_0(VAR_3);

 FUNC_1(VAR_3);

 FUNC_6(&VAR_1);
 FUNC_4(&VAR_0, VAR_3->id);
 FUNC_7(&VAR_1);

 FUNC_2(VAR_3->dev, "driver unregistered\n");

 FUNC_5(VAR_3->name);

 return 0;
}
