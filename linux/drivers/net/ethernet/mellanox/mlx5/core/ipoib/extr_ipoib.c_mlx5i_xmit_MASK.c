
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct mlx5i_priv {int qkey; } ;
struct mlx5e_txqsq {int dummy; } ;
struct mlx5e_priv {struct mlx5i_priv* ppriv; struct mlx5e_txqsq** txq2sq; } ;
struct mlx5_ib_ah {int av; } ;
struct ib_ah {int dummy; } ;


 struct mlx5e_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct mlx5e_txqsq*,struct sk_buff*,int *,int ,int ,int ) ;
 int FUNC_2 () ;
 size_t FUNC_3 (struct sk_buff*) ;
 struct mlx5_ib_ah* FUNC_4 (struct ib_ah*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0, struct sk_buff *VAR_1,
        struct ib_ah *VAR_2, u32 VAR_3)
{
 struct mlx5e_priv *VAR_4 = FUNC_0(VAR_0);
 struct mlx5e_txqsq *VAR_5 = VAR_4->txq2sq[FUNC_3(VAR_1)];
 struct mlx5_ib_ah *VAR_6 = FUNC_4(VAR_2);
 struct mlx5i_priv *VAR_7 = VAR_4->ppriv;

 return FUNC_1(VAR_5, VAR_1, &VAR_6->av, VAR_3, VAR_7->qkey, FUNC_2());
}
