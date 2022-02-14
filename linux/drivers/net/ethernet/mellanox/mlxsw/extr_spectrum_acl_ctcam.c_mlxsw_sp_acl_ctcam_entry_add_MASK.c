
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_rule_info {int dummy; } ;
struct mlxsw_sp_acl_ctcam_region {int parman; } ;
struct mlxsw_sp_acl_ctcam_entry {int parman_item; } ;
struct mlxsw_sp_acl_ctcam_chunk {int parman_prio; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (struct mlxsw_sp*,struct mlxsw_sp_acl_ctcam_region*,struct mlxsw_sp_acl_ctcam_entry*,struct mlxsw_sp_acl_rule_info*,int) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,int *,int *) ;

int FUNC_3(struct mlxsw_sp *VAR_0,
     struct mlxsw_sp_acl_ctcam_region *VAR_1,
     struct mlxsw_sp_acl_ctcam_chunk *VAR_2,
     struct mlxsw_sp_acl_ctcam_entry *VAR_3,
     struct mlxsw_sp_acl_rule_info *VAR_4,
     bool VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_1(VAR_1->parman, &VAR_2->parman_prio,
         &VAR_3->parman_item);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_3,
           VAR_4, VAR_5);
 if (VAR_6)
  goto err_rule_insert;
 return 0;

err_rule_insert:
 FUNC_2(VAR_1->parman, &VAR_2->parman_prio,
      &VAR_3->parman_item);
 return VAR_6;
}
