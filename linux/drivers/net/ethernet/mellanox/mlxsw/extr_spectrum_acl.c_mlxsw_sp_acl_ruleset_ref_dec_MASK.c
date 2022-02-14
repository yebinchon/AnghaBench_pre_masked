
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_ruleset {scalar_t__ ref_count; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_acl_ruleset*) ;

__attribute__((used)) static void FUNC_1(struct mlxsw_sp *VAR_0,
      struct mlxsw_sp_acl_ruleset *VAR_1)
{
 if (--VAR_1->ref_count)
  return;
 FUNC_0(VAR_0, VAR_1);
}
