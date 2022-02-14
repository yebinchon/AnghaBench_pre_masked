
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ reg_state; } ;
struct mlx5e_priv {int set_rx_mode_work; int wq; struct mlx5_core_dev* mdev; struct net_device* netdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,struct net_device*) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int FUNC_2 (struct mlx5e_priv*) ;
 int FUNC_3 (struct mlx5e_priv*) ;
 int FUNC_4 (struct mlx5e_priv*) ;
 int FUNC_5 (struct mlx5e_priv*) ;
 int FUNC_6 (struct mlx5e_priv*) ;
 scalar_t__ FUNC_7 (struct mlx5e_priv*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct mlx5e_priv*) ;
 int FUNC_10 (struct mlx5e_priv*) ;
 int FUNC_11 (struct net_device*) ;
 scalar_t__ FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 () ;
 int FUNC_15 () ;

__attribute__((used)) static void FUNC_16(struct mlx5e_priv *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->netdev;
 struct mlx5_core_dev *VAR_4 = VAR_2->mdev;

 FUNC_5(VAR_2);


 if (!FUNC_12(VAR_3))
  FUNC_1(VAR_4, VAR_0);

 FUNC_10(VAR_2);
 FUNC_9(VAR_2);

 FUNC_0(VAR_4, VAR_3);

 FUNC_3(VAR_2);
 if (FUNC_7(VAR_2))
  FUNC_6(VAR_2);

 FUNC_4(VAR_2);
 if (VAR_3->reg_state != VAR_1)
  return;




 FUNC_13(VAR_2->wq, &VAR_2->set_rx_mode_work);

 FUNC_14();
 if (FUNC_12(VAR_3))
  FUNC_8(VAR_3);
 FUNC_11(VAR_3);
 FUNC_15();
}
