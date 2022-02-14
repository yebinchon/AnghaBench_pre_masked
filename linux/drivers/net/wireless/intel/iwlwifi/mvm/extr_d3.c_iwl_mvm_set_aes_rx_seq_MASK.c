
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct iwl_mvm_sta {int * ptk_pn; } ;
struct iwl_mvm_key_pn {TYPE_2__* q; } ;
struct iwl_mvm {TYPE_1__* trans; int mutex; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_6__ {int pn; } ;
struct ieee80211_key_seq {TYPE_3__ ccmp; } ;
struct ieee80211_key_conf {size_t keyidx; } ;
struct aes_sc {int dummy; } ;
struct TYPE_5__ {int * pn; } ;
struct TYPE_4__ {int num_rx_queues; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_key_conf*,int,struct ieee80211_key_seq*) ;
 int FUNC_3 (struct aes_sc*,struct ieee80211_key_seq*) ;
 scalar_t__ FUNC_4 (struct iwl_mvm*) ;
 struct iwl_mvm_sta* FUNC_5 (struct ieee80211_sta*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ,int ) ;
 struct iwl_mvm_key_pn* FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(struct iwl_mvm *VAR_4, struct aes_sc *VAR_5,
       struct ieee80211_sta *VAR_6,
       struct ieee80211_key_conf *VAR_7)
{
 int VAR_8;

 FUNC_0(VAR_3 != VAR_1);

 if (VAR_6 && FUNC_4(VAR_4)) {
  struct iwl_mvm_sta *VAR_9;
  struct iwl_mvm_key_pn *VAR_10;

  VAR_9 = FUNC_5(VAR_6);

  VAR_10 = FUNC_8(VAR_9->ptk_pn[VAR_7->keyidx],
         FUNC_6(&VAR_4->mutex));
  if (FUNC_1(!VAR_10))
   return;

  for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
   struct ieee80211_key_seq VAR_11 = {};
   int VAR_12;

   FUNC_3(&VAR_5[VAR_8], &VAR_11);
   FUNC_2(VAR_7, VAR_8, &VAR_11);
   for (VAR_12 = 1; VAR_12 < VAR_4->trans->num_rx_queues; VAR_12++)
    FUNC_7(VAR_10->q[VAR_12].pn[VAR_8],
           VAR_11.ccmp.pn, VAR_0);
  }
 } else {
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
   struct ieee80211_key_seq VAR_13 = {};

   FUNC_3(&VAR_5[VAR_8], &VAR_13);
   FUNC_2(VAR_7, VAR_8, &VAR_13);
  }
 }
}
