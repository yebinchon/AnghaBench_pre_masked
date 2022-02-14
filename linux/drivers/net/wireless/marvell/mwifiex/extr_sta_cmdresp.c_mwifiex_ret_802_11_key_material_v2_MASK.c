
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int key; int key_len; } ;
struct TYPE_11__ {TYPE_2__ aes; } ;
struct TYPE_12__ {TYPE_3__ key_params; } ;
struct TYPE_13__ {TYPE_4__ key_param_set; } ;
struct mwifiex_private {int wpa_is_gtk_set; int scan_block; int port_open; TYPE_5__ aes_key_v2; int adapter; } ;
struct TYPE_14__ {int key; int key_len; } ;
struct TYPE_15__ {TYPE_6__ aes; } ;
struct TYPE_16__ {scalar_t__ key_type; TYPE_7__ key_params; int key_info; } ;
struct host_cmd_ds_802_11_key_material_v2 {TYPE_8__ key_param_set; int action; } ;
struct TYPE_9__ {struct host_cmd_ds_802_11_key_material_v2 key_material_v2; } ;
struct host_cmd_ds_command {TYPE_1__ params; } ;
typedef int __le16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct mwifiex_private *VAR_5,
           struct host_cmd_ds_command *VAR_6)
{
 struct host_cmd_ds_802_11_key_material_v2 *VAR_7;
 __le16 VAR_8;

 VAR_7 = &VAR_6->params.key_material_v2;
 if (FUNC_0(VAR_7->action) == VAR_0) {
  if ((FUNC_0(VAR_7->key_param_set.key_info) & VAR_2)) {
   FUNC_3(VAR_5->adapter, VAR_1, "info: key: GTK is set\n");
   VAR_5->wpa_is_gtk_set = 1;
   VAR_5->scan_block = 0;
   VAR_5->port_open = 1;
  }
 }

 if (VAR_7->key_param_set.key_type != VAR_3)
  return 0;

 FUNC_2(VAR_5->aes_key_v2.key_param_set.key_params.aes.key, 0,
        VAR_4);
 VAR_5->aes_key_v2.key_param_set.key_params.aes.key_len =
    VAR_7->key_param_set.key_params.aes.key_len;
 VAR_8 = VAR_5->aes_key_v2.key_param_set.key_params.aes.key_len;
 FUNC_1(VAR_5->aes_key_v2.key_param_set.key_params.aes.key,
        VAR_7->key_param_set.key_params.aes.key, FUNC_0(VAR_8));

 return 0;
}
