
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlxsw_sp_acl_tcam_region {int tcam_region_info; } ;
struct mlxsw_sp_acl_rule_info {int act_block; } ;
struct mlxsw_sp_acl_atcam_region {struct mlxsw_sp_acl_tcam_region* region; } ;
struct mlxsw_sp_acl_atcam_lkey_id {int id; int refcnt; } ;
struct TYPE_2__ {int value; int mask; int start; } ;
struct mlxsw_sp_acl_atcam_entry {TYPE_1__ delta_info; int enc_key; int erp_mask; struct mlxsw_sp_acl_atcam_lkey_id* lkey_id; } ;
struct mlxsw_sp {int core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int ,int ,int ,int ,int ,int ,int ,int ,int,int ,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_acl_rule_info*,int *,int) ;
 int VAR_2 ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct mlxsw_sp *VAR_3,
            struct mlxsw_sp_acl_atcam_region *VAR_4,
            struct mlxsw_sp_acl_atcam_entry *VAR_5,
            struct mlxsw_sp_acl_rule_info *VAR_6)
{
 struct mlxsw_sp_acl_atcam_lkey_id *VAR_7 = VAR_5->lkey_id;
 u8 VAR_8 = FUNC_4(VAR_5->erp_mask);
 struct mlxsw_sp_acl_tcam_region *VAR_9 = VAR_4->region;
 char VAR_10[VAR_0];
 u32 VAR_11, VAR_12;
 int VAR_13;

 VAR_13 = FUNC_5(VAR_3, VAR_6, &VAR_12, 1);
 if (VAR_13)
  return VAR_13;
 VAR_11 = FUNC_1(VAR_6->act_block);
 FUNC_2(VAR_10, 1, VAR_1,
        VAR_12, VAR_9->tcam_region_info,
        VAR_5->enc_key, VAR_8,
        VAR_5->delta_info.start,
        VAR_5->delta_info.mask,
        VAR_5->delta_info.value,
        FUNC_6(&VAR_7->refcnt) != 1, VAR_7->id,
        VAR_11);
 return FUNC_3(VAR_3->core, FUNC_0(VAR_2), VAR_10);
}
