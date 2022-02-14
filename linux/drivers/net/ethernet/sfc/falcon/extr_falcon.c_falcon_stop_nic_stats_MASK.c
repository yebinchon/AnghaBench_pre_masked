
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct falcon_nic_data {scalar_t__ stats_pending; int stats_timer; int stats_disable_count; } ;
struct ef4_nic {int stats_lock; struct falcon_nic_data* nic_data; } ;


 scalar_t__ FUNC_0 (struct ef4_nic*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ef4_nic*) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct ef4_nic *VAR_0)
{
 struct falcon_nic_data *VAR_1 = VAR_0->nic_data;
 int VAR_2;

 FUNC_3();

 FUNC_5(&VAR_0->stats_lock);
 ++VAR_1->stats_disable_count;
 FUNC_6(&VAR_0->stats_lock);

 FUNC_1(&VAR_1->stats_timer);



 for (VAR_2 = 0; VAR_2 < 4 && VAR_1->stats_pending; VAR_2++) {
  if (FUNC_0(VAR_0))
   break;
  FUNC_4(1);
 }

 FUNC_5(&VAR_0->stats_lock);
 FUNC_2(VAR_0);
 FUNC_6(&VAR_0->stats_lock);
}
