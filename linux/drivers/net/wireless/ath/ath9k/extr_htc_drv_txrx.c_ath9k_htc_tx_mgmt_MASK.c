
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u8 ;
struct tx_mgmt_hdr {scalar_t__ key_type; int epid; void* keyix; void* cookie; scalar_t__ flags; scalar_t__ tidno; void* vif_idx; void* node_idx; int type; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_8__ {TYPE_3__* hw_key; } ;
struct ieee80211_tx_info {TYPE_4__ control; } ;
struct TYPE_5__ {int timestamp; } ;
struct TYPE_6__ {TYPE_1__ probe_resp; } ;
struct ieee80211_mgmt {TYPE_2__ u; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ath9k_htc_vif {int tsfadjust; } ;
struct ath9k_htc_tx_ctl {scalar_t__ key_type; int epid; void* keyix; void* cookie; scalar_t__ flags; scalar_t__ tidno; void* vif_idx; void* node_idx; int type; } ;
struct ath9k_htc_priv {int mgmt_ep; } ;
typedef int mgmt_hdr ;
struct TYPE_7__ {void* hw_key_idx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct tx_mgmt_hdr* FUNC_0 (struct sk_buff*) ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void**,void**,int) ;
 int FUNC_5 (struct tx_mgmt_hdr*,int ,int) ;
 void** FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct ath9k_htc_priv *VAR_3,
         struct ath9k_htc_vif *VAR_4,
         struct sk_buff *VAR_5,
         u8 VAR_6, u8 VAR_7, u8 VAR_8)
{
 struct ieee80211_tx_info *VAR_9 = FUNC_1(VAR_5);
 struct ieee80211_mgmt *VAR_10;
 struct ieee80211_hdr *VAR_11;
 struct tx_mgmt_hdr VAR_12;
 struct ath9k_htc_tx_ctl *VAR_13;
 u8 *VAR_14;

 VAR_13 = FUNC_0(VAR_5);
 VAR_11 = (struct ieee80211_hdr *) VAR_5->data;

 FUNC_5(VAR_13, 0, sizeof(*VAR_13));
 FUNC_5(&VAR_12, 0, sizeof(struct tx_mgmt_hdr));





 if (VAR_4 && FUNC_7(FUNC_3(VAR_11->frame_control))) {
  VAR_10 = (struct ieee80211_mgmt *)VAR_5->data;
  VAR_10->u.probe_resp.timestamp = VAR_4->tsfadjust;
 }

 VAR_13->type = VAR_0;

 VAR_12.node_idx = VAR_6;
 VAR_12.vif_idx = VAR_7;
 VAR_12.tidno = 0;
 VAR_12.flags = 0;
 VAR_12.cookie = VAR_8;

 VAR_12.key_type = FUNC_2(VAR_5);
 if (VAR_12.key_type == VAR_1)
  VAR_12.keyix = (u8) VAR_2;
 else
  VAR_12.keyix = VAR_9->control.hw_key->hw_key_idx;

 VAR_14 = FUNC_6(VAR_5, sizeof(VAR_12));
 FUNC_4(VAR_14, (u8 *) &VAR_12, sizeof(VAR_12));
 VAR_13->epid = VAR_3->mgmt_ep;
}
