
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ttc; } ;
struct mlx5e_priv {int drop_rq; int indir_rqt; int direct_tir; TYPE_1__ fs; struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;


 int FUNC_0 (struct mlx5_core_dev*,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct mlx5e_priv*,int ) ;
 int FUNC_3 (struct mlx5e_priv*,int ) ;
 int FUNC_4 (struct mlx5e_priv*) ;
 int FUNC_5 (struct mlx5e_priv*,int) ;
 int FUNC_6 (struct mlx5e_priv*) ;
 int FUNC_7 (struct mlx5e_priv*) ;
 int FUNC_8 (struct mlx5e_priv*,int ) ;
 int FUNC_9 (struct mlx5e_priv*,int ) ;
 int FUNC_10 (struct mlx5e_priv*,int) ;
 int FUNC_11 (struct mlx5e_priv*,int *) ;
 int FUNC_12 (struct mlx5e_priv*,int *) ;
 int FUNC_13 (struct mlx5e_priv*) ;
 int FUNC_14 (struct mlx5e_priv*,int *) ;

__attribute__((used)) static int FUNC_15(struct mlx5e_priv *VAR_0)
{
 struct mlx5_core_dev *VAR_1 = VAR_0->mdev;
 int VAR_2;

 FUNC_13(VAR_0);

 VAR_2 = FUNC_14(VAR_0, &VAR_0->drop_rq);
 if (VAR_2) {
  FUNC_0(VAR_1, "open drop rq failed, %d\n", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2)
  goto err_close_drop_rq;

 VAR_2 = FUNC_2(VAR_0, VAR_0->direct_tir);
 if (VAR_2)
  goto err_destroy_indirect_rqts;

 VAR_2 = FUNC_5(VAR_0, 0);
 if (VAR_2)
  goto err_destroy_direct_rqts;

 VAR_2 = FUNC_3(VAR_0, VAR_0->direct_tir);
 if (VAR_2)
  goto err_destroy_indirect_tirs;

 VAR_2 = FUNC_6(VAR_0);
 if (VAR_2)
  goto err_destroy_direct_tirs;

 VAR_2 = FUNC_7(VAR_0);
 if (VAR_2)
  goto err_destroy_ttc_table;

 return 0;

err_destroy_ttc_table:
 FUNC_12(VAR_0, &VAR_0->fs.ttc);
err_destroy_direct_tirs:
 FUNC_9(VAR_0, VAR_0->direct_tir);
err_destroy_indirect_tirs:
 FUNC_10(VAR_0, 0);
err_destroy_direct_rqts:
 FUNC_8(VAR_0, VAR_0->direct_tir);
err_destroy_indirect_rqts:
 FUNC_11(VAR_0, &VAR_0->indir_rqt);
err_close_drop_rq:
 FUNC_1(&VAR_0->drop_rq);
 return VAR_2;
}
