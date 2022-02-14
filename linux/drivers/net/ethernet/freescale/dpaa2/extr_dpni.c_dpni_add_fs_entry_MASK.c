
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct fsl_mc_io {int dummy; } ;
struct fsl_mc_command {scalar_t__ params; int header; int member_0; } ;
struct dpni_rule_cfg {int mask_iova; int key_iova; int key_size; } ;
struct dpni_fs_action_cfg {int flc; int flow_id; int options; } ;
struct dpni_cmd_add_fs_entry {void* flc; void* flow_id; void* options; void* mask_iova; void* key_iova; void* index; int key_size; int tc_id; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_4(struct fsl_mc_io *VAR_1,
        u32 VAR_2,
        u16 VAR_3,
        u8 VAR_4,
        u16 VAR_5,
        const struct dpni_rule_cfg *VAR_6,
        const struct dpni_fs_action_cfg *VAR_7)
{
 struct dpni_cmd_add_fs_entry *VAR_8;
 struct fsl_mc_command VAR_9 = { 0 };


 VAR_9.header = FUNC_2(VAR_0,
       VAR_2,
       VAR_3);
 VAR_8 = (struct dpni_cmd_add_fs_entry *)VAR_9.params;
 VAR_8->tc_id = VAR_4;
 VAR_8->key_size = VAR_6->key_size;
 VAR_8->index = FUNC_0(VAR_5);
 VAR_8->key_iova = FUNC_1(VAR_6->key_iova);
 VAR_8->mask_iova = FUNC_1(VAR_6->mask_iova);
 VAR_8->options = FUNC_0(VAR_7->options);
 VAR_8->flow_id = FUNC_0(VAR_7->flow_id);
 VAR_8->flc = FUNC_1(VAR_7->flc);


 return FUNC_3(VAR_1, &VAR_9);
}
