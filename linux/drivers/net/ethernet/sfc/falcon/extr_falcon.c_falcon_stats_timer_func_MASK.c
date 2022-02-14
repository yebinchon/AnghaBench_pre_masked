
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct falcon_nic_data {scalar_t__ stats_disable_count; struct ef4_nic* efx; } ;
struct ef4_nic {int stats_lock; } ;


 int FUNC_0 (struct ef4_nic*) ;
 int FUNC_1 (struct ef4_nic*) ;
 struct falcon_nic_data* FUNC_2 (int ,struct timer_list*,int ) ;
 struct falcon_nic_data* VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_2)
{
 struct falcon_nic_data *VAR_3 = FUNC_2(VAR_3, VAR_2,
            VAR_1);
 struct ef4_nic *VAR_4 = VAR_3->efx;

 FUNC_3(&VAR_4->stats_lock);

 FUNC_0(VAR_4);
 if (VAR_3->stats_disable_count == 0)
  FUNC_1(VAR_4);

 FUNC_4(&VAR_4->stats_lock);
}
