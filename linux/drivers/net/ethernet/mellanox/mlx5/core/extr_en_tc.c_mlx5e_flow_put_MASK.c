
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_tc_flow {int refcnt; } ;
struct mlx5e_priv {int dummy; } ;


 int FUNC_0 (struct mlx5e_tc_flow*,int ) ;
 int FUNC_1 (struct mlx5e_priv*,struct mlx5e_tc_flow*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct mlx5e_priv *VAR_1,
      struct mlx5e_tc_flow *VAR_2)
{
 if (FUNC_2(&VAR_2->refcnt)) {
  FUNC_1(VAR_1, VAR_2);
  FUNC_0(VAR_2, VAR_0);
 }
}
