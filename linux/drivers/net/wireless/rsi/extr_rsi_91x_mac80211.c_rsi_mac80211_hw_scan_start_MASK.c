
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsi_hw {struct rsi_common* priv; } ;
struct rsi_common {int mac_ops_resumed; scalar_t__ fsm_state; int wow_flags; int bgscan_en; int mutex; struct cfg80211_scan_request* hwscan; } ;
struct ieee80211_bss_conf {int assoc; } ;
struct ieee80211_vif {struct ieee80211_bss_conf bss_conf; } ;
struct cfg80211_scan_request {scalar_t__ n_channels; } ;
struct ieee80211_scan_request {struct cfg80211_scan_request req; } ;
struct ieee80211_hw {struct rsi_hw* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct rsi_common*,int ) ;
 int FUNC_4 (struct rsi_common*,struct ieee80211_vif*) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_7,
          struct ieee80211_vif *VAR_8,
          struct ieee80211_scan_request *VAR_9)
{
 struct cfg80211_scan_request *VAR_10 = &VAR_9->req;
 struct rsi_hw *VAR_11 = VAR_7->priv;
 struct rsi_common *VAR_12 = VAR_11->priv;
 struct ieee80211_bss_conf *VAR_13 = &VAR_8->bss_conf;

 FUNC_2(VAR_4, "***** Hardware scan start *****\n");
 VAR_12->mac_ops_resumed = 0;

 if (VAR_12->fsm_state != VAR_3)
  return -VAR_2;

 if ((VAR_12->wow_flags & VAR_6) ||
     VAR_10->n_channels == 0)
  return -VAR_1;


 if (VAR_12->bgscan_en)
  return -VAR_0;




 if (!VAR_13->assoc)
  return 1;

 FUNC_0(&VAR_12->mutex);
 VAR_12->hwscan = VAR_10;
 if (!FUNC_3(VAR_12, VAR_5)) {
  if (!FUNC_4(VAR_12, VAR_8)) {
   FUNC_2(VAR_4, "Background scan started...\n");
   VAR_12->bgscan_en = 1;
  }
 }
 FUNC_1(&VAR_12->mutex);

 return 0;
}
