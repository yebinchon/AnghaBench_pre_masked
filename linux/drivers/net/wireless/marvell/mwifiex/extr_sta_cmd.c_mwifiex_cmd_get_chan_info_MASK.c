
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct mwifiex_ie_types_header {int dummy; } ;
struct TYPE_3__ {void* len; void* type; } ;
struct host_cmd_tlv_channel_band {TYPE_1__ header; } ;
struct host_cmd_ds_sta_configure {void* action; scalar_t__ tlv_buffer; } ;
struct TYPE_4__ {struct host_cmd_ds_sta_configure sta_cfg; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct host_cmd_tlv_channel_band*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct host_cmd_ds_command *VAR_3,
         u16 VAR_4)
{
 struct host_cmd_ds_sta_configure *VAR_5 = &VAR_3->params.sta_cfg;
 struct host_cmd_tlv_channel_band *VAR_6 =
 (struct host_cmd_tlv_channel_band *)VAR_5->tlv_buffer;

 VAR_3->command = FUNC_0(VAR_0);
 VAR_3->size = FUNC_0(sizeof(*VAR_5) +
    sizeof(*VAR_6) + VAR_1);
 VAR_5->action = FUNC_0(VAR_4);
 FUNC_1(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->header.type = FUNC_0(VAR_2);
 VAR_6->header.len = FUNC_0(sizeof(*VAR_6) -
     sizeof(struct mwifiex_ie_types_header));

 return 0;
}
