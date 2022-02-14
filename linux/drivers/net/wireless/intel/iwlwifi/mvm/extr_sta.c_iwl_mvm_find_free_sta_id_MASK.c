
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_mvm {int mutex; int * fw_id_to_mac_id; int status; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct iwl_mvm *VAR_4,
        enum nl80211_iftype VAR_5)
{
 int VAR_6;
 u32 VAR_7 = 0;

 FUNC_2(VAR_1 > 32);
 FUNC_3(FUNC_7(VAR_2, &VAR_4->status));

 FUNC_4(&VAR_4->mutex);


 if (VAR_5 != VAR_3)
  VAR_7 = FUNC_1(0);


 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4->fw_id_to_mac_id); VAR_6++) {
  if (FUNC_1(VAR_6) & VAR_7)
   continue;

  if (!FUNC_6(VAR_4->fw_id_to_mac_id[VAR_6],
            FUNC_5(&VAR_4->mutex)))
   return VAR_6;
 }
 return VAR_0;
}
