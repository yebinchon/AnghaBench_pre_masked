
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct iwl_mvm_reorder_buffer {int reorder_timer; int lock; int buf_size; int head_sn; } ;
struct iwl_mvm_delba_data {size_t baid; } ;
struct iwl_mvm_baid_data {size_t sta_id; struct iwl_mvm_reorder_buffer* reorder_buf; } ;
struct iwl_mvm {int * fw_id_to_mac_id; int * baid_map; } ;
struct ieee80211_sta {int dummy; } ;


 int FUNC_0 (struct ieee80211_sta*) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_1 (int,char*,size_t) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_sta*,int *,struct iwl_mvm_baid_data*,struct iwl_mvm_reorder_buffer*,int ,int ) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct iwl_mvm *VAR_1, int VAR_2,
      struct iwl_mvm_delba_data *VAR_3)
{
 struct iwl_mvm_baid_data *VAR_4;
 struct ieee80211_sta *VAR_5;
 struct iwl_mvm_reorder_buffer *VAR_6;
 u8 VAR_7 = VAR_3->baid;

 if (FUNC_1(VAR_7 >= VAR_0, "invalid BAID: %x\n", VAR_7))
  return;

 FUNC_7();

 VAR_4 = FUNC_6(VAR_1->baid_map[VAR_7]);
 if (FUNC_2(!VAR_4))
  goto out;

 VAR_5 = FUNC_6(VAR_1->fw_id_to_mac_id[VAR_4->sta_id]);
 if (FUNC_2(FUNC_0(VAR_5)))
  goto out;

 VAR_6 = &VAR_4->reorder_buf[VAR_2];


 FUNC_9(&VAR_6->lock);
 FUNC_5(VAR_1, VAR_5, ((void*)0), VAR_4, VAR_6,
          FUNC_4(VAR_6->head_sn,
      VAR_6->buf_size),
          0);
 FUNC_10(&VAR_6->lock);
 FUNC_3(&VAR_6->reorder_timer);

out:
 FUNC_8();
}
