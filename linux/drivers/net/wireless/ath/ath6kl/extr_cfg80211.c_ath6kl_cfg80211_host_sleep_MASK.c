
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath6kl_vif {int fw_vif_idx; int flags; } ;
struct ath6kl {size_t ctrl_ep; int event_wq; scalar_t__* tx_pending; int wmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct ath6kl*) ;
 int FUNC_4 (struct ath6kl_vif*) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct ath6kl *VAR_4, struct ath6kl_vif *VAR_5)
{
 int VAR_6, VAR_7;

 FUNC_2(VAR_2, &VAR_5->flags);

 VAR_6 = FUNC_1(VAR_4->wmi, VAR_5->fw_vif_idx,
       VAR_0);
 if (VAR_6)
  return VAR_6;

 VAR_7 = FUNC_5(VAR_4->event_wq,
      FUNC_4(VAR_5),
      VAR_3);
 if (VAR_7 == 0) {
  FUNC_0("timeout, didn't get host sleep cmd processed event\n");
  VAR_6 = -VAR_1;
 } else if (VAR_7 < 0) {
  FUNC_0("error while waiting for host sleep cmd processed event %d\n",
       VAR_7);
  VAR_6 = VAR_7;
 }

 if (VAR_4->tx_pending[VAR_4->ctrl_ep]) {
  VAR_7 = FUNC_5(VAR_4->event_wq,
       FUNC_3(VAR_4),
       VAR_3);
  if (VAR_7 == 0) {
   FUNC_0("clear wmi ctrl data timeout\n");
   VAR_6 = -VAR_1;
  } else if (VAR_7 < 0) {
   FUNC_0("clear wmi ctrl data failed: %d\n", VAR_7);
   VAR_6 = VAR_7;
  }
 }

 return VAR_6;
}
