
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttc_params {int * indir_tirn; int any_tt_tirn; } ;
struct TYPE_6__ {int ttc; int ns; } ;
struct mlx5e_priv {int netdev; TYPE_3__ fs; TYPE_2__* indir_tir; TYPE_1__* direct_tir; int mdev; } ;
struct TYPE_5__ {int tirn; } ;
struct TYPE_4__ {int tirn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mlx5e_priv*,struct ttc_params*,int *) ;
 int FUNC_2 (struct ttc_params*) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int FUNC_4(struct mlx5e_priv *VAR_2)
{
 struct ttc_params VAR_3 = {};
 int VAR_4, VAR_5;

 VAR_2->fs.ns = FUNC_0(VAR_2->mdev,
           VAR_1);


 VAR_3.any_tt_tirn = VAR_2->direct_tir[0].tirn;
 FUNC_2(&VAR_3);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3.indir_tirn[VAR_4] = VAR_2->indir_tir[VAR_4].tirn;

 VAR_5 = FUNC_1(VAR_2, &VAR_3, &VAR_2->fs.ttc);
 if (VAR_5) {
  FUNC_3(VAR_2->netdev, "Failed to create rep ttc table, err=%d\n", VAR_5);
  return VAR_5;
 }
 return 0;
}
