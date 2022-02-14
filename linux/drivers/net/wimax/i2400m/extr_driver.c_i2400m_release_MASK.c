
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* net_dev; } ;
struct i2400m {int (* bus_release ) (struct i2400m*) ;int pm_notifier; TYPE_2__ wimax_dev; int recovery_ws; int reset_ws; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_2 (int,struct device*,char*,struct i2400m*) ;
 int FUNC_3 (struct i2400m*) ;
 int FUNC_4 (struct i2400m*) ;
 struct device* FUNC_5 (struct i2400m*) ;
 int VAR_0 ;
 int FUNC_6 (struct i2400m*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct i2400m*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__*) ;

void FUNC_13(struct i2400m *VAR_1)
{
 struct device *VAR_2 = FUNC_5(VAR_1);

 FUNC_2(3, VAR_2, "(i2400m %p)\n", VAR_1);
 FUNC_7(VAR_1->wimax_dev.net_dev);

 FUNC_6(VAR_1);

 FUNC_0(&VAR_1->reset_ws);
 FUNC_0(&VAR_1->recovery_ws);

 FUNC_4(VAR_1);
 FUNC_9(&VAR_1->wimax_dev.net_dev->dev.kobj,
      &VAR_0);
 FUNC_12(&VAR_1->wimax_dev);
 FUNC_10(VAR_1->wimax_dev.net_dev);
 FUNC_11(&VAR_1->pm_notifier);
 if (VAR_1->bus_release)
  VAR_1->bus_release(VAR_1);
 FUNC_3(VAR_1);
 FUNC_1(3, VAR_2, "(i2400m %p) = void\n", VAR_1);
}
