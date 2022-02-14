
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mwifiex_scan_cmd_config {int tlv_buf_len; int tlv_buf; int specific_bssid; int bss_mode; } ;
struct host_cmd_ds_802_11_scan {int tlv_buffer; int bssid; int bss_mode; } ;
struct TYPE_2__ {struct host_cmd_ds_802_11_scan scan; } ;
struct host_cmd_ds_command {void* size; void* command; TYPE_1__ params; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;

int FUNC_2(struct host_cmd_ds_command *VAR_2,
       struct mwifiex_scan_cmd_config *VAR_3)
{
 struct host_cmd_ds_802_11_scan *VAR_4 = &VAR_2->params.scan;


 VAR_4->bss_mode = VAR_3->bss_mode;
 FUNC_1(VAR_4->bssid, VAR_3->specific_bssid,
        sizeof(VAR_4->bssid));
 FUNC_1(VAR_4->tlv_buffer, VAR_3->tlv_buf, VAR_3->tlv_buf_len);

 VAR_2->command = FUNC_0(VAR_0);


 VAR_2->size = FUNC_0((u16) (sizeof(VAR_4->bss_mode)
       + sizeof(VAR_4->bssid)
       + VAR_3->tlv_buf_len + VAR_1));

 return 0;
}
