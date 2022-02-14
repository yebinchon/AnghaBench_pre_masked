
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mwifiex_uap_bss_param {TYPE_2__* wep_cfg; } ;
struct mwifiex_ie_types_header {int dummy; } ;
struct TYPE_3__ {void* len; void* type; } ;
struct host_cmd_tlv_wep_key {int key; int is_default; int key_index; TYPE_1__ header; } ;
struct TYPE_4__ {scalar_t__ length; int key; int is_default; int key_index; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(u8 **VAR_4, void *VAR_5, u16 *VAR_6)
{
 struct host_cmd_tlv_wep_key *VAR_7;
 u16 VAR_8 = *VAR_6;
 int VAR_9;
 u8 *VAR_10 = *VAR_4;
 struct mwifiex_uap_bss_param *VAR_11 = VAR_5;

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  if (VAR_11->wep_cfg[VAR_9].length &&
      (VAR_11->wep_cfg[VAR_9].length == VAR_3 ||
       VAR_11->wep_cfg[VAR_9].length == VAR_2)) {
   VAR_7 = (struct host_cmd_tlv_wep_key *)VAR_10;
   VAR_7->header.type =
    FUNC_0(VAR_1);
   VAR_7->header.len =
    FUNC_0(VAR_11->wep_cfg[VAR_9].length + 2);
   VAR_7->key_index = VAR_11->wep_cfg[VAR_9].key_index;
   VAR_7->is_default = VAR_11->wep_cfg[VAR_9].is_default;
   FUNC_1(VAR_7->key, VAR_11->wep_cfg[VAR_9].key,
          VAR_11->wep_cfg[VAR_9].length);
   VAR_8 += sizeof(struct mwifiex_ie_types_header) + 2 +
        VAR_11->wep_cfg[VAR_9].length;
   VAR_10 += sizeof(struct mwifiex_ie_types_header) + 2 +
        VAR_11->wep_cfg[VAR_9].length;
  }
 }

 *VAR_6 = VAR_8;
 *VAR_4 = VAR_10;

 return;
}
