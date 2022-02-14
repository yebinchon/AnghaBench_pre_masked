
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_tcam_erif_list {int dummy; } ;
struct mlxsw_sp_mr_tcam_route {int min_mtu; int irif_index; int action; struct mlxsw_sp_mr_tcam_erif_list erif_list; struct mlxsw_afa_block* afa_block; int key; int priv; int counter_index; } ;
struct mlxsw_sp_mr_tcam_ops {int (* route_update ) (struct mlxsw_sp*,int ,int *,struct mlxsw_afa_block*) ;} ;
struct mlxsw_sp_mr_route_info {int min_mtu; int irif_index; int route_action; } ;
struct mlxsw_sp {struct mlxsw_sp_mr_tcam_ops* mr_tcam_ops; } ;
struct mlxsw_afa_block {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlxsw_afa_block*) ;
 int FUNC_1 (struct mlxsw_afa_block*) ;
 int FUNC_2 (struct mlxsw_sp*,struct mlxsw_sp_mr_tcam_erif_list*) ;
 int FUNC_3 (struct mlxsw_sp_mr_tcam_erif_list*) ;
 int FUNC_4 (struct mlxsw_sp_mr_tcam_erif_list*,struct mlxsw_sp_mr_tcam_erif_list*) ;
 struct mlxsw_afa_block* FUNC_5 (struct mlxsw_sp*,int ,int ,int ,int ,struct mlxsw_sp_mr_tcam_erif_list*) ;
 int FUNC_6 (struct mlxsw_afa_block*) ;
 int FUNC_7 (struct mlxsw_sp*,struct mlxsw_sp_mr_tcam_erif_list*,struct mlxsw_sp_mr_route_info*) ;
 int FUNC_8 (struct mlxsw_sp*,int ,int *,struct mlxsw_afa_block*) ;

__attribute__((used)) static int
FUNC_9(struct mlxsw_sp *VAR_0, void *VAR_1,
         struct mlxsw_sp_mr_route_info *VAR_2)
{
 const struct mlxsw_sp_mr_tcam_ops *VAR_3 = VAR_0->mr_tcam_ops;
 struct mlxsw_sp_mr_tcam_route *VAR_4 = VAR_1;
 struct mlxsw_sp_mr_tcam_erif_list VAR_5;
 struct mlxsw_afa_block *VAR_6;
 int VAR_7;


 FUNC_3(&VAR_5);
 VAR_7 = FUNC_7(VAR_0, &VAR_5, VAR_2);
 if (VAR_7)
  goto err_erif_populate;


 VAR_6 = FUNC_5(VAR_0,
            VAR_2->route_action,
            VAR_2->irif_index,
            VAR_4->counter_index,
            VAR_2->min_mtu,
            &VAR_5);
 if (FUNC_0(VAR_6)) {
  VAR_7 = FUNC_1(VAR_6);
  goto err_afa_block_create;
 }


 VAR_7 = VAR_3->route_update(VAR_0, VAR_4->priv, &VAR_4->key, VAR_6);
 if (VAR_7)
  goto err_route_write;

 FUNC_6(VAR_4->afa_block);
 FUNC_2(VAR_0, &VAR_4->erif_list);
 VAR_4->afa_block = VAR_6;
 FUNC_4(&VAR_4->erif_list, &VAR_5);
 VAR_4->action = VAR_2->route_action;
 VAR_4->irif_index = VAR_2->irif_index;
 VAR_4->min_mtu = VAR_2->min_mtu;
 return 0;

err_route_write:
 FUNC_6(VAR_6);
err_afa_block_create:
err_erif_populate:
 FUNC_2(VAR_0, &VAR_5);
 return VAR_7;
}
