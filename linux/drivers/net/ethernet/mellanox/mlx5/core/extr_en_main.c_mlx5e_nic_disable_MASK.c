
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5e_priv {int set_rx_mode_work; int wq; TYPE_1__* netdev; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ reg_state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct mlx5e_priv*) ;
 int FUNC_3 (struct mlx5e_priv*) ;
 int FUNC_4 (struct mlx5e_priv*) ;
 int FUNC_5 (struct mlx5e_priv*) ;
 scalar_t__ FUNC_6 (struct mlx5e_priv*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(struct mlx5e_priv *VAR_1)
{
 struct mlx5_core_dev *VAR_2 = VAR_1->mdev;






 FUNC_10();
 if (FUNC_8(VAR_1->netdev))
  FUNC_1(VAR_1->netdev);
 FUNC_7(VAR_1->netdev);
 FUNC_11();

 FUNC_9(VAR_1->wq, &VAR_1->set_rx_mode_work);

 FUNC_4(VAR_1);
 if (FUNC_6(VAR_1))
  FUNC_5(VAR_1);

 FUNC_3(VAR_1);
 FUNC_0(VAR_2);
}
