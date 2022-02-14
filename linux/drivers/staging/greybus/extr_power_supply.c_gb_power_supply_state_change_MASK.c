
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct gb_power_supply_prop {scalar_t__ val; } ;
struct gb_power_supply {int pm_acquired; int supply_lock; } ;
struct gb_connection {TYPE_1__* bundle; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 struct gb_connection* FUNC_3 (struct gb_power_supply*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct gb_power_supply *VAR_1,
      struct gb_power_supply_prop *VAR_2)
{
 struct gb_connection *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;





 FUNC_4(&VAR_1->supply_lock);

 if ((VAR_2->val == VAR_0) &&
     !VAR_1->pm_acquired) {
  VAR_4 = FUNC_1(VAR_3->bundle);
  if (VAR_4)
   FUNC_0(&VAR_3->bundle->dev,
    "Fail to set wake lock for charging state\n");
  else
   VAR_1->pm_acquired = 1;
 } else {
  if (VAR_1->pm_acquired) {
   VAR_4 = FUNC_2(VAR_3->bundle);
   if (VAR_4)
    FUNC_0(&VAR_3->bundle->dev,
     "Fail to set wake unlock for none charging\n");
   else
    VAR_1->pm_acquired = 0;
  }
 }

 FUNC_5(&VAR_1->supply_lock);
}
