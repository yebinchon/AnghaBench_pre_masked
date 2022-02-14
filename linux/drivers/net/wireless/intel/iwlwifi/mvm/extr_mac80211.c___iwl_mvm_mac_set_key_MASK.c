
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* u8 ;
struct iwl_mvm_vif {struct ieee80211_key_conf** ap_early_keys; int ap_ibss_active; } ;
struct iwl_mvm_sta {int * ptk_pn; } ;
struct iwl_mvm_key_pn {TYPE_4__* q; } ;
struct iwl_mvm {int mutex; int status; TYPE_3__* trans; } ;
struct ieee80211_vif {int type; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_11__ {int pn; } ;
struct ieee80211_key_seq {TYPE_5__ ccmp; } ;
struct ieee80211_key_conf {int keyidx; int cipher; int flags; void* hw_key_idx; } ;
struct ieee80211_hw {TYPE_2__* cipher_schemes; int n_cipher_schemes; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;
struct TYPE_12__ {scalar_t__ swcrypto; } ;
struct TYPE_10__ {int * pn; } ;
struct TYPE_9__ {int num_rx_queues; TYPE_1__* trans_cfg; } ;
struct TYPE_8__ {int cipher; } ;
struct TYPE_7__ {int gen2; } ;


 int FUNC_0 (struct ieee80211_key_conf**) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 struct iwl_mvm* FUNC_2 (struct ieee80211_hw*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (struct iwl_mvm*,char*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int ,int *) ;

 void* VAR_17 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct ieee80211_key_conf*,int,struct ieee80211_key_seq*) ;
 int FUNC_8 (struct ieee80211_hw*,int ) ;
 int FUNC_9 (struct iwl_mvm*) ;
 int FUNC_10 (struct iwl_mvm*) ;
 int FUNC_11 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*,struct ieee80211_key_conf*) ;
 int FUNC_12 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*,struct ieee80211_key_conf*,void*) ;
 struct iwl_mvm_sta* FUNC_13 (struct ieee80211_sta*) ;
 struct iwl_mvm_vif* FUNC_14 (struct ieee80211_vif*) ;
 TYPE_6__ VAR_18 ;
 int FUNC_15 (struct iwl_mvm_key_pn*,int ) ;
 struct iwl_mvm_key_pn* FUNC_16 (int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,struct iwl_mvm_key_pn*) ;
 struct iwl_mvm_key_pn* FUNC_21 (int ,int ) ;
 int VAR_19 ;
 int FUNC_22 (struct iwl_mvm_key_pn*,int,int) ;
 int FUNC_23 (int ,int *) ;

__attribute__((used)) static int FUNC_24(struct ieee80211_hw *VAR_20,
     enum set_key_cmd VAR_21,
     struct ieee80211_vif *VAR_22,
     struct ieee80211_sta *VAR_23,
     struct ieee80211_key_conf *VAR_24)
{
 struct iwl_mvm_vif *VAR_25 = FUNC_14(VAR_22);
 struct iwl_mvm *VAR_26 = FUNC_2(VAR_20);
 struct iwl_mvm_sta *VAR_27;
 struct iwl_mvm_key_pn *VAR_28;
 int VAR_29 = VAR_24->keyidx;
 int VAR_30, VAR_31;
 u8 VAR_32;

 if (VAR_18.swcrypto) {
  FUNC_1(VAR_26, "leave - hwcrypto disabled\n");
  return -VAR_4;
 }

 switch (VAR_24->cipher) {
 case 130:
  if (!VAR_26->trans->trans_cfg->gen2) {
   VAR_24->flags |= VAR_7;
   VAR_24->flags |= VAR_9;
  } else if (VAR_22->type == VAR_16) {
   VAR_24->flags |= VAR_10;
  } else {
   FUNC_1(VAR_26, "Use SW encryption for TKIP\n");
   return -VAR_4;
  }
  break;
 case 133:
 case 132:
 case 131:
  if (!FUNC_10(VAR_26))
   VAR_24->flags |= VAR_9;
  break;
 case 136:
 case 135:
 case 134:
  FUNC_6(!FUNC_8(VAR_20, VAR_13));
  break;
 case 128:
 case 129:
  if (VAR_22->type == VAR_16)
   break;
  if (FUNC_10(VAR_26))
   return -VAR_4;

  return 0;
 default:

  if (VAR_20->n_cipher_schemes &&
      VAR_20->cipher_schemes->cipher == VAR_24->cipher)
   VAR_24->flags |= VAR_9;
  else
   return -VAR_4;
 }

