
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct iwl_mvm_txq {int txq_id; } ;
struct iwl_mvm {TYPE_1__* queue_info; } ;
struct ieee80211_sta {int dummy; } ;
struct TYPE_2__ {int tid_bitmap; size_t ra_sta_id; size_t txq_tid; int mac80211_ac; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_mvm*,char*,int,int) ;
 int FUNC_2 (struct iwl_mvm*,char*,int,size_t) ;
 size_t VAR_1 ;
 struct iwl_mvm_txq* FUNC_3 (struct ieee80211_sta*,size_t) ;
 int * VAR_2 ;

__attribute__((used)) static bool FUNC_4(struct iwl_mvm *VAR_3,
           struct ieee80211_sta *VAR_4,
           int VAR_5, u8 VAR_6, u8 VAR_7)
{
 bool VAR_8 = 1;


 if (VAR_3->queue_info[VAR_5].tid_bitmap & FUNC_0(VAR_7)) {
  FUNC_2(VAR_3, "Trying to enable TXQ %d with existing TID %d\n",
   VAR_5, VAR_7);
  return 0;
 }


 if (VAR_3->queue_info[VAR_5].tid_bitmap)
  VAR_8 = 0;

 VAR_3->queue_info[VAR_5].tid_bitmap |= FUNC_0(VAR_7);
 VAR_3->queue_info[VAR_5].ra_sta_id = VAR_6;

 if (VAR_8) {
  if (VAR_7 != VAR_1)
   VAR_3->queue_info[VAR_5].mac80211_ac =
    VAR_2[VAR_7];
  else
   VAR_3->queue_info[VAR_5].mac80211_ac = VAR_0;

  VAR_3->queue_info[VAR_5].txq_tid = VAR_7;
 }

 if (VAR_4) {
  struct iwl_mvm_txq *VAR_9 =
   FUNC_3(VAR_4, VAR_7);

  VAR_9->txq_id = VAR_5;
 }

 FUNC_1(VAR_3,
       "Enabling TXQ #%d tids=0x%x\n",
       VAR_5, VAR_3->queue_info[VAR_5].tid_bitmap);

 return VAR_8;
}
