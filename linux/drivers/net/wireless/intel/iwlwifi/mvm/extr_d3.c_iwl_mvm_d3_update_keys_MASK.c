
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int unicast_rsc; int tsc; } ;
struct TYPE_10__ {int pn; } ;
struct TYPE_11__ {TYPE_3__ tsc; int unicast_rsc; } ;
union iwl_all_tsc_rsc {TYPE_5__ tkip; TYPE_4__ aes; } ;
typedef int u64 ;
struct iwl_mvm_d3_gtk_iter_data {int unhandled_cipher; int cipher; TYPE_7__* status; int mvm; struct ieee80211_key_conf* last_gtk; scalar_t__ find_phase; int num_keys; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_13__ {int iv32; int iv16; } ;
struct ieee80211_key_seq {TYPE_6__ tkip; } ;
struct ieee80211_key_conf {int cipher; int tx_pn; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_14__ {scalar_t__ num_of_gtk_rekeys; TYPE_2__* gtk; } ;
struct TYPE_8__ {union iwl_all_tsc_rsc all_tsc_rsc; } ;
struct TYPE_9__ {TYPE_1__ rsc; } ;






 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct ieee80211_key_conf*) ;
 int FUNC_2 (int ,int ,struct ieee80211_sta*,struct ieee80211_key_conf*) ;
 int FUNC_3 (int ,struct ieee80211_key_conf*,TYPE_7__*) ;
 int FUNC_4 (int ,struct ieee80211_key_conf*) ;
 int FUNC_5 (int *,struct ieee80211_key_seq*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_0,
       struct ieee80211_vif *VAR_1,
       struct ieee80211_sta *VAR_2,
       struct ieee80211_key_conf *VAR_3,
       void *VAR_4)
{
 struct iwl_mvm_d3_gtk_iter_data *VAR_5 = VAR_4;

 if (VAR_5->unhandled_cipher)
  return;

 switch (VAR_3->cipher) {
 case 128:
 case 129:

  return;
 case 131:
 case 130:

  break;
 default:

  VAR_5->unhandled_cipher = 1;
  return;
 }

 VAR_5->num_keys++;





 if (VAR_2) {
  struct ieee80211_key_seq VAR_6 = {};
  union iwl_all_tsc_rsc *VAR_7 =
   &VAR_5->status->gtk[0].rsc.all_tsc_rsc;

  if (VAR_5->find_phase)
   return;

  switch (VAR_3->cipher) {
  case 131:
   FUNC_2(VAR_5->mvm, VAR_7->aes.unicast_rsc,
            VAR_2, VAR_3);
   FUNC_0(&VAR_3->tx_pn, FUNC_6(VAR_7->aes.tsc.pn));
   break;
  case 130:
   FUNC_5(&VAR_7->tkip.tsc, &VAR_6);
   FUNC_4(VAR_7->tkip.unicast_rsc, VAR_3);
   FUNC_0(&VAR_3->tx_pn,
         (u64)VAR_6.tkip.iv16 |
         ((u64)VAR_6.tkip.iv32 << 16));
   break;
  }


  return;
 }

 if (VAR_5->find_phase) {
  VAR_5->last_gtk = VAR_3;
  VAR_5->cipher = VAR_3->cipher;
  return;
 }

 if (VAR_5->status->num_of_gtk_rekeys)
  FUNC_1(VAR_3);
 else if (VAR_5->last_gtk == VAR_3)
  FUNC_3(VAR_5->mvm, VAR_3, VAR_5->status);
}
