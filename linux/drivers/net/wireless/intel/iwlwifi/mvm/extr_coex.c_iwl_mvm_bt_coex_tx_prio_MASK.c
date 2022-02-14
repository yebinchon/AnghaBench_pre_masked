
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm {int bt_tx_prio; } ;
struct ieee80211_tx_info {scalar_t__ band; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;
typedef int __le16 ;





 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct iwl_mvm*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;

u8 FUNC_9(struct iwl_mvm *VAR_1, struct ieee80211_hdr *VAR_2,
      struct ieee80211_tx_info *VAR_3, u8 VAR_4)
{
 __le16 VAR_5 = VAR_2->frame_control;
 bool VAR_6 = FUNC_6(VAR_1);

 if (VAR_3->band != VAR_0)
  return 0;

 if (FUNC_8(VAR_1->bt_tx_prio))
  return VAR_1->bt_tx_prio - 1;

 if (FUNC_7(FUNC_1(VAR_5))) {
  if (FUNC_7(FUNC_2(VAR_5))) {
   switch (VAR_4) {
   case 130:
    return VAR_6 ? 1 : 0;
   case 129:
    return VAR_6 ? 2 : 3;
   case 128:
    return 3;
   default:
    return 0;
   }
  } else if (FUNC_5(VAR_2->addr1)) {
   return 3;
  } else
   return 0;
 } else if (FUNC_4(VAR_5)) {
  return FUNC_3(VAR_5) ? 0 : 3;
 } else if (FUNC_0(VAR_5)) {

  return 3;
 }

 return 0;
}
