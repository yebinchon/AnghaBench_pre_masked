
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p54_common {int conf_mutex; int bssid; int mac_addr; int mode; int beacon_comp; int beacon_req_id; int * vif; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct p54_common* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct p54_common*) ;
 int FUNC_5 (struct p54_common*,int ) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_2,
     struct ieee80211_vif *VAR_3)
{
 struct p54_common *VAR_4 = VAR_2->priv;

 FUNC_2(&VAR_4->conf_mutex);
 VAR_4->vif = ((void*)0);





 if (FUNC_1(VAR_4->beacon_req_id) != 0) {
  FUNC_5(VAR_4, VAR_4->beacon_req_id);
  FUNC_6(&VAR_4->beacon_comp, VAR_0);
 }
 VAR_4->mode = VAR_1;
 FUNC_0(VAR_4->mac_addr);
 FUNC_0(VAR_4->bssid);
 FUNC_4(VAR_4);
 FUNC_3(&VAR_4->conf_mutex);
}
