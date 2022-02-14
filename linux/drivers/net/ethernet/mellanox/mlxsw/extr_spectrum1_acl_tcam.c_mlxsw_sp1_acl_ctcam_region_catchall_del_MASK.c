
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_acl_rule_info {int dummy; } ;
struct TYPE_2__ {int cchunk; int centry; struct mlxsw_sp_acl_rule_info* rulei; } ;
struct mlxsw_sp1_acl_tcam_region {TYPE_1__ catchall; int cregion; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlxsw_sp*,int *,int *,int *) ;
 int FUNC_2 (struct mlxsw_sp_acl_rule_info*) ;

__attribute__((used)) static void
FUNC_3(struct mlxsw_sp *VAR_0,
     struct mlxsw_sp1_acl_tcam_region *VAR_1)
{
 struct mlxsw_sp_acl_rule_info *VAR_2 = VAR_1->catchall.rulei;

 FUNC_1(VAR_0, &VAR_1->cregion,
         &VAR_1->catchall.cchunk,
         &VAR_1->catchall.centry);
 FUNC_2(VAR_2);
 FUNC_0(&VAR_1->catchall.cchunk);
}
