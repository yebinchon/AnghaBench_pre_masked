
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5e_txqsq {int dummy; } ;
struct mlx5e_tx_wqe {int dummy; } ;
struct mlx5e_priv {struct mlx5e_txqsq** txq2sq; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct sk_buff*,struct mlx5e_txqsq*,struct net_device*,struct mlx5e_tx_wqe**,int *) ;
 struct mlx5e_tx_wqe* FUNC_1 (struct mlx5e_txqsq*,int,int *) ;
 int FUNC_2 (struct mlx5e_txqsq*,struct sk_buff*,struct mlx5e_tx_wqe*,int ,int ) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 () ;
 size_t FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

netdev_tx_t FUNC_7(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 struct mlx5e_priv *VAR_3 = FUNC_3(VAR_2);
 struct mlx5e_tx_wqe *VAR_4;
 struct mlx5e_txqsq *VAR_5;
 u16 VAR_6;

 VAR_5 = VAR_3->txq2sq[FUNC_5(VAR_1)];
 VAR_4 = FUNC_1(VAR_5, sizeof(*VAR_4), &VAR_6);


 VAR_1 = FUNC_0(VAR_1, VAR_5, VAR_2, &VAR_4, &VAR_6);
 if (FUNC_6(!VAR_1))
  return VAR_0;

 return FUNC_2(VAR_5, VAR_1, VAR_4, VAR_6, FUNC_4());
}
