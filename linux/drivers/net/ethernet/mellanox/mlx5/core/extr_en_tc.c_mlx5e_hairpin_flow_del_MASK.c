
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_tc_flow {TYPE_1__* hpe; int hairpin; } ;
struct mlx5e_priv {int dummy; } ;
struct TYPE_2__ {int flows_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5e_priv*,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mlx5e_priv *VAR_0,
       struct mlx5e_tc_flow *VAR_1)
{

 if (!VAR_1->hpe)
  return;

 FUNC_2(&VAR_1->hpe->flows_lock);
 FUNC_0(&VAR_1->hairpin);
 FUNC_3(&VAR_1->hpe->flows_lock);

 FUNC_1(VAR_0, VAR_1->hpe);
 VAR_1->hpe = ((void*)0);
}
