
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct mlx5e_txqsq {int dummy; } ;
struct mlx5e_priv {int* tx_rates; int state_lock; int state; struct mlx5e_txqsq** txq2sq; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_core_dev*,int) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct net_device*,struct mlx5e_txqsq*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*,char*,...) ;
 struct mlx5e_priv* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3, int VAR_4, u32 VAR_5)
{
 struct mlx5e_priv *VAR_6 = FUNC_6(VAR_3);
 struct mlx5_core_dev *VAR_7 = VAR_6->mdev;
 struct mlx5e_txqsq *VAR_8 = VAR_6->txq2sq[VAR_4];
 int VAR_9 = 0;

 if (!FUNC_1(VAR_7)) {
  FUNC_5(VAR_3, "Rate limiting is not supported on this device\n");
  return -VAR_0;
 }


 VAR_5 = VAR_5 << 10;


 if (VAR_5 && !FUNC_0(VAR_7, VAR_5)) {
  FUNC_5(VAR_3, "TX rate %u, is not in range\n", VAR_5);
  return -VAR_1;
 }

 FUNC_3(&VAR_6->state_lock);
 if (FUNC_7(VAR_2, &VAR_6->state))
  VAR_9 = FUNC_2(VAR_3, VAR_8, VAR_5);
 if (!VAR_9)
  VAR_6->tx_rates[VAR_4] = VAR_5;
 FUNC_4(&VAR_6->state_lock);

 return VAR_9;
}
