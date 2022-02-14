
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct power_supply {int removing; TYPE_1__ dev; int deferred_register_work; int changed_work; int use_cnt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct power_supply*) ;
 int FUNC_7 (struct power_supply*) ;
 int FUNC_8 (struct power_supply*) ;
 int FUNC_9 (struct power_supply*) ;
 int FUNC_10 (int *,char*) ;

void FUNC_11(struct power_supply *VAR_0)
{
 FUNC_0(FUNC_1(&VAR_0->use_cnt));
 VAR_0->removing = 1;
 FUNC_3(&VAR_0->changed_work);
 FUNC_2(&VAR_0->deferred_register_work);
 FUNC_10(&VAR_0->dev.kobj, "powers");
 FUNC_6(VAR_0);
 FUNC_7(VAR_0);
 FUNC_8(VAR_0);
 FUNC_9(VAR_0);
 FUNC_4(&VAR_0->dev, 0);
 FUNC_5(&VAR_0->dev);
}
