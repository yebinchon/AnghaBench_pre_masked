
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5e_priv {int dummy; } ;
struct mlx5e_params {int dummy; } ;
struct mlx5e_channel_param {int icosq_cq; int tx_cq; int rx_cq; int icosq; int xdp_sq; int sq; int rq; } ;


 int FUNC_0 (struct mlx5e_priv*,int ,int *) ;
 int FUNC_1 (struct mlx5e_params*,int *) ;
 int FUNC_2 (struct mlx5e_priv*,int ,int *) ;
 int FUNC_3 (struct mlx5e_priv*,struct mlx5e_params*,int *,int *) ;
 int FUNC_4 (struct mlx5e_priv*,struct mlx5e_params*,int *,int *) ;
 int FUNC_5 (struct mlx5e_priv*,struct mlx5e_params*,int *) ;
 int FUNC_6 (struct mlx5e_priv*,struct mlx5e_params*,int *) ;
 int FUNC_7 (struct mlx5e_priv*,struct mlx5e_params*,int *) ;

__attribute__((used)) static void FUNC_8(struct mlx5e_priv *VAR_0,
          struct mlx5e_params *VAR_1,
          struct mlx5e_channel_param *VAR_2)
{
 u8 VAR_3;

 FUNC_3(VAR_0, VAR_1, ((void*)0), &VAR_2->rq);

 VAR_3 = FUNC_1(VAR_1, &VAR_2->rq);

 FUNC_5(VAR_0, VAR_1, &VAR_2->sq);
 FUNC_7(VAR_0, VAR_1, &VAR_2->xdp_sq);
 FUNC_2(VAR_0, VAR_3, &VAR_2->icosq);
 FUNC_4(VAR_0, VAR_1, ((void*)0), &VAR_2->rx_cq);
 FUNC_6(VAR_0, VAR_1, &VAR_2->tx_cq);
 FUNC_0(VAR_0, VAR_3, &VAR_2->icosq_cq);
}
