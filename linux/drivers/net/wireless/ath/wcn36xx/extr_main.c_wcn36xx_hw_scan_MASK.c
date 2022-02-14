
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx {int scan_aborted; int scan_work; int fw_feat_caps; int scan_lock; int * scan_req; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_scan_request {int req; } ;
struct ieee80211_hw {struct wcn36xx* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct wcn36xx*,struct ieee80211_vif*,int *) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_2,
      struct ieee80211_vif *VAR_3,
      struct ieee80211_scan_request *VAR_4)
{
 struct wcn36xx *VAR_5 = VAR_2->priv;
 FUNC_1(&VAR_5->scan_lock);
 if (VAR_5->scan_req) {
  FUNC_2(&VAR_5->scan_lock);
  return -VAR_0;
 }

 VAR_5->scan_aborted = 0;
 VAR_5->scan_req = &VAR_4->req;

 FUNC_2(&VAR_5->scan_lock);

 if (!FUNC_0(VAR_5->fw_feat_caps, VAR_1)) {

  FUNC_3(&VAR_5->scan_work);
  return 0;
 }

 return FUNC_4(VAR_5, VAR_3, &VAR_4->req);
}
