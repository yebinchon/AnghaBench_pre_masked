
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_priv {int * scan_request; int * scan_vif; int scan_type; int hw; } ;
struct cfg80211_scan_info {int aborted; } ;


 int FUNC_0 (struct iwl_priv*,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct cfg80211_scan_info*) ;

__attribute__((used)) static void FUNC_2(struct iwl_priv *VAR_1, bool VAR_2)
{
 struct cfg80211_scan_info VAR_3 = {
  .aborted = VAR_2,
 };


 if (VAR_1->scan_request) {
  FUNC_0(VAR_1, "Complete scan in mac80211\n");
  FUNC_1(VAR_1->hw, &VAR_3);
 }

 VAR_1->scan_type = VAR_0;
 VAR_1->scan_vif = ((void*)0);
 VAR_1->scan_request = ((void*)0);
}
