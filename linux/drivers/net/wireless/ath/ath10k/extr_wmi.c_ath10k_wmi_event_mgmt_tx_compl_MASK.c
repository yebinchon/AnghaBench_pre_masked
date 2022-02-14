
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_tlv_mgmt_tx_compl_ev_arg {int ack_rssi; int status; int desc_id; } ;
struct sk_buff {int dummy; } ;
struct mgmt_tx_compl_params {void* ack_rssi; void* status; void* desc_id; } ;
struct TYPE_2__ {int svc_map; } ;
struct ath10k {TYPE_1__ wmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct ath10k*,int ,char*) ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 int FUNC_3 (struct ath10k*,struct sk_buff*,struct wmi_tlv_mgmt_tx_compl_ev_arg*) ;
 int FUNC_4 (struct mgmt_tx_compl_params*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (struct ath10k*,struct mgmt_tx_compl_params*) ;

int FUNC_7(struct ath10k *VAR_2, struct sk_buff *VAR_3)
{
 struct wmi_tlv_mgmt_tx_compl_ev_arg VAR_4;
 struct mgmt_tx_compl_params VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(VAR_2, VAR_3, &VAR_4);
 if (VAR_6) {
  FUNC_2(VAR_2, "failed to parse mgmt comp event: %d\n", VAR_6);
  return VAR_6;
 }

 FUNC_4(&VAR_5, 0, sizeof(struct mgmt_tx_compl_params));
 VAR_5.desc_id = FUNC_0(VAR_4.desc_id);
 VAR_5.status = FUNC_0(VAR_4.status);

 if (FUNC_5(VAR_1, VAR_2->wmi.svc_map))
  VAR_5.ack_rssi = FUNC_0(VAR_4.ack_rssi);

 FUNC_6(VAR_2, &VAR_5);

 FUNC_1(VAR_2, VAR_0, "wmi tlv evnt mgmt tx completion\n");

 return 0;
}
