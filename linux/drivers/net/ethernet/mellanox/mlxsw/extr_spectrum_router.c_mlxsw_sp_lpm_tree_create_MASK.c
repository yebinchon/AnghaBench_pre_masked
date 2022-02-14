
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_prefix_usage {int dummy; } ;
struct mlxsw_sp_lpm_tree {int proto; int ref_count; int prefix_ref_count; int prefix_usage; } ;
struct mlxsw_sp {int dummy; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;


 int VAR_0 ;
 struct mlxsw_sp_lpm_tree* FUNC_0 (int) ;
 int FUNC_1 (int *,struct mlxsw_sp_prefix_usage*,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct mlxsw_sp*,struct mlxsw_sp_lpm_tree*) ;
 struct mlxsw_sp_lpm_tree* FUNC_4 (struct mlxsw_sp*) ;
 int FUNC_5 (struct mlxsw_sp*,struct mlxsw_sp_lpm_tree*) ;
 int FUNC_6 (struct mlxsw_sp*,struct mlxsw_sp_prefix_usage*,struct mlxsw_sp_lpm_tree*) ;

__attribute__((used)) static struct mlxsw_sp_lpm_tree *
FUNC_7(struct mlxsw_sp *VAR_1,
    struct mlxsw_sp_prefix_usage *VAR_2,
    enum mlxsw_sp_l3proto VAR_3)
{
 struct mlxsw_sp_lpm_tree *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);
 VAR_4->proto = VAR_3;
 VAR_5 = FUNC_3(VAR_1, VAR_4);
 if (VAR_5)
  return FUNC_0(VAR_5);

 VAR_5 = FUNC_6(VAR_1, VAR_2,
      VAR_4);
 if (VAR_5)
  goto err_left_struct_set;
 FUNC_1(&VAR_4->prefix_usage, VAR_2,
        sizeof(VAR_4->prefix_usage));
 FUNC_2(&VAR_4->prefix_ref_count, 0,
        sizeof(VAR_4->prefix_ref_count));
 VAR_4->ref_count = 1;
 return VAR_4;

err_left_struct_set:
 FUNC_5(VAR_1, VAR_4);
 return FUNC_0(VAR_5);
}
