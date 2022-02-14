
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
typedef int u16 ;
struct mwifiex_rate_scope {int * vht_mcs_rate_bitmap; int * ht_mcs_rate_bitmap; int ofdm_rate_bitmap; int hr_dsss_rate_bitmap; } ;
struct mwifiex_private {scalar_t__ data_rate; scalar_t__ is_data_rate_auto; void** bitmap_rates; TYPE_2__* adapter; } ;
struct mwifiex_ie_types_header {int len; int type; } ;
struct host_cmd_ds_tx_rate_cfg {int dummy; } ;
struct TYPE_3__ {struct host_cmd_ds_tx_rate_cfg tx_rate_cfg; } ;
struct host_cmd_ds_command {int size; TYPE_1__ params; } ;
struct TYPE_4__ {int fw_api_ver; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;

 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct mwifiex_private*) ;
 int FUNC_3 (struct mwifiex_private*,int ,int ,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct mwifiex_private *VAR_4,
       struct host_cmd_ds_command *VAR_5)
{
 struct host_cmd_ds_tx_rate_cfg *VAR_6 = &VAR_5->params.tx_rate_cfg;
 struct mwifiex_rate_scope *VAR_7;
 struct mwifiex_ie_types_header *VAR_8;
 u16 VAR_9, VAR_10, VAR_11;
 u8 *VAR_12;
 u32 VAR_13;

 VAR_12 = ((u8 *)VAR_6) + sizeof(struct host_cmd_ds_tx_rate_cfg);
 VAR_11 = FUNC_1(VAR_5->size) - VAR_3 - sizeof(*VAR_6);

 while (VAR_11 >= sizeof(*VAR_8)) {
  VAR_8 = (struct mwifiex_ie_types_header *)VAR_12;
  VAR_9 = FUNC_1(VAR_8->type);
  VAR_10 = FUNC_1(VAR_8->len);

  if (VAR_11 < (sizeof(*VAR_8) + VAR_10))
   break;

  switch (VAR_9) {
  case 128:
   VAR_7 = (struct mwifiex_rate_scope *) VAR_12;
   VAR_4->bitmap_rates[0] =
    FUNC_1(VAR_7->hr_dsss_rate_bitmap);
   VAR_4->bitmap_rates[1] =
    FUNC_1(VAR_7->ofdm_rate_bitmap);
   for (VAR_13 = 0;
        VAR_13 < FUNC_0(VAR_7->ht_mcs_rate_bitmap);
        VAR_13++)
    VAR_4->bitmap_rates[2 + VAR_13] =
     FUNC_1(VAR_7->
          ht_mcs_rate_bitmap[VAR_13]);

   if (VAR_4->adapter->fw_api_ver == VAR_2) {
    for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_7->
          vht_mcs_rate_bitmap);
         VAR_13++)
     VAR_4->bitmap_rates[10 + VAR_13] =
         FUNC_1(VAR_7->
       vht_mcs_rate_bitmap[VAR_13]);
   }
   break;

  }

  VAR_12 += (sizeof(*VAR_8) + VAR_10);
  VAR_11 -= (sizeof(*VAR_8) + VAR_10);
 }

 VAR_4->is_data_rate_auto = FUNC_2(VAR_4);

 if (VAR_4->is_data_rate_auto)
  VAR_4->data_rate = 0;
 else
  return FUNC_3(VAR_4, VAR_1,
     VAR_0, 0, ((void*)0), 0);

 return 0;
}
