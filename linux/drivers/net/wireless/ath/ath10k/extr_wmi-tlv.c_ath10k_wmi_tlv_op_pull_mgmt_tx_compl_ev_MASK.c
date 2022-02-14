
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_tlv_mgmt_tx_compl_ev_arg {int ack_rssi; int ppdu_id; int pdev_id; int status; int desc_id; } ;
struct wmi_tlv_mgmt_tx_compl_ev {int ack_rssi; int ppdu_id; int pdev_id; int status; int desc_id; } ;
struct sk_buff {int len; int data; } ;
struct TYPE_2__ {int svc_map; } ;
struct ath10k {TYPE_1__ wmi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void const**) ;
 int FUNC_1 (void const**) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_2 (struct ath10k*,char*,int) ;
 void** FUNC_3 (struct ath10k*,int ,int ,int ) ;
 int FUNC_4 (void const**) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct ath10k *VAR_3, struct sk_buff *VAR_4,
     struct wmi_tlv_mgmt_tx_compl_ev_arg *VAR_5)
{
 const void **VAR_6;
 const struct wmi_tlv_mgmt_tx_compl_ev *VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_3, VAR_4->data, VAR_4->len, VAR_0);
 if (FUNC_0(VAR_6)) {
  VAR_8 = FUNC_1(VAR_6);
  FUNC_2(VAR_3, "failed to parse tlv: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_7 = VAR_6[VAR_2];

 VAR_5->desc_id = VAR_7->desc_id;
 VAR_5->status = VAR_7->status;
 VAR_5->pdev_id = VAR_7->pdev_id;
 VAR_5->ppdu_id = VAR_7->ppdu_id;

 if (FUNC_5(VAR_1, VAR_3->wmi.svc_map))
  VAR_5->ack_rssi = VAR_7->ack_rssi;

 FUNC_4(VAR_6);
 return 0;
}
