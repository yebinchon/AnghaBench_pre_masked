
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_sp_mr_tcam_route {int erif_list; int counter_index; int afa_block; int priv; int key; } ;
struct mlxsw_sp_mr_tcam_ops {int (* route_destroy ) (struct mlxsw_sp*,int ,int ,int *) ;} ;
struct mlxsw_sp_mr_tcam {int priv; } ;
struct mlxsw_sp {struct mlxsw_sp_mr_tcam_ops* mr_tcam_ops; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlxsw_sp*,int ) ;
 int FUNC_2 (struct mlxsw_sp*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mlxsw_sp*,int ,int ,int *) ;

__attribute__((used)) static void FUNC_5(struct mlxsw_sp *VAR_0,
        void *VAR_1, void *VAR_2)
{
 const struct mlxsw_sp_mr_tcam_ops *VAR_3 = VAR_0->mr_tcam_ops;
 struct mlxsw_sp_mr_tcam_route *VAR_4 = VAR_2;
 struct mlxsw_sp_mr_tcam *VAR_5 = VAR_1;

 VAR_3->route_destroy(VAR_0, VAR_5->priv, VAR_4->priv, &VAR_4->key);
 FUNC_0(VAR_4->priv);
 FUNC_3(VAR_4->afa_block);
 FUNC_1(VAR_0, VAR_4->counter_index);
 FUNC_2(VAR_0, &VAR_4->erif_list);
}
