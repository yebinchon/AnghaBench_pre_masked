
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_tcam_region {int key_info; } ;
struct mlxsw_sp_acl_atcam_region {int type; int ops; struct mlxsw_sp_acl_tcam_region* region; } ;
typedef enum mlxsw_sp_acl_atcam_region_type { ____Placeholder_mlxsw_sp_acl_atcam_region_type } mlxsw_sp_acl_atcam_region_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 int * VAR_4 ;

__attribute__((used)) static void
FUNC_1(struct mlxsw_sp_acl_atcam_region *VAR_5)
{
 struct mlxsw_sp_acl_tcam_region *VAR_6 = VAR_5->region;
 enum mlxsw_sp_acl_atcam_region_type VAR_7;
 unsigned int VAR_8;




 VAR_8 = FUNC_0(VAR_6->key_info);
 if (VAR_8 <= 2)
  VAR_7 = VAR_1;
 else if (VAR_8 <= 4)
  VAR_7 = VAR_2;
 else if (VAR_8 <= 8)
  VAR_7 = VAR_3;
 else
  VAR_7 = VAR_0;

 VAR_5->type = VAR_7;
 VAR_5->ops = VAR_4[VAR_7];
}
