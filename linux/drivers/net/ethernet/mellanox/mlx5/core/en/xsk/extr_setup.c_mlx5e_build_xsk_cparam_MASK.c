
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5e_xsk_param {int dummy; } ;
struct mlx5e_priv {int dummy; } ;
struct mlx5e_params {int dummy; } ;
struct mlx5e_channel_param {int icosq_cq; int tx_cq; int rx_cq; int icosq; int xdp_sq; int rq; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5e_priv*,int const,int *) ;
 int FUNC_1 (struct mlx5e_priv*,struct mlx5e_params*,struct mlx5e_xsk_param*,int *) ;
 int FUNC_2 (struct mlx5e_priv*,struct mlx5e_params*,struct mlx5e_xsk_param*,int *) ;
 int FUNC_3 (struct mlx5e_priv*,struct mlx5e_params*,int *) ;
 int FUNC_4 (struct mlx5e_priv*,struct mlx5e_params*,int *) ;
 int FUNC_5 (struct mlx5e_priv*,int const,int *) ;

__attribute__((used)) static void FUNC_6(struct mlx5e_priv *VAR_1,
       struct mlx5e_params *VAR_2,
       struct mlx5e_xsk_param *VAR_3,
       struct mlx5e_channel_param *VAR_4)
{
 const u8 VAR_5 = VAR_0;

 FUNC_1(VAR_1, VAR_2, VAR_3, &VAR_4->rq);
 FUNC_4(VAR_1, VAR_2, &VAR_4->xdp_sq);
 FUNC_5(VAR_1, VAR_5, &VAR_4->icosq);
 FUNC_2(VAR_1, VAR_2, VAR_3, &VAR_4->rx_cq);
 FUNC_3(VAR_1, VAR_2, &VAR_4->tx_cq);
 FUNC_0(VAR_1, VAR_5, &VAR_4->icosq_cq);
}
