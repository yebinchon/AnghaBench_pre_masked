
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct falcon_nic_data {scalar_t__ stats_disable_count; } ;
struct ef4_nic {int stats_lock; struct falcon_nic_data* nic_data; } ;


 int FUNC_0 (struct ef4_nic*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ef4_nic *VAR_0)
{
 struct falcon_nic_data *VAR_1 = VAR_0->nic_data;

 FUNC_1(&VAR_0->stats_lock);
 if (--VAR_1->stats_disable_count == 0)
  FUNC_0(VAR_0);
 FUNC_2(&VAR_0->stats_lock);
}
