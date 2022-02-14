
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct list_head {int dummy; } ;
struct TYPE_8__ {int type; int subtype; int lmac_major; int lmac_minor; int umac_major; int umac_minor; } ;
struct TYPE_10__ {int external_dbg_cfg_name; int internal_dbg_cfg_name; int img_name; TYPE_3__ fw_ver; } ;
struct iwl_fw_runtime {TYPE_5__ dump; TYPE_4__* fw; TYPE_2__* trans; } ;
struct iwl_fw_ini_trigger {int data; int num_regions; int trigger_id; } ;
struct iwl_fw_ini_dump_info {int region_ids; int regions_num; int external_dbg_cfg_name; void* external_dbg_cfg_name_len; int internal_dbg_cfg_name; void* internal_dbg_cfg_name_len; int img_name; void* img_name_len; int build_tag; void* build_tag_len; void* umac_minor; void* umac_major; void* lmac_minor; void* lmac_major; void* rf_id_type; void* rf_id_step; void* rf_id_dash; void* rf_id_flavor; void* hw_type; void* hw_step; void* ver_subtype; void* ver_type; void* is_external_cfg; int trigger_id; void* version; } ;
struct iwl_fw_ini_dump_entry {int size; int list; scalar_t__ data; } ;
struct iwl_fw_error_dump_data {scalar_t__ data; void* len; void* type; } ;
typedef int __le32 ;
struct TYPE_9__ {int human_readable; } ;
struct TYPE_6__ {int external_ini_cfg; } ;
struct TYPE_7__ {int hw_rf_id; int hw_rev; TYPE_1__ dbg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_6 (int) ;
 struct iwl_fw_ini_dump_entry* FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,struct list_head*) ;
 int FUNC_10 (int ,int ,int) ;

__attribute__((used)) static u32 FUNC_11(struct iwl_fw_runtime *VAR_3,
        struct iwl_fw_ini_trigger *VAR_4,
        struct list_head *VAR_5)
{
 struct iwl_fw_ini_dump_entry *VAR_6;
 struct iwl_fw_error_dump_data *VAR_7;
 struct iwl_fw_ini_dump_info *VAR_8;
 u32 VAR_9 = FUNC_8(VAR_4->num_regions) * sizeof(__le32);
 u32 VAR_10 = sizeof(*VAR_7) + sizeof(*VAR_8) + VAR_9;

 VAR_6 = FUNC_7(sizeof(*VAR_6) + VAR_10, VAR_0);
 if (!VAR_6)
  return 0;

 VAR_6->size = VAR_10;

 VAR_7 = (void *)VAR_6->data;
 VAR_7->type = FUNC_6(VAR_1);
 VAR_7->len = FUNC_6(sizeof(*VAR_8) + VAR_9);

 VAR_8 = (void *)VAR_7->data;

 VAR_8->version = FUNC_6(VAR_2);
 VAR_8->trigger_id = VAR_4->trigger_id;
 VAR_8->is_external_cfg =
  FUNC_6(VAR_3->trans->dbg.external_ini_cfg);

 VAR_8->ver_type = FUNC_6(VAR_3->dump.fw_ver.type);
 VAR_8->ver_subtype = FUNC_6(VAR_3->dump.fw_ver.subtype);

 VAR_8->hw_step = FUNC_6(FUNC_0(VAR_3->trans->hw_rev));
 VAR_8->hw_type = FUNC_6(FUNC_1(VAR_3->trans->hw_rev));

 VAR_8->rf_id_flavor =
  FUNC_6(FUNC_3(VAR_3->trans->hw_rf_id));
 VAR_8->rf_id_dash = FUNC_6(FUNC_2(VAR_3->trans->hw_rf_id));
 VAR_8->rf_id_step = FUNC_6(FUNC_4(VAR_3->trans->hw_rf_id));
 VAR_8->rf_id_type = FUNC_6(FUNC_5(VAR_3->trans->hw_rf_id));

 VAR_8->lmac_major = FUNC_6(VAR_3->dump.fw_ver.lmac_major);
 VAR_8->lmac_minor = FUNC_6(VAR_3->dump.fw_ver.lmac_minor);
 VAR_8->umac_major = FUNC_6(VAR_3->dump.fw_ver.umac_major);
 VAR_8->umac_minor = FUNC_6(VAR_3->dump.fw_ver.umac_minor);

 VAR_8->build_tag_len = FUNC_6(sizeof(VAR_8->build_tag));
 FUNC_10(VAR_8->build_tag, VAR_3->fw->human_readable,
        sizeof(VAR_8->build_tag));

 VAR_8->img_name_len = FUNC_6(sizeof(VAR_8->img_name));
 FUNC_10(VAR_8->img_name, VAR_3->dump.img_name, sizeof(VAR_8->img_name));

 VAR_8->internal_dbg_cfg_name_len =
  FUNC_6(sizeof(VAR_8->internal_dbg_cfg_name));
 FUNC_10(VAR_8->internal_dbg_cfg_name, VAR_3->dump.internal_dbg_cfg_name,
        sizeof(VAR_8->internal_dbg_cfg_name));

 VAR_8->external_dbg_cfg_name_len =
  FUNC_6(sizeof(VAR_8->external_dbg_cfg_name));

 FUNC_10(VAR_8->external_dbg_cfg_name, VAR_3->dump.external_dbg_cfg_name,
        sizeof(VAR_8->external_dbg_cfg_name));

 VAR_8->regions_num = VAR_4->num_regions;
 FUNC_10(VAR_8->region_ids, VAR_4->data, VAR_9);




 FUNC_9(&VAR_6->list, VAR_5);

 return VAR_6->size;
}
