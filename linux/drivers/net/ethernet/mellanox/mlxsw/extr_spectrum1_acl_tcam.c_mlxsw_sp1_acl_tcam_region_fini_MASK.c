
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp1_acl_tcam_region {int cregion; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp1_acl_tcam_region*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct mlxsw_sp *VAR_0, void *VAR_1)
{
 struct mlxsw_sp1_acl_tcam_region *VAR_2 = VAR_1;

 FUNC_0(VAR_0, VAR_2);
 FUNC_1(&VAR_2->cregion);
}
