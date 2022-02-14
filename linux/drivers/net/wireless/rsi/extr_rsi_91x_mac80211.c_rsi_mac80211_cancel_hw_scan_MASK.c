
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsi_hw {int hw; struct rsi_common* priv; } ;
struct rsi_common {int bgscan_en; int mutex; int * hwscan; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct rsi_hw* priv; } ;
struct cfg80211_scan_info {int aborted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct cfg80211_scan_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct rsi_common*,int ) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_hw *VAR_2,
     struct ieee80211_vif *VAR_3)
{
 struct rsi_hw *VAR_4 = VAR_2->priv;
 struct rsi_common *VAR_5 = VAR_4->priv;
 struct cfg80211_scan_info VAR_6;

 FUNC_3(VAR_0, "***** Hardware scan stop *****\n");
 FUNC_1(&VAR_5->mutex);

 if (VAR_5->bgscan_en) {
  if (!FUNC_4(VAR_5, VAR_1))
   VAR_5->bgscan_en = 0;
  VAR_6.aborted = 0;
  FUNC_0(VAR_4->hw, &VAR_6);
  FUNC_3(VAR_0, "Back ground scan cancelled\n");
 }
 VAR_5->hwscan = ((void*)0);
 FUNC_2(&VAR_5->mutex);
}
