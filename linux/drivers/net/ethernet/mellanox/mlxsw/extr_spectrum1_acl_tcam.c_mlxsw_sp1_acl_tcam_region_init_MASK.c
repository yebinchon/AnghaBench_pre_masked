
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_region {int dummy; } ;
struct mlxsw_sp1_acl_tcam_region {int cregion; struct mlxsw_sp_acl_tcam_region* region; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp1_acl_tcam_region*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlxsw_sp*,int *,struct mlxsw_sp_acl_tcam_region*,int *) ;

__attribute__((used)) static int
FUNC_3(struct mlxsw_sp *VAR_1, void *VAR_2,
          void *VAR_3,
          struct mlxsw_sp_acl_tcam_region *VAR_4,
          void *VAR_5)
{
 struct mlxsw_sp1_acl_tcam_region *VAR_6 = VAR_2;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_1, &VAR_6->cregion,
          VAR_4,
          &VAR_0);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_0(VAR_1, VAR_6);
 if (VAR_7)
  goto err_catchall_add;
 VAR_6->region = VAR_4;
 return 0;

err_catchall_add:
 FUNC_1(&VAR_6->cregion);
 return VAR_7;
}
