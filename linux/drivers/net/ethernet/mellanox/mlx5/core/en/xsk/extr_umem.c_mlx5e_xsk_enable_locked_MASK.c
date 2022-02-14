
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct xdp_umem {int dummy; } ;
struct mlx5e_xsk_param {int dummy; } ;
struct mlx5e_params {int xdp_prog; } ;
struct TYPE_2__ {struct mlx5e_channel** c; struct mlx5e_params params; } ;
struct mlx5e_priv {int mdev; int xsk; TYPE_1__ channels; int state; } ;
struct mlx5e_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5e_channel*) ;
 int FUNC_1 (struct xdp_umem*,struct mlx5e_xsk_param*) ;
 int FUNC_2 (struct mlx5e_channel*) ;
 int FUNC_3 (struct mlx5e_channel*) ;
 int FUNC_4 (struct mlx5e_priv*,struct mlx5e_params*,struct mlx5e_xsk_param*,struct xdp_umem*,struct mlx5e_channel*) ;
 int FUNC_5 (struct mlx5e_params*,struct mlx5e_xsk_param*,int ) ;
 int FUNC_6 (int *,struct xdp_umem*,size_t) ;
 int FUNC_7 (struct mlx5e_params*,int *,size_t) ;
 int FUNC_8 (struct xdp_umem*) ;
 int FUNC_9 (struct mlx5e_priv*,struct xdp_umem*) ;
 int FUNC_10 (struct mlx5e_priv*,struct mlx5e_channel*) ;
 int FUNC_11 (int *,size_t) ;
 int FUNC_12 (struct mlx5e_priv*,struct xdp_umem*) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct mlx5e_priv *VAR_3,
       struct xdp_umem *VAR_4, u16 VAR_5)
{
 struct mlx5e_params *VAR_6 = &VAR_3->channels.params;
 struct mlx5e_xsk_param VAR_7;
 struct mlx5e_channel *VAR_8;
 int VAR_9;

 if (FUNC_14(FUNC_7(&VAR_3->channels.params, &VAR_3->xsk, VAR_5)))
  return -VAR_0;

 if (FUNC_14(!FUNC_8(VAR_4)))
  return -VAR_1;

 VAR_9 = FUNC_9(VAR_3, VAR_4);
 if (FUNC_14(VAR_9))
  return VAR_9;

 VAR_9 = FUNC_6(&VAR_3->xsk, VAR_4, VAR_5);
 if (FUNC_14(VAR_9))
  goto err_unmap_umem;

 FUNC_1(VAR_4, &VAR_7);

 if (!FUNC_13(VAR_2, &VAR_3->state)) {

  goto validate_closed;
 }

 if (!VAR_6->xdp_prog) {



  goto validate_closed;
 }

 VAR_8 = VAR_3->channels.c[VAR_5];

 VAR_9 = FUNC_4(VAR_3, VAR_6, &VAR_7, VAR_4, VAR_8);
 if (FUNC_14(VAR_9))
  goto err_remove_umem;

 FUNC_0(VAR_8);





 VAR_9 = FUNC_10(VAR_3, VAR_3->channels.c[VAR_5]);
 if (FUNC_14(VAR_9))
  goto err_deactivate;

 return 0;

err_deactivate:
 FUNC_3(VAR_8);
 FUNC_2(VAR_8);

err_remove_umem:
 FUNC_11(&VAR_3->xsk, VAR_5);

err_unmap_umem:
 FUNC_12(VAR_3, VAR_4);

 return VAR_9;

validate_closed:



 if (!FUNC_5(VAR_6, &VAR_7, VAR_3->mdev)) {
  VAR_9 = -VAR_1;
  goto err_remove_umem;
 }

 return 0;
}
