
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct xdp_umem {int dummy; } ;
struct mlx5e_priv {int dummy; } ;
struct TYPE_4__ {int num_channels; int xsk; scalar_t__ xdp_prog; } ;
struct mlx5e_channels {int num; int * c; TYPE_1__ params; } ;
struct mlx5e_channel_param {int dummy; } ;
struct mlx5e_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5e_channel_param*) ;
 struct mlx5e_channel_param* FUNC_3 (int,int ) ;
 int FUNC_4 (struct mlx5e_priv*,TYPE_1__*,struct mlx5e_channel_param*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mlx5e_priv*) ;
 int FUNC_7 (struct mlx5e_priv*,int,TYPE_1__*,struct mlx5e_channel_param*,struct xdp_umem*,int *) ;
 struct xdp_umem* FUNC_8 (TYPE_1__*,int ,int) ;

int FUNC_9(struct mlx5e_priv *VAR_2,
   struct mlx5e_channels *VAR_3)
{
 struct mlx5e_channel_param *VAR_4;
 int VAR_5 = -VAR_0;
 int VAR_6;

 VAR_3->num = VAR_3->params.num_channels;

 VAR_3->c = FUNC_0(VAR_3->num, sizeof(struct mlx5e_channel *), VAR_1);
 VAR_4 = FUNC_3(sizeof(struct mlx5e_channel_param), VAR_1);
 if (!VAR_3->c || !VAR_4)
  goto err_free;

 FUNC_4(VAR_2, &VAR_3->params, VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_3->num; VAR_6++) {
  struct xdp_umem *VAR_7 = ((void*)0);

  if (VAR_3->params.xdp_prog)
   VAR_7 = FUNC_8(&VAR_3->params, VAR_3->params.xsk, VAR_6);

  VAR_5 = FUNC_7(VAR_2, VAR_6, &VAR_3->params, VAR_4, VAR_7, &VAR_3->c[VAR_6]);
  if (VAR_5)
   goto err_close_channels;
 }

 FUNC_6(VAR_2);
 FUNC_2(VAR_4);
 return 0;

err_close_channels:
 for (VAR_6--; VAR_6 >= 0; VAR_6--)
  FUNC_5(VAR_3->c[VAR_6]);

err_free:
 FUNC_1(VAR_3->c);
 FUNC_2(VAR_4);
 VAR_3->num = 0;
 return VAR_5;
}
