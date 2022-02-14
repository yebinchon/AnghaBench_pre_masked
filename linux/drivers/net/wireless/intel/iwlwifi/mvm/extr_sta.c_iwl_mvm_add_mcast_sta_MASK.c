
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct iwl_trans_txq_scd_cfg {int aggregate; int frame_limit; int tid; int sta_id; int fifo; } ;
struct iwl_mvm_int_sta {int sta_id; int tfd_queue_msk; } ;
struct iwl_mvm_vif {int cab_queue; int color; int id; struct iwl_mvm_int_sta mcast_sta; } ;
struct iwl_mvm {TYPE_1__* fw; int mutex; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct TYPE_2__ {int ucode_capa; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (struct iwl_mvm*,struct iwl_mvm_int_sta*,int const*,int ,int ) ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_mvm_int_sta*) ;
 int FUNC_5 (struct iwl_mvm*,int *,int,int ,struct iwl_trans_txq_scd_cfg*,unsigned int) ;
 unsigned int FUNC_6 (struct iwl_mvm*,struct ieee80211_vif*,int,int) ;
 scalar_t__ FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (struct iwl_mvm*,int ,int ,unsigned int) ;
 struct iwl_mvm_vif* FUNC_9 (struct ieee80211_vif*) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct iwl_mvm *VAR_8, struct ieee80211_vif *VAR_9)
{
 struct iwl_mvm_vif *VAR_10 = FUNC_9(VAR_9);
 struct iwl_mvm_int_sta *VAR_11 = &VAR_10->mcast_sta;
 static const u8 VAR_12[] = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00};
 const u8 *VAR_13 = VAR_12;
 struct iwl_trans_txq_scd_cfg VAR_14 = {
  .fifo = VAR_9->type == VAR_7 ?
   VAR_4 : VAR_3,
  .sta_id = VAR_11->sta_id,
  .tid = 0,
  .aggregate = 0,
  .frame_limit = VAR_1,
 };
 unsigned int VAR_15 = FUNC_6(VAR_8, VAR_9, 0, 0);
 int VAR_16;

 FUNC_10(&VAR_8->mutex);

 if (FUNC_1(VAR_9->type != VAR_7 &&
      VAR_9->type != VAR_6))
  return -VAR_0;







 if (VAR_9->type == VAR_6)
  VAR_10->cab_queue = VAR_2;





 if (!FUNC_7(VAR_8) &&
     FUNC_2(&VAR_8->fw->ucode_capa, VAR_5)) {
  FUNC_5(VAR_8, ((void*)0), VAR_10->cab_queue, 0, &VAR_14,
       VAR_15);
  VAR_11->tfd_queue_msk |= FUNC_0(VAR_10->cab_queue);
 }
 VAR_16 = FUNC_3(VAR_8, VAR_11, VAR_13,
      VAR_10->id, VAR_10->color);
 if (VAR_16)
  goto err;
 if (FUNC_7(VAR_8)) {
  int VAR_17 = FUNC_8(VAR_8, VAR_11->sta_id,
          0,
          VAR_15);
  if (VAR_17 < 0) {
   VAR_16 = VAR_17;
   goto err;
  }
  VAR_10->cab_queue = VAR_17;
 } else if (!FUNC_2(&VAR_8->fw->ucode_capa,
          VAR_5))
  FUNC_5(VAR_8, ((void*)0), VAR_10->cab_queue, 0, &VAR_14,
       VAR_15);

 return 0;
err:
 FUNC_4(VAR_8, VAR_11);
 return VAR_16;
}
