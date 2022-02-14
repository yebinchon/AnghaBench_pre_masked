
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct iwl_sf_cfg_cmd {int state; } ;
struct iwl_mvm {int sf_state; int * fw_id_to_mac_id; TYPE_1__* cfg; } ;
struct ieee80211_sta {int dummy; } ;
typedef int sf_cmd ;
typedef enum iwl_sf_state { ____Placeholder_iwl_sf_state } iwl_sf_state ;
struct TYPE_2__ {scalar_t__ disable_dummy_notification; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_sta*) ;
 int FUNC_1 (struct iwl_mvm*,char*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct iwl_mvm*,struct iwl_sf_cfg_cmd*,struct ieee80211_sta*) ;
 int FUNC_5 (struct iwl_mvm*,int ,int ,int,struct iwl_sf_cfg_cmd*) ;
 struct ieee80211_sta* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct iwl_mvm *VAR_5, u8 VAR_6,
        enum iwl_sf_state VAR_7)
{
 struct iwl_sf_cfg_cmd VAR_8 = {
  .state = FUNC_3(VAR_7),
 };
 struct ieee80211_sta *VAR_9;
 int VAR_10 = 0;

 if (VAR_5->cfg->disable_dummy_notification)
  VAR_8.state |= FUNC_3(VAR_4);





 if (VAR_7 != 130 && VAR_5->sf_state == VAR_7)
  return 0;

 switch (VAR_7) {
 case 128:
  FUNC_4(VAR_5, &VAR_8, ((void*)0));
  break;
 case 130:
  if (VAR_6 == VAR_2) {
   FUNC_1(VAR_5,
    "No station: Cannot switch SF to FULL_ON\n");
   return -VAR_1;
  }
  FUNC_7();
  VAR_9 = FUNC_6(VAR_5->fw_id_to_mac_id[VAR_6]);
  if (FUNC_0(VAR_9)) {
   FUNC_1(VAR_5, "Invalid station id\n");
   FUNC_8();
   return -VAR_1;
  }
  FUNC_4(VAR_5, &VAR_8, VAR_9);
  FUNC_8();
  break;
 case 129:
  FUNC_4(VAR_5, &VAR_8, ((void*)0));
  break;
 default:
  FUNC_2(1, "Invalid state: %d. not sending Smart Fifo cmd\n",
     VAR_7);
  return -VAR_1;
 }

 VAR_10 = FUNC_5(VAR_5, VAR_3, VAR_0,
       sizeof(VAR_8), &VAR_8);
 if (!VAR_10)
  VAR_5->sf_state = VAR_7;

 return VAR_10;
}
