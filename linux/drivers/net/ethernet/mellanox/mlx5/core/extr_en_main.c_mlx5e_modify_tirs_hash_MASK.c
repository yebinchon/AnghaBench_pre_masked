
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5e_tirc_config {int dummy; } ;
struct mlx5e_rss_params {int * rx_hash_fields; } ;
struct mlx5e_priv {TYPE_2__* inner_indir_tir; struct mlx5_core_dev* mdev; TYPE_1__* indir_tir; struct mlx5e_rss_params rss_params; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_6__ {int hash; } ;
struct TYPE_5__ {int tirn; } ;
struct TYPE_4__ {int tirn; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ,void*,int ,int) ;
 int FUNC_2 (void*) ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (void*,int ,int) ;
 int FUNC_4 (struct mlx5_core_dev*,int ,void*,int) ;
 int FUNC_5 (struct mlx5e_rss_params*,struct mlx5e_tirc_config*,void*,int) ;
 int FUNC_6 (struct mlx5_core_dev*) ;
 int FUNC_7 (struct mlx5e_tirc_config*,int,int ) ;
 int VAR_3 ;

void FUNC_8(struct mlx5e_priv *VAR_4, void *VAR_5, int VAR_6)
{
 void *VAR_7 = FUNC_0(VAR_3, VAR_5, VAR_2);
 struct mlx5e_rss_params *VAR_8 = &VAR_4->rss_params;
 struct mlx5_core_dev *VAR_9 = VAR_4->mdev;
 int VAR_10 = FUNC_2(VAR_7);
 struct mlx5e_tirc_config VAR_11;
 int VAR_12;

 FUNC_1(VAR_3, VAR_5, VAR_1.hash, 1);

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  FUNC_3(VAR_7, 0, VAR_10);
  FUNC_7(&VAR_11, VAR_12,
         VAR_8->rx_hash_fields[VAR_12]);
  FUNC_5(VAR_8, &VAR_11, VAR_7, 0);
  FUNC_4(VAR_9, VAR_4->indir_tir[VAR_12].tirn, VAR_5, VAR_6);
 }

 if (!FUNC_6(VAR_4->mdev))
  return;

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  FUNC_3(VAR_7, 0, VAR_10);
  FUNC_7(&VAR_11, VAR_12,
         VAR_8->rx_hash_fields[VAR_12]);
  FUNC_5(VAR_8, &VAR_11, VAR_7, 1);
  FUNC_4(VAR_9, VAR_4->inner_indir_tir[VAR_12].tirn, VAR_5,
         VAR_6);
 }
}
