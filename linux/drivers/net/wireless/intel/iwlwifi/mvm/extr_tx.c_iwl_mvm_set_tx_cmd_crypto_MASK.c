
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct sk_buff {int * data; } ;
struct iwl_tx_cmd {int sec_ctl; int * key; } ;
struct iwl_mvm {int dummy; } ;
struct TYPE_2__ {struct ieee80211_key_conf* hw_key; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_key_conf {int cipher; int keyidx; int hw_key_idx; int keylen; int key; int tx_pn; } ;
typedef enum iwl_tx_cmd_sec_ctrl { ____Placeholder_iwl_tx_cmd_sec_ctrl } iwl_tx_cmd_sec_ctrl ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;







 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_key_conf*,struct sk_buff*,int *) ;
 int FUNC_2 (int *,struct ieee80211_key_conf*,int ) ;
 int FUNC_3 (struct ieee80211_tx_info*,struct iwl_tx_cmd*) ;
 int FUNC_4 (struct ieee80211_tx_info*,int *) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct iwl_mvm *VAR_9,
          struct ieee80211_tx_info *VAR_10,
          struct iwl_tx_cmd *VAR_11,
          struct sk_buff *VAR_12,
          int VAR_13)
{
 struct ieee80211_key_conf *VAR_14 = VAR_10->control.hw_key;
 u8 *VAR_15 = VAR_12->data + VAR_13;
 enum iwl_tx_cmd_sec_ctrl VAR_16 = VAR_0;
 u64 VAR_17;

 switch (VAR_14->cipher) {
 case 134:
  FUNC_3(VAR_10, VAR_11);
  FUNC_4(VAR_10, VAR_15);
  break;

 case 130:
  VAR_11->sec_ctl = VAR_5;
  VAR_17 = FUNC_0(&VAR_14->tx_pn);
  FUNC_2(VAR_15, VAR_14, VAR_17);
  FUNC_1(VAR_14, VAR_12, VAR_11->key);
  break;

 case 129:
  VAR_11->sec_ctl |= VAR_3;

 case 128:
  VAR_11->sec_ctl |= VAR_6 |
   ((VAR_14->keyidx << VAR_8) &
     VAR_7);

  FUNC_5(&VAR_11->key[3], VAR_14->key, VAR_14->keylen);
  break;
 case 132:
 case 131:
  VAR_16 = VAR_2;

 case 133:






  VAR_11->sec_ctl |= VAR_16 | VAR_4;
  VAR_11->key[0] = VAR_14->hw_key_idx;
  FUNC_4(VAR_10, VAR_15);
  break;
 default:
  VAR_11->sec_ctl |= VAR_1;
 }
}
