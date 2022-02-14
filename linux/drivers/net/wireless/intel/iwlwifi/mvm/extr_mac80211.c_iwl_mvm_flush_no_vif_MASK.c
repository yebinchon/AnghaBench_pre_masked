
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm {int mutex; int * fw_id_to_mac_id; int trans; } ;
struct ieee80211_sta {int dummy; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct ieee80211_sta*) ;
 int FUNC_2 (struct iwl_mvm*,int,int,int ) ;
 int FUNC_3 (struct iwl_mvm*,int,int ) ;
 int FUNC_4 (struct iwl_mvm*) ;
 int FUNC_5 (struct iwl_mvm*) ;
 int FUNC_6 (struct ieee80211_sta*) ;
 int FUNC_7 (struct iwl_mvm*,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct ieee80211_sta* FUNC_12 (int ,int ) ;

__attribute__((used)) static void FUNC_13(struct iwl_mvm *VAR_0, u32 VAR_1, bool VAR_2)
{
 int VAR_3;

 if (!FUNC_5(VAR_0)) {
  if (VAR_2) {
   FUNC_10(&VAR_0->mutex);
   FUNC_3(VAR_0,
    FUNC_4(VAR_0) & VAR_1, 0);
   FUNC_11(&VAR_0->mutex);
  } else {
   FUNC_8(VAR_0->trans, VAR_1);
  }
  return;
 }

 FUNC_10(&VAR_0->mutex);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0->fw_id_to_mac_id); VAR_3++) {
  struct ieee80211_sta *VAR_4;

  VAR_4 = FUNC_12(VAR_0->fw_id_to_mac_id[VAR_3],
      FUNC_9(&VAR_0->mutex));
  if (FUNC_1(VAR_4))
   continue;

  if (VAR_2)
   FUNC_2(VAR_0, VAR_3, 0xFF, 0);
  else
   FUNC_7(VAR_0,
     FUNC_6(VAR_4));
 }
 FUNC_11(&VAR_0->mutex);
}
