
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mac80211_hwsim_data {int scanning; int mutex; int survey_data; int scan_addr; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct mac80211_hwsim_data* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_1,
       struct ieee80211_vif *VAR_2,
       const u8 *VAR_3)
{
 struct mac80211_hwsim_data *VAR_4 = VAR_1->priv;

 FUNC_2(&VAR_4->mutex);

 if (VAR_4->scanning) {
  FUNC_4("two hwsim sw_scans detected!\n");
  goto out;
 }

 FUNC_4("hwsim sw_scan request, prepping stuff\n");

 FUNC_0(VAR_4->scan_addr, VAR_3, VAR_0);
 VAR_4->scanning = 1;
 FUNC_1(VAR_4->survey_data, 0, sizeof(VAR_4->survey_data));

out:
 FUNC_3(&VAR_4->mutex);
}
