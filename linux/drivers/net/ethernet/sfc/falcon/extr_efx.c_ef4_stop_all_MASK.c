
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_nic {int net_dev; TYPE_1__* type; int stats_lock; int port_enabled; } ;
struct TYPE_2__ {int (* stop_stats ) (struct ef4_nic*) ;int (* update_stats ) (struct ef4_nic*,int *,int *) ;int (* pull_stats ) (struct ef4_nic*) ;} ;


 int FUNC_0 (struct ef4_nic*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ef4_nic*) ;
 int FUNC_3 (struct ef4_nic*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ef4_nic*) ;
 int FUNC_10 (struct ef4_nic*,int *,int *) ;
 int FUNC_11 (struct ef4_nic*) ;

__attribute__((used)) static void FUNC_12(struct ef4_nic *VAR_0)
{
 FUNC_0(VAR_0);


 if (!VAR_0->port_enabled)
  return;




 VAR_0->type->pull_stats(VAR_0);
 FUNC_7(&VAR_0->stats_lock);
 VAR_0->type->update_stats(VAR_0, ((void*)0), ((void*)0));
 FUNC_8(&VAR_0->stats_lock);
 VAR_0->type->stop_stats(VAR_0);
 FUNC_3(VAR_0);





 FUNC_1(FUNC_5(VAR_0->net_dev) &&
  FUNC_4(VAR_0->net_dev));
 FUNC_6(VAR_0->net_dev);

 FUNC_2(VAR_0);
}
