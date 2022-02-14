
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_region {int priv; } ;
struct mlxsw_sp_acl_tcam_ops {int (* entry_action_replace ) (struct mlxsw_sp*,int ,int ,struct mlxsw_sp_acl_rule_info*) ;} ;
struct mlxsw_sp_acl_tcam_entry {int priv; } ;
struct mlxsw_sp_acl_rule_info {int dummy; } ;
struct mlxsw_sp {struct mlxsw_sp_acl_tcam_ops* acl_tcam_ops; } ;


 int FUNC_0 (struct mlxsw_sp*,int ,int ,struct mlxsw_sp_acl_rule_info*) ;

__attribute__((used)) static int
FUNC_1(struct mlxsw_sp *VAR_0,
           struct mlxsw_sp_acl_tcam_region *VAR_1,
           struct mlxsw_sp_acl_tcam_entry *VAR_2,
           struct mlxsw_sp_acl_rule_info *VAR_3)
{
 const struct mlxsw_sp_acl_tcam_ops *VAR_4 = VAR_0->acl_tcam_ops;

 return VAR_4->entry_action_replace(VAR_0, VAR_1->priv,
      VAR_2->priv, VAR_3);
}
