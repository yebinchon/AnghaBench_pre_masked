
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5i_priv {int qp; } ;
struct mlx5e_priv {int mdev; int ** tisn; struct mlx5i_priv* ppriv; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct mlx5e_priv *VAR_0)
{
 struct mlx5i_priv *VAR_1 = VAR_0->ppriv;

 FUNC_0(VAR_0->mdev, VAR_0->tisn[0][0]);
 FUNC_1(VAR_0->mdev, &VAR_1->qp);
}
