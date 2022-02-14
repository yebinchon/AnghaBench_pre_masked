
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5e_params {int tx_cq_moderation; } ;
struct mlx5e_channel_param {int tx_cq; } ;
struct mlx5e_channel {int num_tc; TYPE_1__* sq; } ;
struct TYPE_2__ {int cq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5e_channel*,int ,int *,int *) ;

__attribute__((used)) static int FUNC_2(struct mlx5e_channel *VAR_0,
        struct mlx5e_params *VAR_1,
        struct mlx5e_channel_param *VAR_2)
{
 int VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0->num_tc; VAR_4++) {
  VAR_3 = FUNC_1(VAR_0, VAR_1->tx_cq_moderation,
        &VAR_2->tx_cq, &VAR_0->sq[VAR_4].cq);
  if (VAR_3)
   goto err_close_tx_cqs;
 }

 return 0;

err_close_tx_cqs:
 for (VAR_4--; VAR_4 >= 0; VAR_4--)
  FUNC_0(&VAR_0->sq[VAR_4].cq);

 return VAR_3;
}
