
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ttc_params {int * indir_tirn; } ;
struct TYPE_7__ {int inner_ttc; int ttc; int ns; } ;
struct mlx5e_priv {TYPE_3__ fs; TYPE_4__* netdev; TYPE_2__* indir_tir; TYPE_1__* inner_indir_tir; int mdev; } ;
struct TYPE_8__ {int hw_features; } ;
struct TYPE_6__ {int tirn; } ;
struct TYPE_5__ {int tirn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlx5e_priv*) ;
 int FUNC_2 (struct mlx5e_priv*) ;
 int FUNC_3 (struct mlx5e_priv*,struct ttc_params*,int *) ;
 int FUNC_4 (struct mlx5e_priv*,struct ttc_params*,int *) ;
 int FUNC_5 (struct mlx5e_priv*,int *) ;
 int FUNC_6 (struct ttc_params*) ;
 int FUNC_7 (struct mlx5e_priv*,struct ttc_params*) ;
 int FUNC_8 (struct ttc_params*) ;
 int FUNC_9 (TYPE_4__*,char*,int) ;

__attribute__((used)) static int FUNC_10(struct mlx5e_priv *VAR_4)
{
 struct ttc_params VAR_5 = {};
 int VAR_6, VAR_7;

 VAR_4->fs.ns = FUNC_0(VAR_4->mdev,
            VAR_2);

 if (!VAR_4->fs.ns)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_4);
 if (VAR_7) {
  FUNC_9(VAR_4->netdev, "Failed to create arfs tables, err=%d\n",
      VAR_7);
  VAR_4->netdev->hw_features &= ~VAR_3;
 }

 FUNC_7(VAR_4, &VAR_5);
 FUNC_6(&VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_5.indir_tirn[VAR_6] = VAR_4->inner_indir_tir[VAR_6].tirn;

 VAR_7 = FUNC_3(VAR_4, &VAR_5, &VAR_4->fs.inner_ttc);
 if (VAR_7) {
  FUNC_9(VAR_4->netdev, "Failed to create inner ttc table, err=%d\n",
      VAR_7);
  goto err_destroy_arfs_tables;
 }

 FUNC_8(&VAR_5);
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  VAR_5.indir_tirn[VAR_6] = VAR_4->indir_tir[VAR_6].tirn;

 VAR_7 = FUNC_4(VAR_4, &VAR_5, &VAR_4->fs.ttc);
 if (VAR_7) {
  FUNC_9(VAR_4->netdev, "Failed to create ttc table, err=%d\n",
      VAR_7);
  goto err_destroy_inner_ttc_table;
 }

 return 0;

err_destroy_inner_ttc_table:
 FUNC_5(VAR_4, &VAR_4->fs.inner_ttc);
err_destroy_arfs_tables:
 FUNC_2(VAR_4);

 return VAR_7;
}
