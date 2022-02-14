
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlxsw_sp_vr {int dummy; } ;
struct mlxsw_sp_lpm_tree {int prefix_ref_count; int id; } ;
struct mlxsw_sp_fib {int proto; } ;
struct mlxsw_sp {TYPE_2__* router; int core; } ;
typedef enum mlxsw_sp_l3proto { ____Placeholder_mlxsw_sp_l3proto } mlxsw_sp_l3proto ;
struct TYPE_3__ {struct mlxsw_sp_lpm_tree** proto_trees; } ;
struct TYPE_4__ {TYPE_1__ lpm; struct mlxsw_sp_vr* vrs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_lpm_tree*) ;
 int FUNC_3 (struct mlxsw_sp_vr*,int) ;
 int FUNC_4 (struct mlxsw_sp*,int ,struct mlxsw_sp_lpm_tree*) ;
 int FUNC_5 (struct mlxsw_sp_vr*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct mlxsw_sp *VAR_1,
      struct mlxsw_sp_fib *VAR_2,
      struct mlxsw_sp_lpm_tree *VAR_3)
{
 enum mlxsw_sp_l3proto VAR_4 = VAR_2->proto;
 struct mlxsw_sp_lpm_tree *VAR_5;
 u8 VAR_6, VAR_7 = VAR_3->id;
 struct mlxsw_sp_vr *VAR_8;
 int VAR_9, VAR_10;

 VAR_5 = VAR_1->router->lpm.proto_trees[VAR_4];
 VAR_6 = VAR_5->id;

 for (VAR_9 = 0; VAR_9 < FUNC_0(VAR_1->core, VAR_0); VAR_9++) {
  VAR_8 = &VAR_1->router->vrs[VAR_9];
  if (!FUNC_5(VAR_8, VAR_4, VAR_6))
   continue;
  VAR_10 = FUNC_4(VAR_1,
         FUNC_3(VAR_8, VAR_4),
         VAR_3);
  if (VAR_10)
   goto err_tree_replace;
 }

 FUNC_1(VAR_3->prefix_ref_count, VAR_5->prefix_ref_count,
        sizeof(VAR_3->prefix_ref_count));
 VAR_1->router->lpm.proto_trees[VAR_4] = VAR_3;
 FUNC_2(VAR_1, VAR_5);

 return 0;

err_tree_replace:
 for (VAR_9--; VAR_9 >= 0; VAR_9--) {
  if (!FUNC_5(VAR_8, VAR_4, VAR_7))
   continue;
  FUNC_4(VAR_1,
          FUNC_3(VAR_8, VAR_4),
          VAR_5);
 }
 return VAR_10;
}
