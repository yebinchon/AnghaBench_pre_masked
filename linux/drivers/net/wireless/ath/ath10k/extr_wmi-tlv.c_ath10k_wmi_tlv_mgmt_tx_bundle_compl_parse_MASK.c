
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wmi_tlv_tx_bundle_compl_parse {int desc_ids_done; int status_done; int ppdu_ids_done; int ack_rssi_done; void const* ack_rssi; void const* ppdu_ids; void const* status; void const* desc_ids; void const* num_reports; } ;
struct ath10k {int dummy; } ;





__attribute__((used)) static int
FUNC_0(struct ath10k *VAR_0, u16 VAR_1, u16 VAR_2,
       const void *VAR_3, void *VAR_4)
{
 struct wmi_tlv_tx_bundle_compl_parse *VAR_5 = VAR_4;

 switch (VAR_1) {
 case 128:
  VAR_5->num_reports = VAR_3;
  break;
 case 129:
  if (!VAR_5->desc_ids_done) {
   VAR_5->desc_ids_done = 1;
   VAR_5->desc_ids = VAR_3;
  } else if (!VAR_5->status_done) {
   VAR_5->status_done = 1;
   VAR_5->status = VAR_3;
  } else if (!VAR_5->ppdu_ids_done) {
   VAR_5->ppdu_ids_done = 1;
   VAR_5->ppdu_ids = VAR_3;
  } else if (!VAR_5->ack_rssi_done) {
   VAR_5->ack_rssi_done = 1;
   VAR_5->ack_rssi = VAR_3;
  }
  break;
 default:
  break;
 }
 return 0;
}
