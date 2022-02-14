
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reoffload_flows_work; } ;
struct mlx5e_rep_priv {TYPE_1__ uplink_priv; } ;
struct mlx5e_priv {int events_nb; struct mlx5e_rep_priv* ppriv; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*,int *) ;
 int FUNC_3 (struct mlx5e_priv*) ;

__attribute__((used)) static void FUNC_4(struct mlx5e_priv *VAR_0)
{
 struct mlx5_core_dev *VAR_1 = VAR_0->mdev;
 struct mlx5e_rep_priv *VAR_2 = VAR_0->ppriv;




 FUNC_2(VAR_1, &VAR_0->events_nb);
 FUNC_0(&VAR_2->uplink_priv.reoffload_flows_work);
 FUNC_1(VAR_1);
}
