
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_sp_mr_tcam_route {int erif_list; int counter_index; int afa_block; int priv; int key; int min_mtu; int irif_index; int action; } ;
struct mlxsw_sp_mr_tcam_ops {int (* route_create ) (struct mlxsw_sp*,int ,int ,int *,int ,int ) ;int route_priv_size; } ;
struct mlxsw_sp_mr_tcam {int priv; } ;
struct TYPE_2__ {int route_action; int min_mtu; int irif_index; } ;
struct mlxsw_sp_mr_route_params {int prio; TYPE_1__ value; int key; } ;
struct mlxsw_sp {struct mlxsw_sp_mr_tcam_ops* mr_tcam_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mlxsw_sp*,int *) ;
 int FUNC_5 (struct mlxsw_sp*,int ) ;
 int FUNC_6 (struct mlxsw_sp*,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mlxsw_sp*,int ,int ,int ,int ,int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct mlxsw_sp*,int *,TYPE_1__*) ;
 int FUNC_11 (struct mlxsw_sp*,int ,int ,int *,int ,int ) ;

__attribute__((used)) static int
FUNC_12(struct mlxsw_sp *VAR_2, void *VAR_3,
         void *VAR_4,
         struct mlxsw_sp_mr_route_params *VAR_5)
{
 const struct mlxsw_sp_mr_tcam_ops *VAR_6 = VAR_2->mr_tcam_ops;
 struct mlxsw_sp_mr_tcam_route *VAR_7 = VAR_4;
 struct mlxsw_sp_mr_tcam *VAR_8 = VAR_3;
 int VAR_9;

 VAR_7->key = VAR_5->key;
 VAR_7->irif_index = VAR_5->value.irif_index;
 VAR_7->min_mtu = VAR_5->value.min_mtu;
 VAR_7->action = VAR_5->value.route_action;


 FUNC_7(&VAR_7->erif_list);
 VAR_9 = FUNC_10(VAR_2, &VAR_7->erif_list,
          &VAR_5->value);
 if (VAR_9)
  goto err_erif_populate;


 VAR_9 = FUNC_4(VAR_2, &VAR_7->counter_index);
 if (VAR_9)
  goto err_counter_alloc;


 VAR_7->afa_block = FUNC_8(VAR_2,
            VAR_7->action,
            VAR_7->irif_index,
            VAR_7->counter_index,
            VAR_7->min_mtu,
            &VAR_7->erif_list);
 if (FUNC_0(VAR_7->afa_block)) {
  VAR_9 = FUNC_1(VAR_7->afa_block);
  goto err_afa_block_create;
 }

 VAR_7->priv = FUNC_3(VAR_6->route_priv_size, VAR_1);
 if (!VAR_7->priv) {
  VAR_9 = -VAR_0;
  goto err_route_priv_alloc;
 }


 VAR_9 = VAR_6->route_create(VAR_2, VAR_8->priv, VAR_7->priv,
    &VAR_7->key, VAR_7->afa_block,
    VAR_5->prio);
 if (VAR_9)
  goto err_route_create;
 return 0;

err_route_create:
 FUNC_2(VAR_7->priv);
err_route_priv_alloc:
 FUNC_9(VAR_7->afa_block);
err_afa_block_create:
 FUNC_5(VAR_2, VAR_7->counter_index);
err_erif_populate:
err_counter_alloc:
 FUNC_6(VAR_2, &VAR_7->erif_list);
 return VAR_9;
}
