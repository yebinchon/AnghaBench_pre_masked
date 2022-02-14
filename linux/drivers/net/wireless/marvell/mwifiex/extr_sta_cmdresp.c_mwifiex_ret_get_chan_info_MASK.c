
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwifiex_private {int dummy; } ;
struct mwifiex_channel_band {int channel; int band_config; } ;
struct mwifiex_band_config {int dummy; } ;
struct host_cmd_tlv_channel_band {int channel; int band_config; } ;
struct host_cmd_ds_sta_configure {scalar_t__ tlv_buffer; } ;
struct TYPE_2__ {struct host_cmd_ds_sta_configure sta_cfg; } ;
struct host_cmd_ds_command {TYPE_1__ params; } ;


 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_private *VAR_0,
         struct host_cmd_ds_command *VAR_1,
         struct mwifiex_channel_band *VAR_2)
{
 struct host_cmd_ds_sta_configure *VAR_3 = &VAR_1->params.sta_cfg;
 struct host_cmd_tlv_channel_band *VAR_4;

 VAR_4 =
 (struct host_cmd_tlv_channel_band *)VAR_3->tlv_buffer;
 FUNC_0(&VAR_2->band_config, &VAR_4->band_config,
        sizeof(struct mwifiex_band_config));
 VAR_2->channel = VAR_4->channel;

 return 0;
}
