
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct iwl_rx_packet {scalar_t__ data; } ;
struct iwl_mvm {TYPE_1__* fw; } ;
struct iwl_mcc_update_resp_v3 {int cap; int channels; int n_channels; int geo_info; int time; int source_id; void* mcc; int status; } ;
struct iwl_mcc_update_resp {void* mcc; int status; int channels; int n_channels; int geo_info; int time; int source_id; void* cap; } ;
struct iwl_mcc_update_cmd {void* mcc; int source_id; } ;
struct iwl_host_cmd {int* len; struct iwl_rx_packet* resp_pkt; int data; int flags; int id; } ;
typedef enum iwl_mcc_source { ____Placeholder_iwl_mcc_source } iwl_mcc_source ;
typedef int __le32 ;
struct TYPE_2__ {int ucode_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iwl_mcc_update_resp* FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct iwl_mvm*,char*,char const,char const,int,...) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (struct iwl_host_cmd*) ;
 int FUNC_7 (struct iwl_mvm*) ;
 int FUNC_8 (struct iwl_mvm*,struct iwl_host_cmd*) ;
 struct iwl_mcc_update_resp* FUNC_9 (struct iwl_mcc_update_resp*,int,int ) ;
 struct iwl_mcc_update_resp* FUNC_10 (int,int ) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int) ;

struct iwl_mcc_update_resp *
FUNC_14(struct iwl_mvm *VAR_6, const char *VAR_7,
     enum iwl_mcc_source VAR_8)
{
 struct iwl_mcc_update_cmd VAR_9 = {
  .mcc = FUNC_4(VAR_7[0] << 8 | VAR_7[1]),
  .source_id = (u8)VAR_8,
 };
 struct iwl_mcc_update_resp *VAR_10;
 struct iwl_rx_packet *VAR_11;
 struct iwl_host_cmd VAR_12 = {
  .id = VAR_5,
  .flags = VAR_0,
  .data = &VAR_9 ,
 };

 int VAR_13;
 u32 VAR_14;
 int VAR_15, VAR_16;
 u16 VAR_17;

 if (FUNC_2(!FUNC_7(VAR_6)))
  return FUNC_0(-VAR_2);

 VAR_12.len[0] = sizeof(struct iwl_mcc_update_cmd);

 FUNC_1(VAR_6, "send MCC update to FW with '%c%c' src = %d\n",
        VAR_7[0], VAR_7[1], VAR_8);

 VAR_13 = FUNC_8(VAR_6, &VAR_12);
 if (VAR_13)
  return FUNC_0(VAR_13);

 VAR_11 = VAR_12.resp_pkt;


 if (FUNC_5(&VAR_6->fw->ucode_capa,
   VAR_4)) {
  struct iwl_mcc_update_resp *VAR_18 = (void *)VAR_11->data;

  VAR_16 = FUNC_3(VAR_18->n_channels);
  VAR_15 = sizeof(struct iwl_mcc_update_resp) +
      VAR_16 * sizeof(__le32);
  VAR_10 = FUNC_9(VAR_18, VAR_15, VAR_3);
  if (!VAR_10) {
   VAR_10 = FUNC_0(-VAR_1);
   goto exit;
  }
 } else {
  struct iwl_mcc_update_resp_v3 *VAR_19 = (void *)VAR_11->data;

  VAR_16 = FUNC_3(VAR_19->n_channels);
  VAR_15 = sizeof(struct iwl_mcc_update_resp) +
      VAR_16 * sizeof(__le32);
  VAR_10 = FUNC_10(VAR_15, VAR_3);
  if (!VAR_10) {
   VAR_10 = FUNC_0(-VAR_1);
   goto exit;
  }

  VAR_10->status = VAR_19->status;
  VAR_10->mcc = VAR_19->mcc;
  VAR_10->cap = FUNC_4(VAR_19->cap);
  VAR_10->source_id = VAR_19->source_id;
  VAR_10->time = VAR_19->time;
  VAR_10->geo_info = VAR_19->geo_info;
  VAR_10->n_channels = VAR_19->n_channels;
  FUNC_13(VAR_10->channels, VAR_19->channels,
         VAR_16 * sizeof(__le32));
 }

 VAR_14 = FUNC_12(VAR_10->status);

 VAR_17 = FUNC_11(VAR_10->mcc);


 if (VAR_17 == 0) {
  VAR_17 = 0x3030;
  VAR_10->mcc = FUNC_4(VAR_17);
 }

 FUNC_1(VAR_6,
        "MCC response status: 0x%x. new MCC: 0x%x ('%c%c') n_chans: %d\n",
        VAR_14, VAR_17, VAR_17 >> 8, VAR_17 & 0xff, VAR_16);

exit:
 FUNC_6(&VAR_12);
 return VAR_10;
}
