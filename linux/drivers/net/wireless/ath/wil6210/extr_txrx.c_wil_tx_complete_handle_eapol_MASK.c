
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {scalar_t__ iftype; } ;
struct wil6210_vif {int ptk_rekey_state; int enable_tx_key_worker; } ;
struct wil6210_priv {int wmi_wq; int eap_lock; int fw_capabilities; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;
 struct wireless_dev* FUNC_4 (struct wil6210_vif*) ;
 struct wil6210_priv* FUNC_5 (struct wil6210_vif*) ;
 int FUNC_6 (struct wil6210_priv*,char*,int) ;
 int FUNC_7 (struct wil6210_priv*,char*,int) ;
 int FUNC_8 (struct wil6210_priv*,struct sk_buff*) ;

void FUNC_9(struct wil6210_vif *VAR_2, struct sk_buff *VAR_3)
{
 struct wil6210_priv *VAR_4 = FUNC_5(VAR_2);
 struct wireless_dev *VAR_5 = FUNC_4(VAR_2);
 bool VAR_6 = 0;

 if (VAR_5->iftype != VAR_0 ||
     !FUNC_3(VAR_1, VAR_4->fw_capabilities))
  return;


 if (!FUNC_8(VAR_4, VAR_3))
  return;

 FUNC_1(&VAR_4->eap_lock);
 switch (VAR_2->ptk_rekey_state) {
 case 130:

  break;
 case 129:
  VAR_2->ptk_rekey_state = 130;
  break;
 case 128:
  VAR_6 = 1;
  break;
 default:
  FUNC_7(VAR_4, "Unknown rekey state = %d",
   VAR_2->ptk_rekey_state);
 }
 FUNC_2(&VAR_4->eap_lock);

 if (VAR_6) {
  VAR_6 = FUNC_0(VAR_4->wmi_wq, &VAR_2->enable_tx_key_worker);
  FUNC_6(VAR_4, "queue_work of enable_tx_key_worker -> %d\n",
        VAR_6);
 }
}
