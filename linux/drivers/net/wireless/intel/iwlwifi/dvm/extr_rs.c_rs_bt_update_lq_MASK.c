
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_scale_tbl_info {int current_rate; } ;
struct iwl_rxon_context {int dummy; } ;
struct iwl_priv {int bt_full_concurrent; scalar_t__ bt_traffic_load; scalar_t__ last_bt_traffic_load; int bt_full_concurrency; int workqueue; scalar_t__ bt_ant_couple_ok; scalar_t__ bt_ci_compliance; } ;
struct iwl_lq_sta {size_t active_tbl; int lq; struct iwl_scale_tbl_info* lq_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_priv*,struct iwl_rxon_context*,int *,int ,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct iwl_priv*,struct iwl_lq_sta*,int ) ;

__attribute__((used)) static void FUNC_3(struct iwl_priv *VAR_1, struct iwl_rxon_context *VAR_2,
       struct iwl_lq_sta *VAR_3)
{
 struct iwl_scale_tbl_info *VAR_4;
 bool VAR_5 = VAR_1->bt_full_concurrent;

 if (VAR_1->bt_ant_couple_ok) {




  if (VAR_1->bt_ci_compliance && VAR_1->bt_ant_couple_ok)
   VAR_5 = 1;
  else
   VAR_5 = 0;
 }
 if ((VAR_1->bt_traffic_load != VAR_1->last_bt_traffic_load) ||
     (VAR_1->bt_full_concurrent != VAR_5)) {
  VAR_1->bt_full_concurrent = VAR_5;
  VAR_1->last_bt_traffic_load = VAR_1->bt_traffic_load;


  VAR_4 = &(VAR_3->lq_info[VAR_3->active_tbl]);
  FUNC_2(VAR_1, VAR_3, VAR_4->current_rate);
  FUNC_0(VAR_1, VAR_2, &VAR_3->lq, VAR_0, 0);

  FUNC_1(VAR_1->workqueue, &VAR_1->bt_full_concurrency);
 }
}
