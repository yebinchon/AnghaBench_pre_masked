
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct iwl_mvm_sta {int vif; } ;
struct iwl_mvm_reorder_buffer {scalar_t__ consec_oldsn_ampdu_gp2; int consec_oldsn_prev_drop; scalar_t__ consec_oldsn_drops; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_sta {int addr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct iwl_mvm*,char*,scalar_t__,int ,int,int) ;
 int FUNC_2 (int ,int ,int ) ;
 struct iwl_mvm_sta* FUNC_3 (struct ieee80211_sta*) ;

__attribute__((used)) static void FUNC_4(struct iwl_mvm *VAR_2,
         struct ieee80211_sta *VAR_3, int VAR_4,
         struct iwl_mvm_reorder_buffer *VAR_5,
         u32 VAR_6, u32 VAR_7, int VAR_8)
{
 struct iwl_mvm_sta *VAR_9 = FUNC_3(VAR_3);

 if (VAR_7 != VAR_5->consec_oldsn_ampdu_gp2) {






  if (!VAR_5->consec_oldsn_prev_drop)
   VAR_5->consec_oldsn_drops = 0;


  VAR_5->consec_oldsn_ampdu_gp2 = VAR_7;
 } else if (VAR_5->consec_oldsn_prev_drop) {






  return;
 }


 if (!(VAR_6 & VAR_1))
  return;


 VAR_5->consec_oldsn_prev_drop = 1;
 VAR_5->consec_oldsn_drops++;


 if (VAR_5->consec_oldsn_drops == VAR_0) {
  FUNC_1(VAR_2,
    "reached %d old SN frames from %pM on queue %d, stopping BA session on TID %d\n",
    VAR_0,
    VAR_3->addr, VAR_8, VAR_4);
  FUNC_2(VAR_9->vif, FUNC_0(VAR_4), VAR_3->addr);
  VAR_5->consec_oldsn_prev_drop = 0;
  VAR_5->consec_oldsn_drops = 0;
 }
}
