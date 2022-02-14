
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_priv {int set_rx_mode_work; int wq; } ;


 struct mlx5e_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct mlx5e_priv *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->wq, &VAR_1->set_rx_mode_work);
}
