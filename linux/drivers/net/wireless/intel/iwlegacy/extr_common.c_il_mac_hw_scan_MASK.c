
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct il_priv {int mutex; int scan_band; struct ieee80211_vif* scan_vif; struct cfg80211_scan_request* scan_request; int status; } ;
struct ieee80211_vif {int dummy; } ;
struct cfg80211_scan_request {scalar_t__ n_channels; TYPE_1__** channels; } ;
struct ieee80211_scan_request {struct cfg80211_scan_request req; } ;
struct ieee80211_hw {struct il_priv* priv; } ;
struct TYPE_2__ {int band; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (struct il_priv*,struct ieee80211_vif*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

int
FUNC_7(struct ieee80211_hw *VAR_3, struct ieee80211_vif *VAR_4,
        struct ieee80211_scan_request *VAR_5)
{
 struct cfg80211_scan_request *VAR_6 = &VAR_5->req;
 struct il_priv *VAR_7 = VAR_3->priv;
 int VAR_8;

 if (VAR_6->n_channels == 0) {
  FUNC_2("Can not scan on no channels.\n");
  return -VAR_1;
 }

 FUNC_4(&VAR_7->mutex);
 FUNC_0("enter\n");

 if (FUNC_6(VAR_2, &VAR_7->status)) {
  FUNC_1("Scan already in progress.\n");
  VAR_8 = -VAR_0;
  goto out_unlock;
 }


 VAR_7->scan_request = VAR_6;
 VAR_7->scan_vif = VAR_4;
 VAR_7->scan_band = VAR_6->channels[0]->band;

 VAR_8 = FUNC_3(VAR_7, VAR_4);

out_unlock:
 FUNC_0("leave ret %d\n", VAR_8);
 FUNC_5(&VAR_7->mutex);

 return VAR_8;
}
