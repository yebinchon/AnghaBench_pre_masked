
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct ieee80211_channel {int center_freq; } ;
struct ath6kl_vif {scalar_t__ last_roc_id; int fw_vif_idx; int ndev; } ;
struct ath6kl {int wmi; } ;


 struct ath6kl* FUNC_0 (int ) ;
 struct ath6kl_vif* FUNC_1 (struct wireless_dev*) ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_0,
        struct wireless_dev *VAR_1,
        struct ieee80211_channel *VAR_2,
        unsigned int VAR_3,
        u64 *VAR_4)
{
 struct ath6kl_vif *VAR_5 = FUNC_1(VAR_1);
 struct ath6kl *VAR_6 = FUNC_0(VAR_5->ndev);
 u32 VAR_7;



 VAR_7 = ++VAR_5->last_roc_id;
 if (VAR_7 == 0) {

  VAR_7 = ++VAR_5->last_roc_id;
 }
 *VAR_4 = VAR_7;

 return FUNC_2(VAR_6->wmi, VAR_5->fw_vif_idx,
          VAR_2->center_freq, VAR_3);
}
