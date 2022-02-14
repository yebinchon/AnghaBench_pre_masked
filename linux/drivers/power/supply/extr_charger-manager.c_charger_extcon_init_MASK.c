
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct charger_manager {int dummy; } ;
struct TYPE_2__ {int notifier_call; } ;
struct charger_cable {int name; int extcon_name; TYPE_1__ nb; int extcon_dev; int wq; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,TYPE_1__*) ;
 int FUNC_2 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct charger_manager *VAR_2,
  struct charger_cable *VAR_3)
{
 int VAR_4;






 FUNC_0(&VAR_3->wq, VAR_1);
 VAR_3->nb.notifier_call = VAR_0;
 VAR_4 = FUNC_1(&VAR_3->extcon_dev,
   VAR_3->extcon_name, VAR_3->name, &VAR_3->nb);
 if (VAR_4 < 0) {
  FUNC_2("Cannot register extcon_dev for %s(cable: %s)\n",
   VAR_3->extcon_name, VAR_3->name);
 }

 return VAR_4;
}
