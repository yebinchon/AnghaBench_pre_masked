
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
struct dpni_cmd_remove_fs_entry {void* mask_iova; void* key_iova; int key_size; int tc_id; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct fsl_mc_io*,struct fsl_mc_command*) ;

int FUNC_3(struct fsl_mc_io *VAR_1,
    u32 VAR_2,
    u16 VAR_3,
    u8 VAR_4,
    const struct dpni_rule_cfg *VAR_5)
{
 struct dpni_cmd_remove_fs_entry *VAR_6;
 struct fsl_mc_command VAR_7 = { 0 };


 VAR_7.header = FUNC_1(VAR_0,
       VAR_2,
       VAR_3);
 VAR_6 = (struct dpni_cmd_remove_fs_entry *)VAR_7.params;
 VAR_6->tc_id = VAR_4;
 VAR_6->key_size = VAR_5->key_size;
 VAR_6->key_iova = FUNC_0(VAR_5->key_iova);
 VAR_6->mask_iova = FUNC_0(VAR_5->mask_iova);


 return FUNC_2(VAR_1, &VAR_7);
}
