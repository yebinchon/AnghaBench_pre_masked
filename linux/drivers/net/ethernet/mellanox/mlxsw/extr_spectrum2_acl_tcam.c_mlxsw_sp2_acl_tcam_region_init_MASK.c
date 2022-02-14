
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_region {int dummy; } ;
struct mlxsw_sp2_acl_tcam_region {int aregion; struct mlxsw_sp_acl_tcam_region* region; } ;
struct mlxsw_sp2_acl_tcam {int atcam; } ;
struct mlxsw_sp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlxsw_sp*,int *,int *,struct mlxsw_sp_acl_tcam_region*,void*,int *) ;

__attribute__((used)) static int
FUNC_1(struct mlxsw_sp *VAR_1, void *VAR_2,
          void *VAR_3,
          struct mlxsw_sp_acl_tcam_region *VAR_4,
          void *VAR_5)
{
 struct mlxsw_sp2_acl_tcam_region *VAR_6 = VAR_2;
 struct mlxsw_sp2_acl_tcam *VAR_7 = VAR_3;

 VAR_6->region = VAR_4;

 return FUNC_0(VAR_1, &VAR_7->atcam,
           &VAR_6->aregion,
           VAR_4, VAR_5,
           &VAR_0);
}