 switch (VAR_21) {
 case 137:
  if ((VAR_22->type == VAR_14 ||
       VAR_22->type == VAR_15) && !VAR_23) {






   if (VAR_24->cipher == 136 ||
       VAR_24->cipher == 135 ||
       VAR_24->cipher == 134)
    VAR_30 = -VAR_4;
   else
    VAR_30 = 0;

   if (VAR_24->cipher != 132 &&
       VAR_24->cipher != 131 &&
       !FUNC_10(VAR_26)) {
    VAR_24->hw_key_idx = VAR_17;
    break;
   }

   if (!VAR_25->ap_ibss_active) {
    for (VAR_31 = 0;
         VAR_31 < FUNC_0(VAR_25->ap_early_keys);
         VAR_31++) {
     if (!VAR_25->ap_early_keys[VAR_31]) {
      VAR_25->ap_early_keys[VAR_31] = VAR_24;
      break;
     }
    }

    if (VAR_31 >= FUNC_0(VAR_25->ap_early_keys))
     VAR_30 = -VAR_3;

    break;
   }
  }




  if (FUNC_23(VAR_12, &VAR_26->status) &&
      VAR_24->hw_key_idx == VAR_17) {
   FUNC_1(VAR_26,
        "skip invalid idx key programming during restart\n");
   VAR_30 = 0;
   break;
  }

  if (!FUNC_23(VAR_12, &VAR_26->status) &&
      VAR_23 && FUNC_9(VAR_26) &&
      VAR_24->flags & VAR_8 &&
      (VAR_24->cipher == 133 ||
       VAR_24->cipher == 132 ||
       VAR_24->cipher == 131)) {
   struct ieee80211_key_seq VAR_33;
   int VAR_34, VAR_35;

   VAR_27 = FUNC_13(VAR_23);
   FUNC_5(FUNC_19(VAR_27->ptk_pn[VAR_29]));
   VAR_28 = FUNC_16(FUNC_22(VAR_28, VAR_35,
           VAR_26->trans->num_rx_queues),
      VAR_5);
   if (!VAR_28) {
    VAR_30 = -VAR_2;
    break;
   }

   for (VAR_34 = 0; VAR_34 < VAR_11; VAR_34++) {
    FUNC_7(VAR_24, VAR_34, &VAR_33);
    for (VAR_35 = 0; VAR_35 < VAR_26->trans->num_rx_queues; VAR_35++)
     FUNC_18(VAR_28->q[VAR_35].pn[VAR_34],
            VAR_33.ccmp.pn,
            VAR_6);
   }

   FUNC_20(VAR_27->ptk_pn[VAR_29], VAR_28);
  }


  if (FUNC_23(VAR_12, &VAR_26->status))
   VAR_32 = VAR_24->hw_key_idx;
  else
   VAR_32 = VAR_17;

  FUNC_1(VAR_26, "set hwcrypto key\n");
  VAR_30 = FUNC_12(VAR_26, VAR_22, VAR_23, VAR_24, VAR_32);
  if (VAR_30) {
   FUNC_3(VAR_26, "set key failed\n");
   VAR_24->hw_key_idx = VAR_17;






   if (FUNC_10(VAR_26))
    VAR_30 = -VAR_4;
   else
    VAR_30 = 0;
  }

  break;
 case 138:
  VAR_30 = -VAR_1;
  for (VAR_31 = 0; VAR_31 < FUNC_0(VAR_25->ap_early_keys); VAR_31++) {
   if (VAR_25->ap_early_keys[VAR_31] == VAR_24) {
    VAR_25->ap_early_keys[VAR_31] = ((void*)0);
    VAR_30 = 0;
   }
  }


  if (VAR_30 == 0)
   break;

  if (VAR_24->hw_key_idx == VAR_17) {
   VAR_30 = 0;
   break;
  }

  if (VAR_23 && FUNC_9(VAR_26) &&
      VAR_24->flags & VAR_8 &&
      (VAR_24->cipher == 133 ||
       VAR_24->cipher == 132 ||
       VAR_24->cipher == 131)) {
   VAR_27 = FUNC_13(VAR_23);
   VAR_28 = FUNC_21(
      VAR_27->ptk_pn[VAR_29],
      FUNC_17(&VAR_26->mutex));
   FUNC_4(VAR_27->ptk_pn[VAR_29], ((void*)0));
   if (VAR_28)
    FUNC_15(VAR_28, VAR_19);
  }

  FUNC_1(VAR_26, "disable hwcrypto key\n");
  VAR_30 = FUNC_11(VAR_26, VAR_22, VAR_23, VAR_24);
  break;
 default:
  VAR_30 = -VAR_0;
 }

 return VAR_30;
}
