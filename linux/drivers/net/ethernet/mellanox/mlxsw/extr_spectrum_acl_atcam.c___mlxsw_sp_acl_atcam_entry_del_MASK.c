
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_acl_atcam_region {int entries_ht; } ;
struct mlxsw_sp_acl_atcam_entry {int erp_mask; int list; int ht_node; } ;
struct mlxsw_sp {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct mlxsw_sp*,struct mlxsw_sp_acl_atcam_region*,struct mlxsw_sp_acl_atcam_entry*) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_acl_atcam_region*,int ,struct mlxsw_sp_acl_atcam_entry*) ;
 int FUNC_3 (struct mlxsw_sp_acl_atcam_region*,int ) ;
 int FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct mlxsw_sp *VAR_1,
          struct mlxsw_sp_acl_atcam_region *VAR_2,
          struct mlxsw_sp_acl_atcam_entry *VAR_3)
{
 FUNC_1(VAR_1, VAR_2, VAR_3);
 FUNC_2(VAR_1, VAR_2, VAR_3->erp_mask, VAR_3);
 FUNC_4(&VAR_2->entries_ht, &VAR_3->ht_node,
          VAR_0);
 FUNC_0(&VAR_3->list);
 FUNC_3(VAR_2, VAR_3->erp_mask);
}
