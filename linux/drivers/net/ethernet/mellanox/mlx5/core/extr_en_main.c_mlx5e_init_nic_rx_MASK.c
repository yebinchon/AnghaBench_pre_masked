
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int drop_rq; int indir_rqt; int direct_tir; int xsk_tir; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5e_priv*,int ) ;
 int FUNC_4 (struct mlx5e_priv*,int ) ;
 int FUNC_5 (struct mlx5e_priv*) ;
 int FUNC_6 (struct mlx5e_priv*) ;
 int FUNC_7 (struct mlx5e_priv*,int) ;
 int FUNC_8 (struct mlx5e_priv*) ;
 int FUNC_9 (struct mlx5e_priv*,int ) ;
 int FUNC_10 (struct mlx5e_priv*,int ) ;
 int FUNC_11 (struct mlx5e_priv*) ;
 int FUNC_12 (struct mlx5e_priv*,int) ;
 int FUNC_13 (struct mlx5e_priv*) ;
 int FUNC_14 (struct mlx5e_priv*,int *) ;
 int FUNC_15 (struct mlx5e_priv*,int *) ;
 int FUNC_16 (struct mlx5e_priv*) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct mlx5e_priv *VAR_0)
{
 struct mlx5_core_dev *VAR_1 = VAR_0->mdev;
 int VAR_2;

 FUNC_8(VAR_0);

 VAR_2 = FUNC_15(VAR_0, &VAR_0->drop_rq);
 if (VAR_2) {
  FUNC_0(VAR_1, "open drop rq failed, %d\n", VAR_2);
  goto err_destroy_q_counters;
 }

 VAR_2 = FUNC_6(VAR_0);
 if (VAR_2)
  goto err_close_drop_rq;

 VAR_2 = FUNC_3(VAR_0, VAR_0->direct_tir);
 if (VAR_2)
  goto err_destroy_indirect_rqts;

 VAR_2 = FUNC_7(VAR_0, 1);
 if (VAR_2)
  goto err_destroy_direct_rqts;

 VAR_2 = FUNC_4(VAR_0, VAR_0->direct_tir);
 if (VAR_2)
  goto err_destroy_indirect_tirs;

 VAR_2 = FUNC_3(VAR_0, VAR_0->xsk_tir);
 if (FUNC_17(VAR_2))
  goto err_destroy_direct_tirs;

 VAR_2 = FUNC_4(VAR_0, VAR_0->xsk_tir);
 if (FUNC_17(VAR_2))
  goto err_destroy_xsk_rqts;

 VAR_2 = FUNC_5(VAR_0);
 if (VAR_2) {
  FUNC_1(VAR_1, "create flow steering failed, %d\n", VAR_2);
  goto err_destroy_xsk_tirs;
 }

 VAR_2 = FUNC_16(VAR_0);
 if (VAR_2)
  goto err_destroy_flow_steering;

 return 0;

err_destroy_flow_steering:
 FUNC_11(VAR_0);
err_destroy_xsk_tirs:
 FUNC_10(VAR_0, VAR_0->xsk_tir);
err_destroy_xsk_rqts:
 FUNC_9(VAR_0, VAR_0->xsk_tir);
err_destroy_direct_tirs:
 FUNC_10(VAR_0, VAR_0->direct_tir);
err_destroy_indirect_tirs:
 FUNC_12(VAR_0, 1);
err_destroy_direct_rqts:
 FUNC_9(VAR_0, VAR_0->direct_tir);
err_destroy_indirect_rqts:
 FUNC_14(VAR_0, &VAR_0->indir_rqt);
err_close_drop_rq:
 FUNC_2(&VAR_0->drop_rq);
err_destroy_q_counters:
 FUNC_13(VAR_0);
 return VAR_2;
}
