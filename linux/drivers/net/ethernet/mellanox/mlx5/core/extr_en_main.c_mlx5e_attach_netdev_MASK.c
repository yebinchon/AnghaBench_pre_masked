
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5e_profile {int (* init_tx ) (struct mlx5e_priv*) ;int (* init_rx ) (struct mlx5e_priv*) ;int (* cleanup_tx ) (struct mlx5e_priv*) ;int (* enable ) (struct mlx5e_priv*) ;} ;
struct TYPE_6__ {int indirection_rqt; } ;
struct TYPE_4__ {int num_channels; } ;
struct TYPE_5__ {TYPE_1__ params; } ;
struct mlx5e_priv {TYPE_3__ rss_params; TYPE_2__ channels; int mdev; int state; struct mlx5e_profile* profile; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mlx5e_priv*) ;
 int FUNC_5 (struct mlx5e_priv*) ;
 int FUNC_6 (struct mlx5e_priv*) ;
 int FUNC_7 (struct mlx5e_priv*) ;

int FUNC_8(struct mlx5e_priv *VAR_2)
{
 const struct mlx5e_profile *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_3 = VAR_2->profile;
 FUNC_0(VAR_1, &VAR_2->state);


 VAR_4 = FUNC_3(VAR_2->mdev);
 if (VAR_2->channels.params.num_channels > VAR_4) {
  FUNC_1(VAR_2->mdev, "MLX5E: Reducing number of channels to %d\n", VAR_4);
  VAR_2->channels.params.num_channels = VAR_4;
  FUNC_2(VAR_2->rss_params.indirection_rqt,
           VAR_0, VAR_4);
 }

 VAR_5 = VAR_3->init_tx(VAR_2);
 if (VAR_5)
  goto out;

 VAR_5 = VAR_3->init_rx(VAR_2);
 if (VAR_5)
  goto err_cleanup_tx;

 if (VAR_3->enable)
  VAR_3->enable(VAR_2);

 return 0;

err_cleanup_tx:
 VAR_3->cleanup_tx(VAR_2);

out:
 return VAR_5;
}
