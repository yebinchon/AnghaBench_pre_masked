
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct mwifiex_rate_scope {void** vht_mcs_rate_bitmap; void** ht_mcs_rate_bitmap; void* ofdm_rate_bitmap; void* hr_dsss_rate_bitmap; void* length; void* type; } ;
struct mwifiex_rate_drop_pattern {scalar_t__ rate_drop_mode; void* length; void* type; } ;
struct mwifiex_private {int* bitmap_rates; TYPE_2__* adapter; } ;
struct mwifiex_ie_types_header {int dummy; } ;
struct host_cmd_ds_tx_rate_cfg {scalar_t__ cfg_index; void* action; } ;
struct TYPE_3__ {struct host_cmd_ds_tx_rate_cfg tx_rate_cfg; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;
struct TYPE_4__ {scalar_t__ fw_api_ver; } ;


 size_t FUNC_0 (void**) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_private *VAR_5,
       struct host_cmd_ds_command *VAR_6,
       u16 VAR_7, u16 *VAR_8)
{
 struct host_cmd_ds_tx_rate_cfg *VAR_9 = &VAR_6->params.tx_rate_cfg;
 struct mwifiex_rate_scope *VAR_10;
 struct mwifiex_rate_drop_pattern *VAR_11;
 u32 VAR_12;

 VAR_6->command = FUNC_1(VAR_0);

 VAR_9->action = FUNC_1(VAR_7);
 VAR_9->cfg_index = 0;

 VAR_10 = (struct mwifiex_rate_scope *) ((u8 *) VAR_9 +
        sizeof(struct host_cmd_ds_tx_rate_cfg));
 VAR_10->type = FUNC_1(VAR_4);
 VAR_10->length = FUNC_1
  (sizeof(*VAR_10) - sizeof(struct mwifiex_ie_types_header));
 if (VAR_8 != ((void*)0)) {
  VAR_10->hr_dsss_rate_bitmap = FUNC_1(VAR_8[0]);
  VAR_10->ofdm_rate_bitmap = FUNC_1(VAR_8[1]);
  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_10->ht_mcs_rate_bitmap); VAR_12++)
   VAR_10->ht_mcs_rate_bitmap[VAR_12] =
    FUNC_1(VAR_8[2 + VAR_12]);
  if (VAR_5->adapter->fw_api_ver == VAR_1) {
   for (VAR_12 = 0;
        VAR_12 < FUNC_0(VAR_10->vht_mcs_rate_bitmap);
        VAR_12++)
    VAR_10->vht_mcs_rate_bitmap[VAR_12] =
     FUNC_1(VAR_8[10 + VAR_12]);
  }
 } else {
  VAR_10->hr_dsss_rate_bitmap =
   FUNC_1(VAR_5->bitmap_rates[0]);
  VAR_10->ofdm_rate_bitmap =
   FUNC_1(VAR_5->bitmap_rates[1]);
  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_10->ht_mcs_rate_bitmap); VAR_12++)
   VAR_10->ht_mcs_rate_bitmap[VAR_12] =
    FUNC_1(VAR_5->bitmap_rates[2 + VAR_12]);
  if (VAR_5->adapter->fw_api_ver == VAR_1) {
   for (VAR_12 = 0;
        VAR_12 < FUNC_0(VAR_10->vht_mcs_rate_bitmap);
        VAR_12++)
    VAR_10->vht_mcs_rate_bitmap[VAR_12] =
     FUNC_1(VAR_5->bitmap_rates[10 + VAR_12]);
  }
 }

 VAR_11 = (struct mwifiex_rate_drop_pattern *) ((u8 *) VAR_10 +
          sizeof(struct mwifiex_rate_scope));
 VAR_11->type = FUNC_1(VAR_3);
 VAR_11->length = FUNC_1(sizeof(VAR_11->rate_drop_mode));
 VAR_11->rate_drop_mode = 0;

 VAR_6->size =
  FUNC_1(VAR_2 + sizeof(struct host_cmd_ds_tx_rate_cfg) +
       sizeof(struct mwifiex_rate_scope) +
       sizeof(struct mwifiex_rate_drop_pattern));

 return 0;
}
