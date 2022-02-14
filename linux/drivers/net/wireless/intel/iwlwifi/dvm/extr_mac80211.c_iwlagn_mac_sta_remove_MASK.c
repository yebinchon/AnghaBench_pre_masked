
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_station_priv {int sta_id; } ;
struct iwl_priv {int dummy; } ;
struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct iwl_priv*,char*,int ) ;
 int FUNC_1 (struct iwl_priv*,char*,int ) ;
 struct iwl_priv* FUNC_2 (struct ieee80211_hw*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (struct iwl_priv*,int ,int ) ;
 int FUNC_4 (struct iwl_priv*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_1,
     struct ieee80211_vif *VAR_2,
     struct ieee80211_sta *VAR_3)
{
 struct iwl_priv *VAR_4 = FUNC_2(VAR_1);
 struct iwl_station_priv *VAR_5 = (void *)VAR_3->drv_priv;
 int VAR_6;

 FUNC_0(VAR_4, "proceeding to remove station %pM\n", VAR_3->addr);

 if (VAR_2->type == VAR_0) {





  VAR_6 = 0;
  FUNC_3(VAR_4, VAR_5->sta_id, VAR_3->addr);
 } else {
  VAR_6 = FUNC_4(VAR_4, VAR_5->sta_id, VAR_3->addr);
  if (VAR_6)
   FUNC_1(VAR_4,
    "Error removing station %pM\n", VAR_3->addr);
 }
 return VAR_6;
}
