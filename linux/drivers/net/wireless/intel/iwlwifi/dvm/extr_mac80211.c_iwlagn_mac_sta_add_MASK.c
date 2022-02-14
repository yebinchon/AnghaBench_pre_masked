
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_vif_priv {int ctx; } ;
struct iwl_station_priv {int client; int sta_id; int pending_frames; } ;
struct iwl_priv {int dummy; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ drv_priv; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct iwl_priv*,char*,int ) ;
 int FUNC_1 (struct iwl_priv*,char*,int ,int) ;
 int VAR_0 ;
 struct iwl_priv* FUNC_2 (struct ieee80211_hw*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct iwl_priv*,int ,int ,int,struct ieee80211_sta*,int *) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_3,
         struct ieee80211_vif *VAR_4,
         struct ieee80211_sta *VAR_5)
{
 struct iwl_priv *VAR_6 = FUNC_2(VAR_3);
 struct iwl_station_priv *VAR_7 = (void *)VAR_5->drv_priv;
 struct iwl_vif_priv *VAR_8 = (void *)VAR_4->drv_priv;
 bool VAR_9 = VAR_4->type == VAR_2;
 int VAR_10;
 u8 VAR_11;

 FUNC_0(VAR_6, "proceeding to add station %pM\n",
   VAR_5->addr);
 VAR_7->sta_id = VAR_0;

 FUNC_3(&VAR_7->pending_frames, 0);
 if (VAR_4->type == VAR_1)
  VAR_7->client = 1;

 VAR_10 = FUNC_4(VAR_6, VAR_8->ctx, VAR_5->addr,
         VAR_9, VAR_5, &VAR_11);
 if (VAR_10) {
  FUNC_1(VAR_6, "Unable to add station %pM (%d)\n",
   VAR_5->addr, VAR_10);

  return VAR_10;
 }

 VAR_7->sta_id = VAR_11;

 return 0;
}
