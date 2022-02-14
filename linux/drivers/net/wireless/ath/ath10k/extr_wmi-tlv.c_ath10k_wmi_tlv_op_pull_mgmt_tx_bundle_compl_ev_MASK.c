
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wmi_tlv_tx_bundle_compl_parse {int ack_rssi; int ppdu_ids; scalar_t__ status; scalar_t__ desc_ids; int * num_reports; } ;
struct wmi_tlv_mgmt_tx_bundle_compl_ev_arg {int ack_rssi; int ppdu_ids; scalar_t__ status; scalar_t__ desc_ids; int num_reports; } ;
struct sk_buff {int len; int data; } ;
struct TYPE_2__ {int svc_map; } ;
struct ath10k {TYPE_1__ wmi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,char*,int) ;
 int FUNC_1 (struct ath10k*,int ,int ,int ,struct wmi_tlv_tx_bundle_compl_parse*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(
    struct ath10k *VAR_3, struct sk_buff *VAR_4,
    struct wmi_tlv_mgmt_tx_bundle_compl_ev_arg *VAR_5)
{
 struct wmi_tlv_tx_bundle_compl_parse VAR_6 = { };
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, VAR_4->data, VAR_4->len,
      VAR_2,
      &VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_3, "failed to parse tlv: %d\n", VAR_7);
  return VAR_7;
 }

 if (!VAR_6.num_reports || !VAR_6.desc_ids ||
     !VAR_6.status)
  return -VAR_0;

 VAR_5->num_reports = *VAR_6.num_reports;
 VAR_5->desc_ids = VAR_6.desc_ids;
 VAR_5->status = VAR_6.status;
 VAR_5->ppdu_ids = VAR_6.ppdu_ids;

 if (FUNC_2(VAR_1, VAR_3->wmi.svc_map))
  VAR_5->ack_rssi = VAR_6.ack_rssi;

 return 0;
}
