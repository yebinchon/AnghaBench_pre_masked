
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct iwl_wep_key {int dummy; } ;
struct iwl_wep_cmd {int num_keys; int global_key_type; TYPE_1__* key; } ;
struct iwl_rxon_context {TYPE_2__* wep_keys; int wep_key_cmd; } ;
struct iwl_priv {int dummy; } ;
struct iwl_host_cmd {size_t* len; int data; int id; } ;
struct TYPE_4__ {scalar_t__ key_size; int key; } ;
struct TYPE_3__ {int key_index; int key_offset; int * key; scalar_t__ key_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct iwl_priv*,struct iwl_host_cmd*) ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (struct iwl_wep_cmd*,int ,size_t) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct iwl_priv *VAR_3,
          struct iwl_rxon_context *VAR_4,
          bool VAR_5)
{
 int VAR_6, VAR_7 = 0;
 u8 VAR_8[sizeof(struct iwl_wep_cmd) +
  sizeof(struct iwl_wep_key) * VAR_1];
 struct iwl_wep_cmd *VAR_9 = (struct iwl_wep_cmd *)VAR_8;
 size_t VAR_10 = sizeof(struct iwl_wep_cmd);
 struct iwl_host_cmd VAR_11 = {
  .id = VAR_4->wep_key_cmd,
  .data = VAR_9, 
 };

 FUNC_3();

 FUNC_2(VAR_9, 0, VAR_10 +
   (sizeof(struct iwl_wep_key) * VAR_1));

 for (VAR_6 = 0; VAR_6 < VAR_1 ; VAR_6++) {
  VAR_9->key[VAR_6].key_index = VAR_6;
  if (VAR_4->wep_keys[VAR_6].key_size) {
   VAR_9->key[VAR_6].key_offset = VAR_6;
   VAR_7 = 1;
  } else {
   VAR_9->key[VAR_6].key_offset = VAR_0;
  }

  VAR_9->key[VAR_6].key_size = VAR_4->wep_keys[VAR_6].key_size;
  FUNC_1(&VAR_9->key[VAR_6].key[3], VAR_4->wep_keys[VAR_6].key,
    VAR_4->wep_keys[VAR_6].key_size);
 }

 VAR_9->global_key_type = VAR_2;
 VAR_9->num_keys = VAR_1;

 VAR_10 += sizeof(struct iwl_wep_key) * VAR_1;

 VAR_11.len[0] = VAR_10;

 if (VAR_7 || VAR_5)
  return FUNC_0(VAR_3, &VAR_11);
 else
  return 0;
}
