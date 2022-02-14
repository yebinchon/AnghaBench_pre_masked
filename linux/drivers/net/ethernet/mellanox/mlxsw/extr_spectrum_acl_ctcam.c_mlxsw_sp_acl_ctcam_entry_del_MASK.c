
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_ctcam_region {int parman; } ;
struct mlxsw_sp_acl_ctcam_entry {int parman_item; } ;
struct mlxsw_sp_acl_ctcam_chunk {int parman_prio; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_acl_ctcam_region*,struct mlxsw_sp_acl_ctcam_entry*) ;
 int FUNC_1 (int ,int *,int *) ;

void FUNC_2(struct mlxsw_sp *VAR_0,
      struct mlxsw_sp_acl_ctcam_region *VAR_1,
      struct mlxsw_sp_acl_ctcam_chunk *VAR_2,
      struct mlxsw_sp_acl_ctcam_entry *VAR_3)
{
 FUNC_0(VAR_0, VAR_1, VAR_3);
 FUNC_1(VAR_1->parman, &VAR_2->parman_prio,
      &VAR_3->parman_item);
}
