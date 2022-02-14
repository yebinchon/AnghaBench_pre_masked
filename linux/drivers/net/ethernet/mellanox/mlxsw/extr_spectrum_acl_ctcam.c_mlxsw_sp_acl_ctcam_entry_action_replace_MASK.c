
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_rule_info {int priority; int act_block; } ;
struct mlxsw_sp_acl_ctcam_region {int dummy; } ;
struct mlxsw_sp_acl_ctcam_entry {int dummy; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_acl_ctcam_region*,struct mlxsw_sp_acl_ctcam_entry*,int ,int ) ;

int FUNC_1(struct mlxsw_sp *VAR_0,
         struct mlxsw_sp_acl_ctcam_region *VAR_1,
         struct mlxsw_sp_acl_ctcam_entry *VAR_2,
         struct mlxsw_sp_acl_rule_info *VAR_3)
{
 return FUNC_0(VAR_0, VAR_1,
             VAR_2,
             VAR_3->act_block,
             VAR_3->priority);
}
