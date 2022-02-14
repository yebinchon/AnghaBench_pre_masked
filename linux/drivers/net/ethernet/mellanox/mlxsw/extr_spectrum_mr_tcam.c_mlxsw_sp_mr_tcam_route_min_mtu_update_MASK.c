
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlxsw_sp_mr_tcam_route {int min_mtu; struct mlxsw_afa_block* afa_block; int key; int priv; int erif_list; int counter_index; int irif_index; int action; } ;
struct mlxsw_sp_mr_tcam_ops {int (* route_update ) (struct mlxsw_sp*,int ,int *,struct mlxsw_afa_block*) ;} ;
struct mlxsw_sp {struct mlxsw_sp_mr_tcam_ops* mr_tcam_ops; } ;
struct mlxsw_afa_block {int dummy; } ;


 scalar_t__ FUNC_0 (struct mlxsw_afa_block*) ;
 int FUNC_1 (struct mlxsw_afa_block*) ;
 struct mlxsw_afa_block* FUNC_2 (struct mlxsw_sp*,int ,int ,int ,int ,int *) ;
 int FUNC_3 (struct mlxsw_afa_block*) ;
 int FUNC_4 (struct mlxsw_sp*,int ,int *,struct mlxsw_afa_block*) ;

__attribute__((used)) static int FUNC_5(struct mlxsw_sp *VAR_0,
       void *VAR_1, u16 VAR_2)
{
 const struct mlxsw_sp_mr_tcam_ops *VAR_3 = VAR_0->mr_tcam_ops;
 struct mlxsw_sp_mr_tcam_route *VAR_4 = VAR_1;
 struct mlxsw_afa_block *VAR_5;
 int VAR_6;


 VAR_5 = FUNC_2(VAR_0,
            VAR_4->action,
            VAR_4->irif_index,
            VAR_4->counter_index,
            VAR_2,
            &VAR_4->erif_list);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);


 VAR_6 = VAR_3->route_update(VAR_0, VAR_4->priv, &VAR_4->key, VAR_5);
 if (VAR_6)
  goto err;


 FUNC_3(VAR_4->afa_block);
 VAR_4->afa_block = VAR_5;
 VAR_4->min_mtu = VAR_2;
 return 0;
err:
 FUNC_3(VAR_5);
 return VAR_6;
}
