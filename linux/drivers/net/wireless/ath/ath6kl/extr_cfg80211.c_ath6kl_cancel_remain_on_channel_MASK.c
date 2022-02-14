
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct ath6kl_vif {scalar_t__ last_roc_id; int fw_vif_idx; scalar_t__ last_cancel_roc_id; int ndev; } ;
struct ath6kl {int wmi; } ;


 int VAR_0 ;
 struct ath6kl* FUNC_0 (int ) ;
 struct ath6kl_vif* FUNC_1 (struct wireless_dev*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct wiphy *VAR_1,
        struct wireless_dev *VAR_2,
        u64 VAR_3)
{
 struct ath6kl_vif *VAR_4 = FUNC_1(VAR_2);
 struct ath6kl *VAR_5 = FUNC_0(VAR_4->ndev);

 if (VAR_3 != VAR_4->last_roc_id)
  return -VAR_0;
 VAR_4->last_cancel_roc_id = VAR_3;

 return FUNC_2(VAR_5->wmi, VAR_4->fw_vif_idx);
}
