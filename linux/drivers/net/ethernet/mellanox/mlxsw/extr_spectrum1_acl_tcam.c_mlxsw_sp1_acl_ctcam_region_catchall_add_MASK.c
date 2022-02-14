
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_rule_info {int dummy; } ;
struct TYPE_2__ {int cchunk; struct mlxsw_sp_acl_rule_info* rulei; int centry; } ;
struct mlxsw_sp1_acl_tcam_region {TYPE_1__ catchall; int cregion; } ;
struct mlxsw_sp {int acl; } ;


 scalar_t__ FUNC_0 (struct mlxsw_sp_acl_rule_info*) ;
 int VAR_0 ;
 int FUNC_1 (struct mlxsw_sp_acl_rule_info*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (struct mlxsw_sp*,int *,int *,int *,struct mlxsw_sp_acl_rule_info*,int) ;
 int FUNC_6 (struct mlxsw_sp_acl_rule_info*) ;
 int FUNC_7 (struct mlxsw_sp_acl_rule_info*) ;
 struct mlxsw_sp_acl_rule_info* FUNC_8 (int ,int *) ;
 int FUNC_9 (struct mlxsw_sp_acl_rule_info*) ;

__attribute__((used)) static int
FUNC_10(struct mlxsw_sp *VAR_1,
     struct mlxsw_sp1_acl_tcam_region *VAR_2)
{
 struct mlxsw_sp_acl_rule_info *VAR_3;
 int VAR_4;

 FUNC_4(&VAR_2->cregion,
          &VAR_2->catchall.cchunk,
          VAR_0);
 VAR_3 = FUNC_8(VAR_1->acl, ((void*)0));
 if (FUNC_0(VAR_3)) {
  VAR_4 = FUNC_1(VAR_3);
  goto err_rulei_create;
 }
 VAR_4 = FUNC_6(VAR_3);
 if (FUNC_2(VAR_4))
  goto err_rulei_act_continue;
 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4)
  goto err_rulei_commit;
 VAR_4 = FUNC_5(VAR_1, &VAR_2->cregion,
        &VAR_2->catchall.cchunk,
        &VAR_2->catchall.centry,
        VAR_3, 0);
 if (VAR_4)
  goto err_entry_add;
 VAR_2->catchall.rulei = VAR_3;
 return 0;

err_entry_add:
err_rulei_commit:
err_rulei_act_continue:
 FUNC_9(VAR_3);
err_rulei_create:
 FUNC_3(&VAR_2->catchall.cchunk);
 return VAR_4;
}
