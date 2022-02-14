
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wiphy {int dummy; } ;
struct net_device {int dummy; } ;
struct mwifiex_radar_params {int cac_time_ms; struct cfg80211_chan_def* chandef; } ;
struct TYPE_3__ {int is_11h_active; } ;
struct mwifiex_private {int dfs_cac_work; int dfs_cac_workqueue; int dfs_chandef; TYPE_1__ state_11h; TYPE_2__* adapter; } ;
struct cfg80211_chan_def {int dummy; } ;
struct TYPE_4__ {scalar_t__ scan_processing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct cfg80211_chan_def*,int) ;
 int FUNC_1 (struct mwifiex_radar_params*,int ,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct mwifiex_private*,int) ;
 int FUNC_4 (TYPE_2__*,int ,char*) ;
 int FUNC_5 (struct mwifiex_private*) ;
 struct mwifiex_private* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct mwifiex_private*,int ,int ,int ,struct mwifiex_radar_params*,int) ;
 int FUNC_8 (int ,int *,int ) ;

__attribute__((used)) static int
FUNC_9(struct wiphy *VAR_5,
           struct net_device *VAR_6,
           struct cfg80211_chan_def *VAR_7,
           u32 VAR_8)
{
 struct mwifiex_private *VAR_9 = FUNC_6(VAR_6);
 struct mwifiex_radar_params VAR_10;

 if (VAR_9->adapter->scan_processing) {
  FUNC_4(VAR_9->adapter, VAR_1,
       "radar detection: scan already in process...\n");
  return -VAR_0;
 }

 if (!FUNC_5(VAR_9)) {
  FUNC_4(VAR_9->adapter, VAR_4,
       "Enable 11h extensions in FW\n");
  if (FUNC_3(VAR_9, 1)) {
   FUNC_4(VAR_9->adapter, VAR_1,
        "Failed to activate 11h extensions!!");
   return -1;
  }
  VAR_9->state_11h.is_11h_active = 1;
 }

 FUNC_1(&VAR_10, 0, sizeof(struct mwifiex_radar_params));
 VAR_10.chandef = VAR_7;
 VAR_10.cac_time_ms = VAR_8;

 FUNC_0(&VAR_9->dfs_chandef, VAR_7, sizeof(VAR_9->dfs_chandef));

 if (FUNC_7(VAR_9, VAR_3,
        VAR_2, 0, &VAR_10, 1))
  return -1;

 FUNC_8(VAR_9->dfs_cac_workqueue, &VAR_9->dfs_cac_work,
      FUNC_2(VAR_8));
 return 0;
}
