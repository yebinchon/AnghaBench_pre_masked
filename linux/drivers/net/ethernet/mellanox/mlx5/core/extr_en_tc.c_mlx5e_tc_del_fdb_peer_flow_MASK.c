
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5e_tc_flow {TYPE_1__* priv; } ;
struct mlx5_eswitch {int dummy; } ;
struct mlx5_devcom {int dummy; } ;
struct TYPE_4__ {struct mlx5_devcom* devcom; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct TYPE_3__ {struct mlx5_core_dev* mdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_tc_flow*) ;
 struct mlx5_eswitch* FUNC_1 (struct mlx5_devcom*,int ) ;
 int FUNC_2 (struct mlx5_devcom*,int ) ;

__attribute__((used)) static void FUNC_3(struct mlx5e_tc_flow *VAR_1)
{
 struct mlx5_core_dev *VAR_2 = VAR_1->priv->mdev;
 struct mlx5_devcom *VAR_3 = VAR_2->priv.devcom;
 struct mlx5_eswitch *VAR_4;

 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (!VAR_4)
  return;

 FUNC_0(VAR_1);
 FUNC_2(VAR_3, VAR_0);
}
