
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_sta {int sta_id; int vif; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;






 int FUNC_0 (int,char*,int,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct iwl_mvm_sta *VAR_0)
{
 int VAR_1 = -1;
 enum nl80211_iftype VAR_2 = FUNC_1(VAR_0->vif);

 switch (VAR_2) {
 case 131:
 case 129:
  VAR_1 = 3;
  break;
 case 130:
  VAR_1 = 2;
  break;
 case 128:
  VAR_1 = 1;
  break;
 default:
  FUNC_0(1, "viftype %d sta_id %d", VAR_2, VAR_0->sta_id);
  VAR_1 = -1;
 }

 return VAR_1;
}
