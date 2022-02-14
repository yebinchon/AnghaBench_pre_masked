
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx {int scan_aborted; int hw; int scan_work; int fw_feat_caps; int scan_lock; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct wcn36xx* priv; } ;
struct cfg80211_scan_info {int aborted; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,struct cfg80211_scan_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct wcn36xx*) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_1,
       struct ieee80211_vif *VAR_2)
{
 struct wcn36xx *VAR_3 = VAR_1->priv;

 FUNC_3(&VAR_3->scan_lock);
 VAR_3->scan_aborted = 1;
 FUNC_4(&VAR_3->scan_lock);

 if (FUNC_1(VAR_3->fw_feat_caps, VAR_0)) {


  FUNC_5(VAR_3);
 } else {
  struct cfg80211_scan_info VAR_4 = {
   .aborted = 1,
  };

  FUNC_0(&VAR_3->scan_work);
  FUNC_2(VAR_3->hw, &VAR_4);
 }
}
