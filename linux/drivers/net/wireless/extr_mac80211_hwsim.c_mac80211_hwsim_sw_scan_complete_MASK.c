
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac80211_hwsim_data {int scanning; int mutex; int scan_addr; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct mac80211_hwsim_data* priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct ieee80211_hw *VAR_0,
         struct ieee80211_vif *VAR_1)
{
 struct mac80211_hwsim_data *VAR_2 = VAR_0->priv;

 FUNC_1(&VAR_2->mutex);

 FUNC_3("hwsim sw_scan_complete\n");
 VAR_2->scanning = 0;
 FUNC_0(VAR_2->scan_addr);

 FUNC_2(&VAR_2->mutex);
}
