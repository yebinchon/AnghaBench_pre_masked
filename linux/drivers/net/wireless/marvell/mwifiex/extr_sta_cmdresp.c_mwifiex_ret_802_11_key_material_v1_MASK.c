
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int key_len; int key; } ;
struct TYPE_8__ {TYPE_3__ key_param_set; } ;
struct mwifiex_private {int wpa_is_gtk_set; int scan_block; int port_open; TYPE_4__ aes_key; int adapter; } ;
struct TYPE_6__ {int key; int key_len; int key_info; } ;
struct host_cmd_ds_802_11_key_material {TYPE_2__ key_param_set; int action; } ;
struct TYPE_5__ {struct host_cmd_ds_802_11_key_material key_material; } ;
struct host_cmd_ds_command {TYPE_1__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_4(struct mwifiex_private *VAR_3,
           struct host_cmd_ds_command *VAR_4)
{
 struct host_cmd_ds_802_11_key_material *VAR_5 =
      &VAR_4->params.key_material;

 if (FUNC_0(VAR_5->action) == VAR_0) {
  if ((FUNC_0(VAR_5->key_param_set.key_info) & VAR_2)) {
   FUNC_3(VAR_3->adapter, VAR_1,
        "info: key: GTK is set\n");
   VAR_3->wpa_is_gtk_set = 1;
   VAR_3->scan_block = 0;
   VAR_3->port_open = 1;
  }
 }

 FUNC_2(VAR_3->aes_key.key_param_set.key, 0,
        sizeof(VAR_5->key_param_set.key));
 VAR_3->aes_key.key_param_set.key_len = VAR_5->key_param_set.key_len;
 FUNC_1(VAR_3->aes_key.key_param_set.key, VAR_5->key_param_set.key,
        FUNC_0(VAR_3->aes_key.key_param_set.key_len));

 return 0;
}
