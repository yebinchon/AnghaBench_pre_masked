
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_priv {int tx_timeout_work; int wq; } ;


 int FUNC_0 (struct net_device*,char*) ;
 struct mlx5e_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct mlx5e_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_0, "TX timeout detected\n");
 FUNC_2(VAR_1->wq, &VAR_1->tx_timeout_work);
}
