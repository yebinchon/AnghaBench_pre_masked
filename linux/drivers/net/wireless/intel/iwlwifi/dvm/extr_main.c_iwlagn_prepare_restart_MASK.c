
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct iwl_priv {int bt_full_concurrent; int bt_is_sco; int agg_q_alloc; int * queue_stop_count; int * queue_to_mac80211; void* bt_status; void* bt_traffic_load; void* bt_ci_compliance; scalar_t__ is_open; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct iwl_priv*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int) ;

void FUNC_4(struct iwl_priv *VAR_3)
{
 bool VAR_4;
 u8 VAR_5;
 u8 VAR_6;
 u8 VAR_7;
 bool VAR_8;
 int VAR_9;

 FUNC_2(&VAR_3->mutex);

 VAR_3->is_open = 0;
 VAR_4 = VAR_3->bt_full_concurrent;
 VAR_5 = VAR_3->bt_ci_compliance;
 VAR_6 = VAR_3->bt_traffic_load;
 VAR_7 = VAR_3->bt_status;
 VAR_8 = VAR_3->bt_is_sco;

 FUNC_1(VAR_3);

 VAR_3->bt_full_concurrent = VAR_4;
 VAR_3->bt_ci_compliance = VAR_5;
 VAR_3->bt_traffic_load = VAR_6;
 VAR_3->bt_status = VAR_7;
 VAR_3->bt_is_sco = VAR_8;


 for (VAR_9 = VAR_0; VAR_9 < VAR_2; VAR_9++)
  VAR_3->queue_to_mac80211[VAR_9] = VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
  FUNC_0(&VAR_3->queue_stop_count[VAR_9], 0);

 FUNC_3(VAR_3->agg_q_alloc, 0, sizeof(VAR_3->agg_q_alloc));
}
