
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_priv {scalar_t__ bt_traffic_load; } ;
struct iwl_lq_sta {int dummy; } ;
struct ieee80211_sta {int addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct iwl_priv*,char*,scalar_t__) ;
 int FUNC_1 (struct iwl_priv*,char*,int ,int ) ;
 int FUNC_2 (struct iwl_priv*,char*,int ) ;
 int FUNC_3 (struct ieee80211_sta*,int ,int) ;
 int FUNC_4 (struct ieee80211_sta*,int ) ;
 int FUNC_5 (struct iwl_lq_sta*,int ) ;

__attribute__((used)) static int FUNC_6(struct iwl_priv *VAR_2,
          struct iwl_lq_sta *VAR_3, u8 VAR_4,
          struct ieee80211_sta *VAR_5)
{
 int VAR_6 = -VAR_0;





 if (VAR_2->bt_traffic_load >= VAR_1) {
  FUNC_0(VAR_2,
          "BT traffic (%d), no aggregation allowed\n",
          VAR_2->bt_traffic_load);
  return VAR_6;
 }

 FUNC_5(VAR_3, VAR_4);

 FUNC_1(VAR_2, "Starting Tx agg: STA: %pM tid: %d\n",
   VAR_5->addr, VAR_4);
 VAR_6 = FUNC_3(VAR_5, VAR_4, 5000);
 if (VAR_6 == -VAR_0) {





  FUNC_2(VAR_2, "Fail start Tx agg on tid: %d\n",
   VAR_4);
  FUNC_4(VAR_5, VAR_4);
 }
 return VAR_6;
}
