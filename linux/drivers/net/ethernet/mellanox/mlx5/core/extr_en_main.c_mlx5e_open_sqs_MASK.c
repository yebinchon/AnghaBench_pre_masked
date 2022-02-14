
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int max_nch; int ** tisn; } ;
struct mlx5e_params {int num_tc; } ;
struct mlx5e_channel_param {int sq; } ;
struct mlx5e_channel {int ix; size_t lag_port; int * sq; struct mlx5e_priv* priv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx5e_channel*,int ,int,struct mlx5e_params*,int *,int *,int) ;

__attribute__((used)) static int FUNC_2(struct mlx5e_channel *VAR_0,
     struct mlx5e_params *VAR_1,
     struct mlx5e_channel_param *VAR_2)
{
 struct mlx5e_priv *VAR_3 = VAR_0->priv;
 int VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->num_tc; VAR_5++) {
  int VAR_6 = VAR_0->ix + VAR_5 * VAR_3->max_nch;

  VAR_4 = FUNC_1(VAR_0, VAR_0->priv->tisn[VAR_0->lag_port][VAR_5], VAR_6,
           VAR_1, &VAR_2->sq, &VAR_0->sq[VAR_5], VAR_5);
  if (VAR_4)
   goto err_close_sqs;
 }

 return 0;

err_close_sqs:
 for (VAR_5--; VAR_5 >= 0; VAR_5--)
  FUNC_0(&VAR_0->sq[VAR_5]);

 return VAR_4;
}
