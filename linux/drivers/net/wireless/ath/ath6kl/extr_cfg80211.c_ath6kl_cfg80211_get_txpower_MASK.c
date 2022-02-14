
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int dummy; } ;
struct wiphy {int dummy; } ;
struct ath6kl_vif {int fw_vif_idx; int flags; } ;
struct ath6kl {int tx_pwr; int event_wq; int wmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath6kl_vif*) ;
 int FUNC_1 (char*) ;
 struct ath6kl_vif* FUNC_2 (struct ath6kl*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int,int) ;
 scalar_t__ FUNC_7 (struct wiphy*) ;

__attribute__((used)) static int FUNC_8(struct wiphy *VAR_5,
           struct wireless_dev *VAR_6,
           int *VAR_7)
{
 struct ath6kl *VAR_8 = (struct ath6kl *)FUNC_7(VAR_5);
 struct ath6kl_vif *VAR_9;

 VAR_9 = FUNC_2(VAR_8);
 if (!VAR_9)
  return -VAR_2;

 if (!FUNC_0(VAR_9))
  return -VAR_2;

 if (FUNC_5(VAR_0, &VAR_9->flags)) {
  VAR_8->tx_pwr = 255;

  if (FUNC_3(VAR_8->wmi, VAR_9->fw_vif_idx) != 0) {
   FUNC_1("ath6kl_wmi_get_tx_pwr_cmd failed\n");
   return -VAR_2;
  }

  FUNC_6(VAR_8->event_wq, VAR_8->tx_pwr != 255,
       5 * VAR_3);

  if (FUNC_4(VAR_4)) {
   FUNC_1("target did not respond\n");
   return -VAR_1;
  }
 }

 *VAR_7 = VAR_8->tx_pwr;
 return 0;
}
