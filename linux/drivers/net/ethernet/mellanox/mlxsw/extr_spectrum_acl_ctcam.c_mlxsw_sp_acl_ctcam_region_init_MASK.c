
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_region {int dummy; } ;
struct mlxsw_sp_acl_ctcam_region_ops {int dummy; } ;
struct mlxsw_sp_acl_ctcam_region {int parman; struct mlxsw_sp_acl_ctcam_region_ops const* ops; struct mlxsw_sp_acl_tcam_region* region; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct mlxsw_sp_acl_ctcam_region*) ;

int
FUNC_1(struct mlxsw_sp *VAR_2,
          struct mlxsw_sp_acl_ctcam_region *VAR_3,
          struct mlxsw_sp_acl_tcam_region *VAR_4,
          const struct mlxsw_sp_acl_ctcam_region_ops *VAR_5)
{
 VAR_3->region = VAR_4;
 VAR_3->ops = VAR_5;
 VAR_3->parman = FUNC_0(&VAR_1,
     VAR_3);
 if (!VAR_3->parman)
  return -VAR_0;
 return 0;
}
