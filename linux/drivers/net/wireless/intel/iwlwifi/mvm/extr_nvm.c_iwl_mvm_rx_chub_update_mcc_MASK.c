
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_mvm {TYPE_1__* hw; int mutex; } ;
struct iwl_mcc_chub_notif {scalar_t__ source_id; int mcc; } ;
struct ieee80211_regdomain {int dummy; } ;
typedef enum iwl_mcc_source { ____Placeholder_iwl_mcc_source } iwl_mcc_source ;
struct TYPE_2__ {int wiphy; } ;


 scalar_t__ FUNC_0 (struct ieee80211_regdomain*) ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int FUNC_2 (struct iwl_mvm*,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int) ;
 struct ieee80211_regdomain* FUNC_4 (int ,char*,int,int *) ;
 int FUNC_5 (struct iwl_mvm*) ;
 int FUNC_6 (struct iwl_mvm*) ;
 scalar_t__ FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (struct ieee80211_regdomain*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,struct ieee80211_regdomain*) ;
 struct iwl_rx_packet* FUNC_12 (struct iwl_rx_cmd_buffer*) ;

void FUNC_13(struct iwl_mvm *VAR_1,
    struct iwl_rx_cmd_buffer *VAR_2)
{
 struct iwl_rx_packet *VAR_3 = FUNC_12(VAR_2);
 struct iwl_mcc_chub_notif *VAR_4 = (void *)VAR_3->data;
 enum iwl_mcc_source VAR_5;
 char VAR_6[3];
 struct ieee80211_regdomain *VAR_7;
 int VAR_8;

 FUNC_10(&VAR_1->mutex);

 if (FUNC_7(VAR_1) && VAR_4->source_id == VAR_0) {
  FUNC_2(VAR_1, "Ignore mcc update while associated\n");
  return;
 }

 if (FUNC_3(!FUNC_6(VAR_1)))
  return;

 VAR_6[0] = FUNC_9(VAR_4->mcc) >> 8;
 VAR_6[1] = FUNC_9(VAR_4->mcc) & 0xff;
 VAR_6[2] = '\0';
 VAR_5 = VAR_4->source_id;

 FUNC_2(VAR_1,
        "RX: received chub update mcc cmd (mcc '%s' src %d)\n",
        VAR_6, VAR_5);
 VAR_7 = FUNC_4(VAR_1->hw->wiphy, VAR_6, VAR_5, ((void*)0));
 if (FUNC_0(VAR_7))
  return;

 VAR_8 = FUNC_5(VAR_1);
 if (VAR_8 < 0)
  FUNC_1(VAR_1, "SAR WGDS is disabled (%d)\n",
          VAR_8);
 else
  FUNC_1(VAR_1, "SAR WGDS: geo profile %d is configured\n",
          VAR_8);

 FUNC_11(VAR_1->hw->wiphy, VAR_7);
 FUNC_8(VAR_7);
}
