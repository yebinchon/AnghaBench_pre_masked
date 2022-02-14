
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5e_tirc_config {int dummy; } ;
struct mlx5e_priv {int rss_params; } ;
struct TYPE_2__ {int rqtn; } ;
struct mlx5e_hairpin {int * indir_tirn; int func_mdev; TYPE_1__ indir_rqt; int tdn; struct mlx5e_priv* func_priv; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (void*,void*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,int *,int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int *,struct mlx5e_tirc_config*,void*,int) ;
 struct mlx5e_tirc_config FUNC_9 (int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(struct mlx5e_hairpin *VAR_7)
{
 struct mlx5e_priv *VAR_8 = VAR_7->func_priv;
 u32 VAR_9[FUNC_3(VAR_2)];
 int VAR_10, VAR_11, VAR_12;
 void *VAR_13;

 for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
  struct mlx5e_tirc_config VAR_14 = FUNC_9(VAR_10);

  FUNC_4(VAR_9, 0, FUNC_2(VAR_2));
  VAR_13 = FUNC_0(VAR_2, VAR_9, VAR_3);

  FUNC_1(VAR_13, VAR_13, VAR_6, VAR_7->tdn);
  FUNC_1(VAR_13, VAR_13, VAR_4, VAR_1);
  FUNC_1(VAR_13, VAR_13, VAR_5, VAR_7->indir_rqt.rqtn);
  FUNC_8(&VAR_8->rss_params, &VAR_14, VAR_13, 0);

  VAR_12 = FUNC_5(VAR_7->func_mdev, VAR_9,
        FUNC_2(VAR_2), &VAR_7->indir_tirn[VAR_10]);
  if (VAR_12) {
   FUNC_7(VAR_7->func_mdev, "create indirect tirs failed, %d\n", VAR_12);
   goto err_destroy_tirs;
  }
 }
 return 0;

err_destroy_tirs:
 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
  FUNC_6(VAR_7->func_mdev, VAR_7->indir_tirn[VAR_11]);
 return VAR_12;
}
