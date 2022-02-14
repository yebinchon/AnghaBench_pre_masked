
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct napi_struct {int dummy; } ;
struct iwl_mvm_reorder_buffer {int lock; } ;
struct iwl_mvm_baid_data {size_t sta_id; struct iwl_mvm_reorder_buffer* reorder_buf; } ;
struct iwl_mvm {int * fw_id_to_mac_id; int * baid_map; } ;
struct ieee80211_sta {int dummy; } ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_sta*) ;
 int FUNC_2 (struct iwl_mvm*,char*,size_t,int ) ;
 size_t VAR_0 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_sta*,struct napi_struct*,struct iwl_mvm_baid_data*,struct iwl_mvm_reorder_buffer*,int ,int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct iwl_mvm *VAR_1,
           struct napi_struct *VAR_2,
           u8 VAR_3, u16 VAR_4, int VAR_5,
           u32 VAR_6)
{
 struct ieee80211_sta *VAR_7;
 struct iwl_mvm_reorder_buffer *VAR_8;
 struct iwl_mvm_baid_data *VAR_9;

 FUNC_2(VAR_1, "Frame release notification for BAID %u, NSSN %d\n",
       VAR_3, VAR_4);

 if (FUNC_3(VAR_3 == VAR_0 ||
    VAR_3 >= FUNC_0(VAR_1->baid_map)))
  return;

 FUNC_6();

 VAR_9 = FUNC_5(VAR_1->baid_map[VAR_3]);
 if (FUNC_3(!VAR_9))
  goto out;

 VAR_7 = FUNC_5(VAR_1->fw_id_to_mac_id[VAR_9->sta_id]);
 if (FUNC_3(FUNC_1(VAR_7)))
  goto out;

 VAR_8 = &VAR_9->reorder_buf[VAR_5];

 FUNC_8(&VAR_8->lock);
 FUNC_4(VAR_1, VAR_7, VAR_2, VAR_9,
          VAR_8, VAR_4, VAR_6);
 FUNC_9(&VAR_8->lock);

out:
 FUNC_7();
}
