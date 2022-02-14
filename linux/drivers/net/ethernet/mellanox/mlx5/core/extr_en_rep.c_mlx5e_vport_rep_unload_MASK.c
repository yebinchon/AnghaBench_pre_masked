
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_rep_priv {int dl_port; struct net_device* netdev; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; void* ppriv; } ;
struct mlx5_eswitch_rep {scalar_t__ vport; } ;
struct mlx5_core_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct mlx5_core_dev*,struct mlx5e_rep_priv*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (struct mlx5e_priv*) ;
 int FUNC_5 (struct mlx5e_priv*) ;
 int FUNC_6 (struct mlx5e_rep_priv*) ;
 struct mlx5e_rep_priv* FUNC_7 (struct mlx5_eswitch_rep*) ;
 struct mlx5e_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct mlx5_core_dev*,struct mlx5e_rep_priv*) ;
 int FUNC_10 (struct net_device*) ;

__attribute__((used)) static void
FUNC_11(struct mlx5_eswitch_rep *VAR_1)
{
 struct mlx5e_rep_priv *VAR_2 = FUNC_7(VAR_1);
 struct net_device *VAR_3 = VAR_2->netdev;
 struct mlx5e_priv *VAR_4 = FUNC_8(VAR_3);
 struct mlx5_core_dev *VAR_5 = VAR_4->mdev;
 void *VAR_6 = VAR_4->ppriv;

 if (FUNC_1(VAR_5, VAR_2))
  FUNC_0(&VAR_2->dl_port);
 FUNC_10(VAR_3);
 FUNC_9(VAR_5, VAR_2);
 FUNC_6(VAR_2);
 FUNC_5(VAR_4);
 if (VAR_1->vport == VAR_0)
  FUNC_3(VAR_4->mdev);
 FUNC_4(VAR_4);
 FUNC_2(VAR_6);
}
